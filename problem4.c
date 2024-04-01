#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum = a+b;
    int mult = a*b;
    int sub = a-b;

    printf("%d + %d = %d \n",a,b,sum);
     printf("%d * %d = %d \n",a,b,mult);
      printf("%d - %d = %d \n",a,b,sub);
}