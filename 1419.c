#include<stdio.h>
int main()
{
    int r,b[11],a[11],i,j,k,l,points_a,points_b,cona,conb,in1;
    while(1)
    {
        scanf("%d",&r);
        if(r==0)
            break;
        points_a=0,points_b=0,cona=0,conb=0;
        for(i=0; i<r; i++)
        {
            scanf("%d",&a[i]);
            points_a=points_a+a[i];

            if(i>=2 && a[i-1]==a[i] && a[i]==a[i-2] )
            {
                if(conb==0 && cona==0)
                {
                    in1=i-2;
                    points_a=points_a+30;
                    cona=1;
                }
            }
        }
        for(j=0; j<r; j++)
        {
            scanf("%d",&b[j]);
            points_b=points_b+b[j];
            if(j>=2 && b[j-1]==b[j] && b[j]==b[j-2] )
            {
                if(in1>=j-2 && cona==1)
                {
                    points_a=points_a-30;
                    if(in1>j-2)
                    {
                        cona=0;
                        //printf("aaa");
                    }
                }

                if(cona==0 && conb==0)
                {
                    points_b=points_b+30;
                    conb=1;
                }
            }
        }
//printf("pa %d pb %d",points_a,points_b);
        if(points_a>points_b) printf("M\n");
        else if(points_a<points_b) printf("L\n");
        else if(points_a==points_b) printf("T\n");
    }
}





