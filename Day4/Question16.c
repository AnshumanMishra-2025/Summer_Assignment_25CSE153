#include<stdio.h>
#include<math.h>
int main()
{int low, high, number, orginalnumber, rem, count=0, result=0;
printf("enter two numbers: ");
scanf("%d%d",&low,&high);
printf("armstrong numbers between %d and %d are: ", low, high);
if(high<low){
    int temp=low;
    low=high;
    high=temp;
}
for(number=low+1; number<high; ++number){
    originalnumber=number;
    while(originalnumeber!=0){
        originalnumber/=10;
        ++count;
    }
    while(originalnumber!=0){
        rem=originalnumber%10;
        result+=pow(rem,count);
        originalnumber/=10;
    }
    if(result==number){
        printf("%d",number);
    }
    count=0;
    result=0;
}
printf("\n");
return 0;}