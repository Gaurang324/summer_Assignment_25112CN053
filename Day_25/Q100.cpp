#include<iostream>
#include<string.h>
using namespace std;
int main(){
int n;
char a[100][100],t[100];
cout<<"Enter count: ";cin>>n;
for(int i=0;i<n;i++)cin>>a[i];
for(int i=0;i<n-1;i++)
for(int j=0;j<n-i-1;j++)
if(strlen(a[j])>strlen(a[j+1])){
strcpy(t,a[j]);
strcpy(a[j],a[j+1]);
strcpy(a[j+1],t);
}
for(int i=0;i<n;i++)cout<<a[i]<<"\n";
return 0;
}