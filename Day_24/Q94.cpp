#include<iostream>
using namespace std;
int main(){
char s[100];
cout<<"Enter string: ";
cin>>s;
for(int i=0;s[i]!='\0';i++){
int c=1;
while(s[i]==s[i+1]){c++;i++;}
cout<<s[i]<<c;
}
return 0;
}
