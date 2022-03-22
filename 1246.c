#include<stdio.h>
int main(){

int N,i,C,p,q,bill;
char ev[1];
while(scanf("%d %d",&C,&N)!=EOF){


        int length=0,fl=C,in=0,a1[10000],a2[10000],store[10000];
        bill=0;
        for(i=0;i<N;i++){

            scanf(" %c", &ev);
            //printf("ev=%c\n",ev);
            scanf(" %d", &p);
            //printf("i=%d\n",i);
            if(ev[0]=='C') {
             scanf(" %d", &q);
           // printf("len %d\n",length+q);
             if(length+q<=C && fl>=q){
                //printf("ccc\n");
                a1[in]=p;
                a2[in]=q;
                bill++;
                length=length+q;
                //printf("in %d\n",a1[in]);
                fl=fl-q;
                //printf("frontl %d bill %d\n",fl,bill);

                in++;
            }
            }
            else if(ev[0]=='S'){
                int f=0,j,found=0;
                while(f<in){
                    //printf("a1->f %d\n",a1[f]);
                    if(a1[f]==p) {
                            found=1;
                   // printf("found\n");
                    break;
                    }
                f++;
                }
                if(found==1){
                    int ind=in-1;
                    if(f==ind){
                        fl=fl+a2[f];
                        ind=ind-1;

                       while(a2[ind]==0 && ind>=0){
                            //printf("a2ind %d\n",a2[ind]);
                            fl=fl+store[ind];
                            store[ind]=0;
                            //printf("aaafrontl %d\n",fl);
                            ind--;
                        }
                      // printf("aaafrontl %d\n",fl);
                        length=length-a2[f];
                        store[f]=a2[f];
                        a1[f]=0;
                        a2[f]=0;
                        in--;
                    }
                    else{
                      //  printf("aaafrontl %d\n",fl);
                        length=length-a2[f];
                        store[f]=a2[f];
                        a1[f]=0;
                        a2[f]=0;
                    }




            }

        }

}
printf("%d\n",bill*10);

}
return 0;
}
