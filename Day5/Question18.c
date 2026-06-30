#include<stdio.h>
int factorial(int d){
    int fact=1;
    for(int i=1;i<=d;i++){
        fact*=i;
    }
    return fact;
}
int isstrongnumber(int n){
    if(n<=0) return 0;
    int sum=0,temp=n;
    while(temp>0){
        int digit=temp%10;
        sum+=factorial(digit);
        temp/=10;
    }
    return sum==n;
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(isstrongnumber(num)){
        printf("%d is a strong number.\n",num);
    }else{
        printf("%d is not a strong number.\n",num);
    }
    return 0;
}