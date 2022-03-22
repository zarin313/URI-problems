#include<stdio.h>
int main()
{
    int n,i,j,q;
    scanf("%d",&n);
    while(n!=0)
    {
        if(n>=500)
        {
            if(n>=900)
            {
                printf("CM");
                n=n-900;

            }
            else
            {
                printf("D");
                n=n-500;
            }

        }
        else if(n>=100)
        {
            if(n>=400)
            {
                printf("CD");
                n=n-400;
            }
            else
            {
                printf("C");
                n=n-100;
            }
        }
        else if(n>=50)
        {
            if(n>=90)
            {
                printf("XC");
                n=n-90;
            }
            else
            {
                printf("L");
                n=n-50;
            }
        }
        else if(n>=10)
        {
            if(n>=40)
            {
                printf("XL");
                n=n-40;
            }
            else
            {
                printf("X");
                n=n-10;
            }
        }
        else if(n>=5)
        {
            if(n==9)
            {
                printf("IX");
                n=n-9;
            }
            else
            {
                printf("V");
                n=n-5;

            }
        }
        else
        {
            if(n==4)
            {
                printf("IV");
                n=n-4;
            }
            else
            {
                printf("I");
                n=n-1;
            }
        }

    }
    printf("\n");
    return 0;
}
