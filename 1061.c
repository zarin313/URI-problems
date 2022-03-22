#include<stdio.h>
int main() {

    //char day1[4],day2[4],a[1],b[1],c[1],d[1];
    int da,db,ha,hb,ma,mb,sa,sb,fh,fm,fs,fd;
    scanf("%*s %d", &da);
    scanf("%d : %d : %d",&ha, &ma, &sa);
    scanf("%*s %d", &db);
    scanf("%d : %d : %d",&hb, &mb ,&sb);
    if(sb>=sa){
        fs=sb-sa;
    }
    else if(sb<sa){
        sb=sb+60;
        fs=sb-sa;
        mb=mb-1;
    }
    if(mb>=ma){
        fm=mb-ma;
    }
    else if(mb<ma){
        mb=mb+60;
        fm=mb-ma;
        hb=hb-1;
    }
    if(hb>=ha){
        fh=hb-ha;
    }
    else if(hb<ha){
        hb=hb+24;
        fh=hb-ha;
        db=db-1;
    }
    fd=db-da;


    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",fd,fh,fm,fs);
    return 0;
    }
