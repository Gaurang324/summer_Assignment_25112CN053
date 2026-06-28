#include<iostream>
using namespace std;
int main(){
char s[100];
cout<<"Enter string: ";
cin>>s;
for(int i=0;s[i]!='\0';i++){
int c=0;
for(int j=0;s[j]!='\0';j++)
if(s[i]==s[j])c++;
if(c==1){cout<<s[i];break;}
}
return 0;
}
