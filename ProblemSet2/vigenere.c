#include<stdio.h>
#include<cs50.h>
#include<string.h>
int main(int argc, string argv[])
{
	//Checking Command Line Arguements
	if (argc!=2)
	{
	printf("Usage: ./vigenere <key>\n");
	return 1;
	} 
	//Checking Wheather the Key is Alphabetic or Not
	string s1=argv[1];
	int m=strlen(s1);
	int key[m];
	for (int i=0;i<m;i++)
	{
		int j=s1[i];
		//Storing the Keyvalues in Variable Key
		if ((j>=65 && j<=90))
			key[i]=j-65;
		if ((j>=97 && j<=122 ))  
			key[i]=j-97;  
		if (!((j>=65 && j<=90)|| (j>=97 && j<=122 )))
		{
			printf("Keyword must only contain letters A-Z and a-z\n");
			return 1;
		}
	}
	//Declarations
	string input=GetString();
	int n=strlen(input);
	int output[n];
	int tmp;
	int p=0;
	//Vigenere Algorithm
	for (int i=0;i<n;i++)
	{ 
		int j=input[i];
		if (j>=65 && j<=90)
		{
			if ((j+(key[p%m]))>90)
			{
				tmp=(j+(key[p%m]))%90;
				output[i]=64+tmp;
			}
			else
				output[i]=(j+(key[p%m]));
			p++;     
		}
		else if((j>=97 && j<=122 ))
		{
			if ((j+(key[p%m]))>122)
			{
				tmp=(j+(key[p%m]))%122;
				output[i]=96+tmp;
			}
			else
				output[i]=(j+(key[p%m]));
			p++;     
		}
		else
			output[i]=j;
	}
	//Printing The Output
	for (int k=0;k<n;k++)
		printf("%c",output[k]);
	printf("\n");
	return 0;
}
