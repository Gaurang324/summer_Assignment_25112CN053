#include<iostream>
using namespace std;
int main(){
int bal=10000,ch,amt;
while(true){
cout<<"1.Balance 2.Deposit 3.Withdraw 4.Exit\n";
cin>>ch;
if(ch==1)cout<<"Balance = "<<bal<<"\n";
else if(ch==2){cin>>amt;bal+=amt;cout<<"Deposited\n";}
else if(ch==3){
if(amt>bal)cout<<"Insufficient\n";
else{cin>>amt;bal-=amt;cout<<"Withdrawn\n";}
}
else break;
}
return 0;
}
