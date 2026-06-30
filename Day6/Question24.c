#include<stdio.h>
int main(){
    double base, result=1.0;

    int exponent;
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    for(int i=0; i<exponent; i++){
        result *= base;
    }
    printf("Result: %.2lf", result);
    return 0;
}