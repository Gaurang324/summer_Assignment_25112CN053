#include<iostream>
using namespace std;
int main(){
char s[100],ch;
cout<<"Enter string: ";
cin>>s;
cout<<"Enter character: ";
cin>>ch;
int c=0;
for(int i=0;s[i]!='\0';i++)
if(s[i]==ch)c++;
cout<<"Frequency = "<<c;
return 0;
}