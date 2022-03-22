#include<stdio.h>
#include<string.h>
int main(){
    char sen[10000],b,c;
    int i,j,k;
    while(1){
        j=1;
        b=getchar();
        if(b>=65 && b<=90) c=b+32;
        else if(b>=97 && b<=122) c=b-32;
        //printf("cc %c\n",c);
        gets(sen);
        //printf("%c\n",b);
        if(b=='*') break;
        i=1;
        for(i=1;sen[i]!='\0';i++){
            if(sen[i]==32){
                    //printf("%c\n",a);
                if(sen[i+1]==b || sen[i+1]==c) {
                        continue;
                }
                else{
                   // printf("i+1 %c\n",sen[i+1]);
                    j=0;
                    break;
                }
            }
        }

        if(j!=0) printf("Y\n");
        else printf("N\n");
    }
return 0;
}
