#include<iostream>
using namespace std;
int main(){
char s[100];
cout<<"Enter string: ";
cin>>s;
int seen[256]={0};
for(int i=0;s[i]!='\0';i++){
if(!seen[s[i]]){
cout<<s[i];
seen[s[i]]=1;
}
}
return 0;
}
