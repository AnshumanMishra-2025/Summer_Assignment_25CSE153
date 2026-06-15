#include<stdio.h>
int main()
{int low, high, i, f, j;
printf("enter range low and high: ");
scanf("%d%d",&low,&high);
printf("prime no. between %d and %d  are : ", low, high);
for(i=low;i<=high;i++)
{if(i<=1){ continue;}
f=1;
for(j=2;j<=i/2;j++)
{if(i%j==0)
{f=0;
break;}
}
if(f==1){
    printf("%d",i);
}}
printf("\n");
return 0;
}