#include<stdio.h>
#include<string.h>
int main(){
char keys[]="`1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./";
char str[10000];
while(gets(str)!=NULL){
    int i=0,j;
    while(str[i]!='\0'){
        if(str[i]==32) printf(" ");
        else if(str[i]=='\n') printf("\n");
        else {
            for(j=0;j<48;j++){
                if(str[i]==keys[j]){
                    printf("%c",keys[j-1]);
                    break;
                }
            }
        }
        i++;


    }
    printf("\n");
}
return 0;
}
