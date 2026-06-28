#include<iostream>
using namespace std;
int main(){
char a[100],b[100];
int freq[256]={0};
cout<<"Enter first string: ";
cin>>a;
cout<<"Enter second string: ";
cin>>b;
for(int i=0;a[i]!='\0';i++)freq[a[i]]++;
for(int i=0;b[i]!='\0';i++)freq[b[i]]--;
int anagram=1;
for(int i=0;i<256;i++)
if(freq[i]!=0)anagram=0;
if(anagram)cout<<"Anagram";
else cout<<"Not anagram";
return 0;
}
