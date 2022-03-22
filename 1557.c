#include<stdio.h>
#include<math.h>
int digits(int x){
    int d=0;
    while(x!=0){
    x=x/10;
    d++;
}
return d;
}
int main(){
int n,arr[100][100],i,j,p,q;

while(scanf("%d",&n)){
    if(n==0) break;
    q=0;
    for(i=0;i<n;i++){
        p=q;
        for(j=0;j<n;j++){

                arr[i][j]=pow(2,p);
                //printf("%d ",arr[i][j]);
                p++;

        }
        //printf("\n");
    q++;
    }
    int x=arr[n-1][n-1],d=0,tmp;
//printf("d %d %d",arr[n-1][n-1]);

//printf("d %d",d);
int dmax=digits(arr[n-1][n-1]),dc;
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(j==0){
            dc=digits(arr[i][j]);
            int diff=dmax-dc,k;
            for(k=0;k<diff;k++) printf(" ");
        }
        else{
            dc=digits(arr[i][j]);
            int diff=dmax-dc,k;
            for(k=0;k<=diff;k++) printf(" ");


        }

      printf("%d",arr[i][j]);

    }
    printf("\n");
}
printf("\n");

}


return 0;
}
