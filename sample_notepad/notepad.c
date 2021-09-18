#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

struct dll{
	char s[200];
	int index;
	struct dll *prev,*next;
};

int getch() {
	struct termios oldt,newt;
	int ch;
	tcgetattr(STDIN_FILENO, &oldt);
	newt = oldt;
	newt.c_lflag &= ~( ICANON | ECHO);
	tcsetattr(STDIN_FILENO, TCSANOW ,&newt);
	ch = getchar();
	tcsetattr(STDIN_FILENO, TCSANOW ,&oldt);
	return ch;
}


void editcommands(void);
void addline(struct dll *temp);
void inp(void);
void printlist(void);
void closer(void);
void edit(void);
void addnode(char t[],struct dll *q);
void delnode(struct dll *p);
void clearlist(void);
void editnode(struct dll *p);
void save(void);

struct dll *head;
char file[20];

FILE *fp = NULL;

int main(){

	char c;

	head = (struct dll*)malloc(sizeof(struct dll));

	(head->next) = 0;
	while(1) {
		system("clear");
		
		printf("\nThis editor provides the following options \n");
		printf("R :opens a file and reads it into a buffer \n If file doesnot exist creates a new file for editing");
		printf("E :edit the currently open file \n");
		printf("X :closes the current file and allows you to open another file \n");
		printf("Q : quit discarding  any unsaved changes\n");
		
		
		c = getch();
		
		switch(c){
		
		case 'r' :
		case 'R' :
				inp();
				break;
		case 'e' :
		case 'E' :
				edit();
				break;
		case 'x' :
		case 'X' :
				closer();
				break;
		case 'q' :
		case 'Q' :
				system("clear");
				exit(1);
				break;
		}
	}
}

void addnode(char t[] ,struct dll *q){
	struct dll *p = (struct dll*)malloc(sizeof(struct dll));
	struct dll *temp = q -> next;
	strcpy(p->s,t);
	p -> prev = q ;
	p -> next = q -> next;
	
	if( (q -> next)!= NULL){
		((q -> next)->prev) = p;
		while(temp != NULL){
			(temp -> index)++;
			
			temp = temp -> next;
		}
	}
	q -> next = p;
	p -> index = q -> index + 1;
}


void delnode(struct dll *p){
	struct dll *temp = p -> next;
	((p -> prev ->next)) = p -> next;
	if(p -> next != NULL){
		((p -> next) -> prev) = p -> prev;
		while(temp != NULL){
			(temp -> index)--;
			temp = temp -> next;
			}
	}
	free(p);
}

void clearlist(void){
	while(head -> next != NULL)
		delnode(head -> next);
	}
	
	
void editnode(struct dll *p){
	printf("\nThe original line is :\n%s" , p->s);
	printf("\n Enter the new line :\n");
	gets(p -> s);
	printf("\n Line edited \n");
}

void printlist(void){
	struct dll *temp = head;
	system("clear");
	while(temp->next != NULL){
		temp = temp -> next;
		printf("%d %s \n" ,temp->index,temp->s);
	}
}

void closer(void){
	if(fp == NULL)
		return;
	fclose(fp);
	fp = NULL;
	clearlist();
}


void inp(void){
	struct dll *buff = head;
	char c;
	char buf[200];
	if(fp != NULL){
		printf("\n There is another file open it will be closed \n do you want to continue ?(Y/N):");
	c = getch();
	if(c == 'n' || c == 'N')
		return;
	else
		closer();
	}
	fflush(stdin);
	clearlist();

	fp = fopen(file,"r");
	if(fp == NULL){
		printf("\n The file doesnot exist do you want to create one?(Y/N) :");
		c = getchar();
		getchar();
		if( c == 'N' || c == 'n')
			return ;
		else{
			fp = fopen(file, "w");
			edit();
			return;
		}
	}
	if(feof(fp))
	return;
	
	while((fgets(buf,201,fp)) != NULL){
		addnode(buf,buff);
		buff = buff -> next;
	}
		
	edit();
}



void edit(void){
	struct dll *temp = head -> next;
	char c,d;
	
	system("clear");
	
	if(fp == NULL){
		printf("\n No file is open \n");
		return ;
	}
	
	printf("\n The file contents will be displayed along with the line number \npress any key \n");
	getch();
	system("clear");
	printlist();
	if(temp != NULL)
		printf("You are at line number %d" ,temp -> index);
		else
			temp = head;
			
		editcommands();
		
		while(1){
		c = getch();
		 switch(c){
		 case 'c' :
		 case 'C' :
			 editnode(temp);
			 break;
		case 'p' :
		case 'P' :
			 if(temp == head ){
				printf("\n File empty");
			 	break;
			 }
			 if(temp -> prev != head){
			 	temp = temp -> prev;
			 	printf("\nYou are at line number %d" ,temp->index);
			 }
			 else
				printf("\nalready at first line");
				break;
		case 'n' :
		case 'N' :
			 if(temp ->next != NULL ){
			 	temp = temp -> next;
			 	printf("\nYou are at line number %d" ,temp->index);
			 }
			 else if(temp == head)
			 	printf("\nFile empty");
			 else 
				printf("\nalready at first line");
				break;
					 			 
		case 'a' :
		case 'A' :
				addline(temp);
				temp = temp -> next;
				printlist();
				printf("\nYou are at line number %d" ,temp->index);
				break;
				
		case 'h' :
		case 'H' :
				system("clear");
				editcommands();
				system("clear");
			
		case 'v' :
		case 'V' :
				printlist();
				printf("\n You are at line number %d",temp->index);
				break;
				
		case 'd' :
		case 'D' :

				if(temp == head){
					printf("\nFile empty\n");
					break;
				}
			temp = temp -> prev;
			delnode(temp ->next);
			printf("\nLine deleted\n");
			printlist();
			if(temp ->index)
				printf("\n You are currently at line number %d" ,temp ->index);
				if(((temp -> prev)== NULL)&&((temp ->next) != NULL))
					temp = temp -> next;
				else if((temp == head) &&((temp ->next) == NULL))
					printf("\nFile empty");
					break;
		case 'x' :
		case 'X' :
				printf("\nDo you want to save the file before existing?(y/n) :");
				d = getch();
				if(d == 'y' || d == 'Y')
					save();
					closer();
					return;
					break;
		case 's' :
		case 'S' :
				save();
				closer();
				return;
				break;				
		}
		}
		}
	
void addline(struct dll *temp){
	char buff[200];
	printf("\n enter the new line \n");
	gets(buff);
	addnode(buff,temp);
}

void save(void){
	struct dll *temp = head -> next;
	fclose(fp);
	fp = fopen(file ,"w");
	while(temp != NULL){
		fprintf(fp,"%s",temp -> s);
		temp = temp -> next;
	}
}
		
void editcommands(void){
	printf("\n Editor commands\n");
	printf("The edit menu provides the following options \n");
	printf("C :edit the current line \n");
	printf("P :move one line up \n");
	printf("N :move one line down \n");
	printf("D :delete the current line \n");
	printf("V :display the contents of the buffer\n");
	printf("A :add a line after the line at which you are navigating \n");
	printf("S :save changes and exit to main menu \n");
	printf("X :exit discarding any changes \n");
	printf("H :show the list of commands \n");	
	getch();
}	

		
