#include<stdio.h>
float main()
{
    float s,a,d,n;
    printf("\n enter the salary :");
    scanf("%f ",&s);
    if(s>10000)
    {
        a=(s*10/100);
        d=(s*3/100);
        n=s+a-d;
        printf("\n your net salary is %f",n);
    }
    else
    {
        a=(s*7/100);
        d=(s*2/100);
        n=s+a-d;
        printf("\n your net salary is %f",n);
    }
}
