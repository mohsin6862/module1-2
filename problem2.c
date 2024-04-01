// Develop a program that takes three numbers as input and prints the largest among them using nested if-else statements.

// #include<stdio.h>
// int main (){

//     int num1,num2,num3;
//     printf("please enter you three number");
//     scanf("%d %d %d",&num1, &num2, &num3);
//     if(num1>num2){
//         if(num1 > num3){
//          printf("%d is the largest Number",num1);
//         }

//         else{
//             printf("%d is the largest number",num3);
//         }
//     }
//         else {
//             if(num2>num1 && num2>num3){
//                 printf("%d is the largest number",num2);
//             }
//             else{
//                 printf("%d is the largest number",num3);
//             }
//         }
        
//     return 0;
//     }


#include<stdio.h>
int main(){
    int num1,num2,num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    if(num1>num2 && num1 > num3){
        printf("%d is the largest number",num1);
    }
    else if (num2>num1 && num2 > num3){
        printf("%d is the largest number",num2);
    }
    else{
        printf("%d is the largest number",num3);
    }
    return 0;
}