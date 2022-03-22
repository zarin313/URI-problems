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
    for(i=1;i<=5;i++){
        j=11,d=0;
        while(d!=i){
            sum=sum+arr[i][j];
            j--;
            d++;
        }
    }
    for(i=6;i<=10;i++){
        j=11,d=11-i;
        while(d!=0){
                sum=sum+arr[i][j];
                d--;
                j--;

        }
    }
    if(c=='S') printf("%0.1f\n",sum);
    else printf("%0.1f\n",sum/30);
return 0;
}
