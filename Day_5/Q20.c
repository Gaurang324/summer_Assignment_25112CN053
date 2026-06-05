#include <stdio.h>
int main(){
int n,largest=-1;
printf("Enter number: ");
scanf("%d",&n);
for(int i=2;i<=n;i++){
if(n%i==0){
int isPrime=1;
for(int j=2;j<=i/2;j++){
if(i%j==0){
isPrime=0;
break;
}
}
if(isPrime)
largest=i;
}
}
printf("Largest prime factor = %d",largest);
return 0;
}