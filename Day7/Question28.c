#include<stdio.h>
int reversenum(int n, int rev) {
    if (n == 0)
        return rev;
    else {
        rev = rev * 10 + n % 10;
        return reversenum(n / 10, rev);
    }
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reverse of %d is %d\n", num, reversenum(num, 0));
    return 0;
}