#include <stdio.h>
int main(){
int n,dec=0,base=1,t;
printf("Enter binary: ");
scanf("%d",&n);
t=n;
while(t!=0){
dec+=(t%10)*base;
base*=2;
t/=10;
}
printf("Decimal = %d",dec);
return 0;
}