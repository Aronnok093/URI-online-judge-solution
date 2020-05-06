#include<stdio.h>
#include<stdlib.h>
int main()
{	char a[4],b[4],c[4],d[4],e[4],f[4];
    int D1,h1,m1,s1,D2,h2,m2,s2,Totalsec,day,hour,min,sec;
    scanf("%s%d",&a,&D1);
    scanf("%02d%s%02d%s%02d",&h1,&b,&m1,&c,&s1);
	scanf("%s%d",&d,&D2);
    scanf("%02d%s%02d%s%02d",&h2,&e,&m2,&f,&s2);
    Totalsec=abs(((D1*24*3600)+(h1*3600)+(m1*60)+s1)-(((D2*24*3600)+(h2*3600)+(m2*60)+s2)));
    day=Totalsec/86400;
    Totalsec=Totalsec%86400;
	hour=Totalsec/3600;
	Totalsec=Totalsec%3600;
	min=Totalsec/60;
	Totalsec=Totalsec%60;
	
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",day,hour,min,Totalsec);
    
    return 0;

}




