
/*
C program to Find the frequency of chars in string
 */

#include "stdio.h"
#include "stdlib.h"

int main()
{
	char MyString[200];
	char MyChar;
	int i=0;
	int Freq=0;
	printf("Enter a String:");
	fflush(stdout);
	gets(MyString);
	fflush(stdin);
	printf("Enter a character to find a frequency:");
	fflush(stdout);
	scanf("%c",&MyChar);
	for(i=0;MyString[i]!='\0';i++)
	{
		if(MyString[i]==MyChar)
			Freq++;

	}
	printf("Frequency of %c is %d",MyChar,Freq);

}

