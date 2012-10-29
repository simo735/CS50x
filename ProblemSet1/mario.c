#include<stdio.h>
#include<cs50.h>
int main(void)
{
 
  int h;
  while (1)
  {
  printf("Height:");
  h=GetInt();
  if (h>=0 && h<24)
  break;
  }
  for(int i=h;i>0;i--)
  {
    for(int j=i-1;j>0;j--)
    {
    printf(" ");
    } 
    int v=i-1;
    for(int k=h-v+1;k>0;k--)
    {
      printf("#");
       
    }

    printf("\n");
  }

  return 0;
}