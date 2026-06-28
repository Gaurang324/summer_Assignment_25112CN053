#include<iostream>
using namespace std;
int main(){
char a[100],b[100];
cout<<"Enter first string: ";cin>>a;
cout<<"Enter second string: ";cin>>b;
for(int i=0;a[i]!='\0';i++)
for(int j=0;b[j]!='\0';j++)
if(a[i]==b[j]){cout<<a[i]<<" ";break;}
return 0;
}
