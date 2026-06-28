#include<iostream>
using namespace std;
int main(){
char name[100];
int m1,m2,m3,total;
float avg;
cout<<"Enter name: ";cin>>name;
cout<<"Enter 3 marks: ";cin>>m1>>m2>>m3;
total=m1+m2+m3;
avg=total/3.0;
cout<<"Name: "<<name<<"\n";
cout<<"Total: "<<total<<"\n";
cout<<"Average: "<<avg<<"\n";
if(avg>=90)cout<<"Grade A";
else if(avg>=75)cout<<"Grade B";
else if(avg>=60)cout<<"Grade C";
else cout<<"Fail";
return 0;
}