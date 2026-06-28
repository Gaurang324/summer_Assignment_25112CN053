#include<iostream>
using namespace std;
int main(){
int n,m,a[100],b[100];
cout<<"Enter size of A: ";cin>>n;
for(int i=0;i<n;i++)cin>>a[i];
cout<<"Enter size of B: ";cin>>m;
for(int i=0;i<m;i++)cin>>b[i];
int i=0,j=0;
while(i<n&&j<m){
if(a[i]<b[j])cout<<a[i++]<<" ";
else cout<<b[j++]<<" ";
}
while(i<n)cout<<a[i++]<<" ";
while(j<m)cout<<b[j++]<<" ";
return 0;
}
