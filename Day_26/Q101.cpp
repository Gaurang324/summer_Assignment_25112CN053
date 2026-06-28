 #include<iostream>
#include<cstdlib>
using namespace std;
int main(){
int secret=rand()%100+1,guess;
cout<<"Guess the number (1-100): ";
while(true){
cin>>guess;
if(guess==secret){cout<<"Correct!";break;}
else if(guess<secret)cout<<"Too low\n";
else cout<<"Too high\n";
}
return 0;
}
