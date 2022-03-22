#include<stdio.h>
int main(){
int arr[100][100],i,j,n;
while(scanf("%d",&n)!=EOF){

    for (i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j==n-i-1) arr[i][j]=2;
            else if(i==j) arr[i][j]=1;
            else arr[i][j]=3;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }


}
}
