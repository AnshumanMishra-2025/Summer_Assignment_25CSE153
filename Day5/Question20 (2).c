#include<stdio.h>
int main(){
    int num;
    printf("enter a num:");
    scanf("%d",&num);
    int temp=num;
    int factor=2;
    if(num<=1){
        printf("%d has no prime factors.\n", num);
        return 0;
    }
    while(temp>1){
        if(temp%factor==0){
            temp=temp/factor;
        }
        else{
            factor++;
        }
    }
    printf("the largest prime factor of %d is:%d\n", num, factor);
    return 0;
}