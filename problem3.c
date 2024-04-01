#include <stdio.h>

int main() {
    // Variables to store the three numbers
    int num1, num2, num3;

    // Ask the user to enter three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Nested if-else statements to find the largest number
    if (num1 >= num2) {
        if (num1 >= num3) {
            printf("The largest number is: %d\n", num1);
        } else {
            printf("The largest number is: %d\n", num3);
        }
    } else {
        if (num2 >= num3) {
            if(num2  >= num1){
              printf("The largest number is: %d\n", num2);
            }
           
        } else {
            printf("The largest number is: %d\n", num3);
        }
    }

    return 0;
}