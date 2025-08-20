#include<stdio.h>
#include<conio.h>
void main()
{
    int A,B;
    printf("enter the 2 numbers: ");
    scanf("%d %d",&A,&B);
    if(A>B)
    {
        printf("\n %d is largest number ",A);
        printf("\n %d is smallest number ",B);
    }
    else
    {
        printf("\n %d is largets number ",B);
        printf("\n %d is smallest number ",A);
    }
    getch();
}
