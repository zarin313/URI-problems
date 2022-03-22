#include<stdio.h>
int max(int arr[],int n){
int max=-100000,i;
for(i=0;i<=n;i++){
    if(arr[i]>max) max=arr[i];
}
return max;
}
int main(){
    int h,arr[10000],i,hn;
    while(1){
        scanf("%d",&h);
        if(h==0) break;
        int j=0;
        hn=h,arr[j]=h;
        while(h!=1){
                j++;
            if(h%2==0){
                arr[j]=arr[j-1]/2;
                h=arr[j];
            }
            else{
                arr[j]=(3*arr[j-1])+1;
                h=arr[j];
            }


        }
        int highest=max(arr,j);
        printf("%d\n",highest);

    }


return 0;
}
