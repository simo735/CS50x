#include<stdio.h>
#include<cs50.h>
#include<string.h>
int main(int argc, string argv[])
{
	//Checking Command Line Arguements
	if (argc!=2)
	{
	printf("Usage: ./caesar <key>\n");
	return 1;
	} 
	//Checking Wheather the Key is positive
	if (atoi(argv[1])<0)
	{
	printf("Key must be a non-negative integer.\n");
	return 1;
	} 
	//Declarations and Definitions
	string input=GetString();
	int key=atoi(argv[1]);
	key=key%26;
	int n=strlen(input);
	int output[n],tmp;
	//Caesar Cipher Algorithm
	for (int i=0;i<n;i++)
	{
		int j=input[i];
		if (j>=65 && j<=90)
		{
			if ((j+key)>90)
			{
				tmp=(j+key)%90;
				output[i]=64+tmp;
			}
			else
				output[i]=(j+key);
		}
		else if((j>=97 && j<=122 ))
		{
			if ((j+key)>122)
			{
				tmp=(j+key)%122;
				output[i]=96+tmp;
			}
			else
				output[i]=(j+key);
		}
		else
			output[i]=j;
	}
	//Printing Output
	for (int k=0;k<n;k++)
		printf("%c",output[k]);
	printf("\n");
	return 0;
}
