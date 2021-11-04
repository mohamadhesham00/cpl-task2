#include<stdio.h>
#include<stdlib.h>
int main (){
int inps;
printf("input seconds: ");
scanf("%d",&inps);
int nh=inps/3600;
int nm= (inps -(3600*nh))/60;;
int ns=(inps-(3600*nh)-(60*nm));
printf("hours: %d\n",nh);
printf("minutes: %d\n",nm);
printf("seconds: %d\n",ns);
system("pause");
return 0;

}
