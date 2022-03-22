#include<stdio.h>
#include<string.h>
int main(){
    int i,j,k,m,f,n,cse=0,count=0;
    char size[3];
    while(scanf("%s",&size)!=EOF){
            cse++;
        m=0;f=0,count=0;
        printf("%s",size);
        char shoe[10000];
        getchar();
        gets(shoe);
    //puts(shoe);
        int l=strlen(shoe);
        for(i=0;i<l;i++){
            if(shoe[i]==size[0] && shoe[i+1]==size[1]){
                    count++;
                    i=i+3;
                    if(shoe[i]=='F') f++;
                    else if(shoe[i]=='M') m++;
                    i++;
            }
        }
        printf("Caso %d:\nPares Iguais: %d\nF: %d\nM: %d\n",cse,count,f,m);

    }

return 0;
}
