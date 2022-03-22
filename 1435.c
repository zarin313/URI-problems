#include<stdio.h>
#include<math.h>
int main(){
int n,arr[100][100],i,j,k,layers,a,b;
while(1){
    scanf("%d",&n);
    if(n==0) break;
    layers= (int)ceil(n/2.0);
    a=0;
    b=n;
    for(k=0;k<layers;k++){
        for(i=a;i<b;i++){
            for(j=a;j<b;j++){
                arr[i][j]=k+1;
            }
        }
        a++;
        b--;

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
