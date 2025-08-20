#include<stdio.h>
#include<conio.h>
void main()
{
    int A,B,C;
    printf("enter the 3 numbers: ");
    scanf("%d %d %d",&A,&B,&C);
    if(A>B)
    {
        if(A>C)
        {
            printf("\n %d is largest number ",A);
        }
        else
        {
            printf("\n %d is largest number",C);
        }
    }
    else
    {
        if(B>C)
        {
            printf("\n %d is largest number ",B);
        }
        else
        {
            printf("\n %d is largest number ",C);
        }

    }
    getch();
}
