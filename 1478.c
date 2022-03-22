#include<stdio.h>
int main(){
int n,arr[100][100],i,j,left,right;
while(1){
    scanf("%d",&n);
    if(n==0) break;
    for(i=0;i<n;i++){
        right=1;
        left=i+1;
        for(j=0;j<n;j++){
            if(i==j) arr[i][j]=1;
            else if(i>j){
                arr[i][j]=left;
                left--;

            }
            else if(i<j){
                right++;
                arr[i][j]=right;
            }

        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j==0) printf("%3d",arr[i][j]);
            else printf(" %3d",arr[i][j]);
        }
        printf("\n");
    }
printf("\n");

}


}
