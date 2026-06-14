#include <stdio.h>
int main(){
int x,n,res=1;
printf("Enter x and n: ");
scanf("%d %d",&x,&n);
for(int i=1;i<=n;i++){
res*=x;}
printf("%d^%d = %d",x,n,res);
return 0;
}