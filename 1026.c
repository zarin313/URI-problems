#include<stdio.h>
#include<math.h>
int main(){
unsigned int n,m;

while(scanf("%d %d",&n,&m)!=EOF){
    unsigned int arr[33],dec=0;
    int i=0,j;
    //printf("%u %u\n",n,m);
    while((n!=0 || m!=0)){
            //if(n<0 || m<0) break;
            if(n&1==1 && m&1==1) {
                    //printf("fdf");
                    arr[i]=0;
            }
            else{
                int b=(n&1)|(m&1);
            //printf("bbb %d\n",b);
                arr[i]=b;
            }
            i++;
   //printf("%d %d %d\n",n&1,m&1,arr[i-1]);
            n=n>>1;
            m=m>>1;

    }
    printf("i %d\n",i);

        for(j=i-1;j>=0;j--){
               // printf("%u + %d * 2^%d\n",dec,arr[j],j);
            dec=dec+(arr[j]*pow(2,j));
        }
printf("%u\n",dec);
}

}






