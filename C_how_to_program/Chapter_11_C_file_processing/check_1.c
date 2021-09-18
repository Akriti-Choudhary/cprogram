//Reading data randamoly to a random-access file
#include <stdio.h>
//clientData structure defination
struct clientData{
	unsigned int acctNum;	//account number
	char lastName[15];	//account last name
	char firstName[10];	//account first name
	double balance;	//account balance
	};	//end structure clientData
int main(void)
{
	FILE *cfPtr;	//account.dat file pointer
	//fopen opens the file; exist if file cannot be opened
	if((cfPtr = fopen("credit.txt","rb")) == NULL)
	{	puts("File could not be opened ");
	}
	else{
		printf("%-6s%-16s%-11s%10s\n","Acct","Last Name", "First Name","Balance");
		
		//read all records from file (until eof)
		while(!feof(cfPtr)){
			//create clientData with default information
			struct clientData client ;
			int result = fread(&client ,sizeof(struct clientData), 1,cfPtr);
			//display record
			if(result != 0 & client.acctNum != 0){
				printf("%-6d%-16s%-11s%10.2f\n",
					client.acctNum,client.lastName,
					client.firstName, client.balance);
		}
	}
	fclose(cfPtr);
	
	}
}
