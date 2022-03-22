#include<stdio.h>
#include<string.h>
#include<math.h>
int btod(int arr[],int s){
 int i,dec=0;
// printf("%d \n",arr[2]);
 for(i=0;i<s;i++){
   // printf("w%d %d\n",arr[i],i);
    dec=dec+(arr[i]*pow(2,i));
 }
return dec;

}
int main(){
    char str[3],str1[8];
    int i=0,j,k,c,arr[3],s=0;

//printf("%d\n",btod(arr,4));
    while(i<3){
            gets(str);
            if(strcmp(str,"caw caw")==0){
            i++;
               printf("%d\n",s);
               s=0;

            }
            else{
                int m=2,n;
                for(k=0;k<3;k++){
                       // printf("k %c ",str[k]);
                    if(str[k]=='-') arr[m]=0;
                    else if(str[k]=='*') arr[m]=1;
                    m--;
                }
                n=btod(arr,3);
                s=s+n;
             // printf("%d \n",btod(arr,3));

            }


    }




}
