#include<stdio.h>
int main(){
    int n, counnt=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0){
        n&=(n-1);
        counnt++;
    }
    printf("Number of set bits: %d", count);
    return 0;
}