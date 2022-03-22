#include<stdio.h>
#include<string.h>

int main(){
int t,i,j,p,n;

scanf("%d",&t);
for(i=0;i<t;i++){
    int r,pos=0,track[100];
    scanf("%d",&n);
    char ins[100];
    for(j=0;j<n;j++){
        getchar();N
        scanf("%[^\n]s",ins);
        if(strcmp(ins,"LEFT")==0) {
                track[j+1]=-1;
        }
        else if (strcmp(ins,"RIGHT")==0) {
            track[j+1]=1;

        }
        else{
            int in;
            if(strlen(ins)==9) in=ins[8]-'0';
            if(strlen(ins)==10){
                int a=ins[8]-'0';
                a=a*10;
                int b=ins[9]-'0';
                in=a+b;

            }


                track[j+1]=track[in];


                track[j+1]=track[in];

        }
    }
for(p=1;p<=n;p++){
    pos=pos+track[p];

}
printf("%d\n",pos);

}

return 0;
}
