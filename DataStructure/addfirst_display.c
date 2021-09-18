#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;
};
void addfirst(int data ,struct node *head);
void display(struct node head);
int main(){
	struct node head;
	int data;
	puts("Enter the data to be input :");
	scanf("%d" ,&data);
	addfirst(data , &head);
	
	puts("Enter the data to be input :");
	scanf("%d" ,&data);
	addfirst(data , &head);
	
	puts("Enter the data to be input :");
	scanf("%d" ,&data);
	addfirst(data , &head);
	
	puts("Enter the data to be input :");
	scanf("%d" ,&data);
	
	addfirst(data ,&head);
	printf("calling display");
	display(head);
}
void addfirst(int data ,struct node *head){
	struct node *new_node;
	new_node = malloc(sizeof( struct node));
	new_node->data = data;
	if(head == NULL){
		new_node -> next = NULL;
		head = new_node;
	}
	else{
		new_node -> next = head;
		head = new_node;
	}
}
	
void display(struct node head){
	printf("Inside display");
	if(head == NULL){
		printf("List is Empty");
		return;
	}
	struct node *temp = &head;
	while(temp != NULL){
		printf("Inside display - looping");
		printf("%d" ,temp->data);
		temp = temp -> next;
	}
}


