#include<stdio.h>
int main(){
int n,c,i,j,p,k,ca=1;
while(scanf("%d",&n)!=EOF){
int arr[20102];
int l=1;
for(i=1;i<=n;i++){
    l=l+i;
}
int s=1;
i=0;
while(i<l){
    if(i==0) {
            arr[i]=0;
            i++;
    }
    else{
        int p=0;
        while(p<s){
        arr[i]=s;
        i++;
        p++;

    }
    s++;
    }
}
if(n==0) printf("Caso %d: %d numero\n",ca,l);
else printf("Caso %d: %d numeros\n",ca,l);
for(i=0;i<l;i++){
    if(i==l-1) printf("%d",arr[i]);
    else printf("%d ",arr[i]);
}
printf("\n\n");
ca++;
}


return 0;
}
