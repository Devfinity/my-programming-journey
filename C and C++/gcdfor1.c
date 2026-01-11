#include <stdio.h>

int sumOfDigits(int num){
    int sum = 0, digit;

    while (num !=0){
        digit = num % 10;
        sum += digit;
        num /= 10;
    }
    return sum;
}
int main(){
    int number,result;

    printf("Enter a number: ");
    scanf("%d", &number);

    result = sumOfDigits(number);

    printf("Sum of digits of %d = %d\n", number, result);
    return 0;
}