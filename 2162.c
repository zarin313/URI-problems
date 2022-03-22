#include<stdio.h>
int main()
{
    int arr[100],n,i,flag=1;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    if(arr[0]>arr[1])
    {
        for(i=1; i<n-1; i++)
        {
            if(i%2!=0){
                if(arr[i]>arr[i+1]){
                        //printf("p %d\n",arr[i]);
                    flag=0;
                    break;

                }

            }
            if(i%2==0){
                if(arr[i]<arr[i+1]){
                        //printf("p %d\n",arr[i]);
                    flag=0;
                    break;

                }

            }
        }
    }
    else if(arr[0]<arr[1])
    {
        for(i=1; i<n-1; i++)
        {
            if(i%2!=0){
                if(arr[i]<arr[i+1]){
                    flag=0;
                    break;

                }

            }
            if(i%2==0){
                if(arr[i]>arr[i+1]){
                    flag=0;
                    break;

                }

            }
        }
    }
    else if(arr[1]==arr[0]) flag=0;
    printf("%d\n",flag);
    return 0;
}
