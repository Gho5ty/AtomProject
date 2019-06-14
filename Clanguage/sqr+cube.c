#include<stdio.h>

int main()
{

int first,last,i;

printf("Enter the first and the last number\n");
scanf("%d\n%d",&first,&last);
if (first >= last)
printf("invalid\n");
else
{
  for(i=first;i<=last;i++)
  {
    printf("%d %d %d\n",i,i*i,i*i*i);
  }
}
return 0;
}
