#include<stdio.h>
void dectobinary(int n){
    int binaryNum[32], i=0;
    if(n==0){
        printf("0");
        return;
    }
    while(n>0){
        binaryNum[i++] = n%2;
        n = n/2;
    }
    for(int j=i-1; j>=0; j--)
        printf("%d", binaryNum[j]);
    }
    int main(){
        int n;
        printf("Enter a decimal number: ");
        scanf("%d", &n);
    destobinary(n);
return 0;}
