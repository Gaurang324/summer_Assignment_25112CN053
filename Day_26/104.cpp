#include<iostream>
using namespace std;
int main(){
int score=0,ans;
cout<<"Q1: Capital of India?\n1.Mumbai 2.Delhi 3.Chennai\n";
cin>>ans;
if(ans==2)score++;
cout<<"Q2: 2+2=?\n1.3 2.4 3.5\n";
cin>>ans;
if(ans==2)score++;
cout<<"Score = "<<score<<"/2";
return 0;
}