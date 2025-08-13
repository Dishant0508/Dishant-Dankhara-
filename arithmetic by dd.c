#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,num3;
    printf(" enter the num 1:");
    scanf("%d",&num1);
    printf(" enter the num 2:");
    scanf("%d",&num2);
    num3=num1+num2;
    printf(" %d+%d=%d \n",num1,num2,num3);
    num3=num1-num2;
    printf(" %d-%d=%d \n",num1,num2,num3);
    num3=num1*num2;
    printf(" %d*%d=%d \n",num1,num2,num3);
    num3=num1/num2;
    printf(" %d/%d=%d \n",num1,num2,num3);
    getch();
}
