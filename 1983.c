#include<stdio.h>
float maximum(float arr[],int n){
float max=-1;
int i;
for(i=0;i<n;i++){
    if(arr[i]>max) max=arr[i];
}
return max;
}

int main(){
int arr1[100],n,i,j;
float arr2[100];
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d %f",&arr1[i],&arr2[i]);
}
float m=maximum(arr2,n);
if(m<=8) printf("Minimum note not reached\n");
else{

    for(i=0;i<n;i++){
        if(arr2[i]==m){
            printf("%d\n",arr1[i]);
            break;
        }
    }
}


return 0;
}
