#include<stdio.h>
   int highest_number_with_digits_of(int x){
   int arr[5],i=0,j,k;
   while(x!=0){
    arr[i]=x%10;
    x=x/10;
    i++;
   }
   while(i<4){
    arr[i]=0;
    i++;
   }
   for(i=0;i<4;i++){
    int max=arr[i],pos=i,tmp;
    for(j=i+1;j<4;j++){
        if(arr[j]>max){
            max=arr[j];
            pos=j;
        }
    }
    tmp=arr[i];
    arr[i]=max;
    arr[pos]=tmp;
   }
   int num=0,p=1000;
   for(i=0;i<4;i++){
    num=num+arr[i]*p;
    p=p/10;
   }
   return num;
}


   int lowest_number_with_digits_of(int x){


int arr[5],i=0,j,k;
   while(x!=0){
    arr[i]=x%10;
    x=x/10;
    i++;
   }
   while(i<4){
    arr[i]=0;
    i++;
   }
   for(i=0;i<4;i++){
    int min=arr[i],pos=i,tmp;
    for(j=i+1;j<4;j++){
        if(arr[j]<min){
            min=arr[j];
            pos=j;
        }
    }
    tmp=arr[i];
    arr[i]=min;
    arr[pos]=tmp;
   }
   int num=0,p=1000;
   for(i=0;i<4;i++){
    num=num+arr[i]*p;
    p=p/10;
   }
   return num;

   }
   int krapekar(int X) {

   int cnt = 0;

   while (X != 6174) {

       int hi = highest_number_with_digits_of(X);

       int lo = lowest_number_with_digits_of(X);

       X = hi - lo;
       if(X==0) return -1;

       cnt = cnt + 1;

   }

   return cnt;

}
int main(){
    int n,i,x;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        printf("Caso #%d: %d\n",i+1,krapekar(x));
    }


return 0;
}
