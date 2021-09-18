//writing data randamoly to a random-access file
#include <stdio.h>
//clientData structure defination
struct clientData{
	unsigned int acctNum;	//account number
	char lastName[15];	//account last name
	char firstName[10];	//account first name
	double balance;	//account balance
	};	//end structure clientData
int main()
{
	FILE *cfPtr;	//account.txt file pointer
	//fopen opens the file; exist if file cannot be opened
	if((cfPtr = fopen("accounts.txt","w")) == NULL)
	{	puts("File could not be opened ");
	}
	else{
		//create clientData with default information
		struct clientData client = {0,"","",0.0};
		//require user to specify account number
		printf("%s","Enter account number" "(1 to 100,0 to end input):");
		scanf("%d",&client.acctNum);
		//user enters lastname,first name and balance value
		while(client.acctNum != 0){
			//user enters last name ,first name and balance
			printf("%s","\nEnter lastname, firstname , balance :");
			//set record lastName,firstname and balance value
					fscanf(stdin,"%14s%9s%lf",client.lastName ,client.firstName ,&client.balance);
			//seek position in file
			fseek(cfPtr, (client.acctNum - 1) * sizeof(struct clientData) , SEEK_SET);
			
			//write user-specified information in the file
			fwrite(&client ,sizeof(struct clientData) ,1,cfPtr);
			
			//enable user to input another account number
			printf("%s","Enter account number" "(1 to 100,0 to end input):");
			scanf("%d",&client.acctNum);
		}
		fclose(cfPtr);
	
	}
}
