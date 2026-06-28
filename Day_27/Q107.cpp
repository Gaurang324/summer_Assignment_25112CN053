#include<iostream>
using namespace std;
int main(){
char name[100];
float basic,hra,da,gross;
cout<<"Enter name: ";cin>>name;
cout<<"Enter basic salary: ";cin>>basic;
hra=0.2*basic;
da=0.1*basic;
gross=basic+hra+da;
cout<<"Name: "<<name<<"\n";
cout<<"Basic: "<<basic<<"\n";
cout<<"HRA: "<<hra<<"\n";
cout<<"DA: "<<da<<"\n";
cout<<"Gross: "<<gross<<"\n";
return 0;
}
