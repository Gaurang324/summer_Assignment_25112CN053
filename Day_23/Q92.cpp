#include<iostream>
using namespace std;
int main(){
char s[100];
cout<<"Enter string: ";
cin>>s;
int freq[256]={0},max=0;
char res;
for(int i=0;s[i]!='\0';i++)freq[s[i]]++;
for(int i=0;i<256;i++)
if(freq[i]>max){max=freq[i];res=i;}
cout<<"Max occurring = "<<res;
return 0;
}
