//creating a random-access file sequentially
#include <stdio.h>
//clientData structure defination
struct clientData{
	unsigned int acctNum;
	char lastName[15];
	char firstName[10];
	double balance;
	};
int main()
{
	FILE *cfPtr;	//account.dat file pointer
	//fopen opens the file; exist if file cannot be opened
	if((cfPtr = fopen("accounts.dat","wb")) == NULL)
	{	puts("File could not be opened ");
	}
	else{
		//create clientData with default information
		struct clientData blankClient = {0,"","",0.0};
		//output 100 blank records to file
		for(unsigned int i = 1; i <= 100 ;++i)
		{	fwrite(&blankClient, sizeof(struct clientData),1,cfPtr);
		}
		fclose(cfPtr);
	
	}
}
