#include<stdio.h>
#include<math.h>
int main(){
    int n,i,j,k;
    while(scanf("%d",&n)!=EOF){
            int arr[101][101];
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                arr[i][j]=0;
            }
        }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            int m=n/3;
            //printf("%d",m);
            while (i>=m){
                if(i>=n-m) break;
                for(k=m;k<n-m;k++){
                 if(i==k && i==((n-1)/2)) arr[i][k]=4;
                 else arr[i][k]=1;
                 }
                 //printf("i %d\n",i);
                i++;
                }

            if(i==j) arr[i][j]=2;
            else if(j==n-i-1) arr[i][j]=3;


    }
    }
//rintf("%d ",11/3);

      for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                printf("%d",arr[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }


return 0;
}
