#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter employees: ";cin>>n;
char name[100][100];
int id[100],sal[100];
for(int i=0;i<n;i++){
cout<<"Name: ";cin>>name[i];
cout<<"ID: ";cin>>id[i];
cout<<"Salary: ";cin>>sal[i];
}
for(int i=0;i<n;i++)
cout<<id[i]<<" "<<name[i]<<" "<<sal[i]<<"\n";
return 0;
}
