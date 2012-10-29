#include<stdio.h>
#include<cs50.h>
#include<math.h>
int main()
{
int count=0;
m:
printf("O hai!  How much change is owed?\n");
float g= GetFloat();
int f= (int) round(g* 100);
if (f<0)
goto m;
while(1)
{
if (f>=25)
{
count=count+1;
f=f-25;
}
else if(f<25 && f>=10)
{
count=count+1;
f=f-10;
}
else if(f<10 && f>=5)
{
count=count+1;
f=f-5;
}
else if(f<5&& f>=1)
{
count=count+1;
f=f-1;
}
else if (f<1)

break;
}
printf("%d\n",count);

return 0;
}
