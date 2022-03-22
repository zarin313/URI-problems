#include<stdio.h>
int main(){
    int n,i,j,r,q,f,count=0;
    int arr[50000];
    while(1){
        scanf("%d",&n);
        if(n==0) break;
        count++;
        int index;
        for(index=0;index<n;index++){
            arr[index]=index+1;
        }
        scanf("%d",&r);
        while(r>=1){
            int tmp;
            scanf("%d %d",&i,&j);

            j=j-1,i=i-1;

            r--;

            while(i<j){
                //printf("%d %d\n",i,j);
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
                j--;
                i++;

            }
        }

        scanf("%d",&q);
        printf("Genome %d\n",count);
        while(q!=0){
            scanf("%d",&f);
            int pos=0;
            while(arr[pos]!=f){
                pos++;
            }
            printf("%d\n",pos+1);
            q--;
        }


    }

}
