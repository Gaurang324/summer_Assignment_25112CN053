#include<iostream>
#include<string.h>
using namespace std;
int main(){
char a[100],b[200];
cout<<"Enter first string: ";
cin>>a;
cout<<"Enter second string: ";
cin>>b;
char temp[200];
strcpy(temp,a);
strcat(temp,a);
if(strstr(temp,b))cout<<"Rotation";
else cout<<"Not rotation";
return 0;
}
