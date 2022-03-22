#include<stdio.h>
int main()
{
    int a,b,notes[6]= {2,5,10,20,50,100};
    while(1)
    {
        scanf("%d %d",&a,&b);
        if(a==0 && b==0) break;
        int c=b-a;
        int i,j,f=0;
        for(i=0; i<6; i++)
        {
            for(j=i+1; j<6; j++)
            {
                if(c==notes[i]+notes[j])
                {
                    printf("possible\n");
                    f=1;
                    break;

                }
            }
            if(f==1) break;
        }
        if(f==0) printf("impossible\n");

    }

    return 0;
}
