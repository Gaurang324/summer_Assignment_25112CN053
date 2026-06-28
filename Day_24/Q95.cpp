#include<iostream>
#include<string.h>
using namespace std;
int main(){
char s[100],word[100],longest[100]="";
cout<<"Enter sentence: ";
cin.getline(s,100);
int i=0,j=0;
while(s[i]!='\0'){
if(s[i]!=' ')word[j++]=s[i];
else{
word[j]='\0';
if(strlen(word)>strlen(longest))
strcpy(longest,word);
j=0;
}
i++;
}
word[j]='\0';
if(strlen(word)>strlen(longest))strcpy(longest,word);
cout<<"Longest word = "<<longest;
return 0;
}
