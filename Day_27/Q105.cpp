#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter students: ";cin>>n;
char name[100][100];
int marks[100];
for(int i=0;i<n;i++){
cout<<"Name: ";cin>>name[i];
cout<<"Marks: ";cin>>marks[i];
}
for(int i=0;i<n;i++)
cout<<name[i]<<" - "<<marks[i]<<"\n";
return 0;
}
