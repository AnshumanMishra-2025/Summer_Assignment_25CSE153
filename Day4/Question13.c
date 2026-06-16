#include<stdio.h>
int main()
{int i, terms, first=0, second=1, next;
printf("enter the number of terms:");
scanf("%d",&terms);
printf("fibonacci series:");
for(i=1;i<=terms;i++){
    print("%d",first);
    next=first+second;
    first=second;
second=next;}
printf("\n");
return 0;}
