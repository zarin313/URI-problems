#include<stdio.h>
int main(){
int i,A,D;
while(1){
    scanf("%d %d",&A,&D);
    if(A==0 && D==0) break;
    int arr1[12],arr2[12];
    for(i=0;i<A;i++){
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<D;i++){
        scanf("%d",&arr2[i]);
    }
    int min=10000,min2=10000,min3=10000;
    for(i=0;i<A;i++){
        if(arr1[i]<min){
            min=arr1[i];
        }
    }
    for(i=0;i<D;i++){
        if(arr2[i]<=min2){
            min3=min2;
            min2=arr2[i];
        }
        else if(arr2[i]<=min3 && min2!=arr2[i]) min3=arr2[i];
    }
    //printf("min2 %d min3 %d min %d ",min2,min3,min);
     if(min<min3) printf("y\n");
     else  printf("N\n");

}



}
