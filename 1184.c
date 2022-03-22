
#include<stdio.h>
int main(){
    int n,i,j,k,l,d;
    float arr[13][13],sum=0,avg;
    char c;
    scanf(" %c",&c);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%f",&arr[i][j]);
        }
    }
    for(i=1;i<12;i++){
        for(j=0;j<=(i-1);j++){
            sum=sum+arr[i][j];
        }
    }
    if(c=='S') printf("%0.1f\n",sum);
    else printf("%0.1f\n",sum/66);
return 0;
}
