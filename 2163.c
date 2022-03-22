#include<stdio.h>
int main(){
int m,n;
scanf("%d %d",&n,&m);
int arr[n][m],i,j,k,p,found=1000;
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        scanf("%d",&arr[i][j]);
    }
}
for(i=0;i<n;i++){
    for(j=0;j<m;j++){

        if(arr[i][j]==42 && i!=n-1 && j!=m-1 &i!=0 && j!=0){
            //printf("47 found");
            if(arr[i-1][j-1]==7 && arr[i-1][j]==7 && arr[i-1][j+1]==7 ){
                if(arr[i][j-1]==7 && arr[i][j+1]==7){
                   if(arr[i+1][j-1]==7 && arr[i+1][j]==7 && arr[i+1][j+1]==7 ){
                    found=1;
                    break;
                   }
                  // else found=0;
                }
               // else found=0;
            }
            //else found=0;
        }
    }
    if(found==1) break;
}
if(found==1) printf("%d %d\n",i+1,j+1);
else printf("0 0\n");
return 0;
}
