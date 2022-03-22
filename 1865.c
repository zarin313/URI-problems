#include<stdio.h>
#include<string.h>
int main(){
int n,i,f;
char name[100];
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%s",&name);
    scanf("%d",&f);
    if(strcmp(name,"Thor")==0 || strcmp(name,"Steve")==0){
        printf("Y\n");
    }
    else printf("N\n");


}


return 0;
}
