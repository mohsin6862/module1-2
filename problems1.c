// Write a C program to check whether a given number is even or odd using if-else statement.


#include <stdio.h>
int main()
{

    int num;
    printf("please enter a number");
    scanf("%d",&num);
    if(num % 2 == 0){
        printf(" %d is a even number",num);
    }
    else{
        printf("%d is  a odd number",num);
    }
    return 0;
}