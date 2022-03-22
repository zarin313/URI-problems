#include<stdio.h>
int main(){
int l,i,j;
float sum=0,avg,arr[13][13];
char t;
scanf("%d",&l);
scanf(" %c" ,&t);
for(i=0;i<12;i++){
    for(j=0;j<12;j++){
        scanf("%f",&arr[i][j]);
        //printf("i %d l %d \n",i,l);
        if(j==l){
            sum=sum+arr[i][j];
            //printf("sum %0.1f\n",sum);
        }

    }
}
if(t=='M'){
    avg=sum/12;
    printf("%0.1f\n",avg);
}
else if(t=='S'){
    printf("%0.1f\n",sum);
}
return 0;
}
