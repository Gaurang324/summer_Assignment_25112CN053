#include <stdio.h>
int main(){
int n,temp,sum=0,fact;
printf("Enter number: ");
scanf("%d",&n);
temp=n;
while(temp!=0){
int d=temp%10;
fact=1;
for(int i=1;i<=d;i++)
fact*=i;
sum+=fact;
temp/=10;
}
if(sum==n)
printf("%d is strong number",n);
else
printf("%d is not strong number",n);
return 0;
}