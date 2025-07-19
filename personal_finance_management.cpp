#include<iostream>
using namespace std;
int main()
{
 string name;
 double income,food,transport,bills,other,expenses,balance,budget,goal,p,rewardpoints,payment;
 cout<<"Hello! Raja Fahad \n Welcome to the Personal Finance Management"<<endl;
 cout<<"Enter your monthly income :"<<endl;
 cin>>income;
 cout<<"Enter your food expense :"<<endl;
 cin>>food;
 cout<<"Enter your transport expense :"<<endl;
 cin>>transport;
 cout<<"Enter your bills expense :"<<endl;
 cin>>bills;
 cout<<"Enter your other expenses :"<<endl;
 cin>>other;
 expenses=food + transport + bills + other;
 cout<<"Expenses :"<<expenses<<endl;
 balance=income - expenses;
 cout<<"Balance :"<<balance<<endl;
 
 if(expenses>income )
 {
    cout<<"You are spending more than your income!"<<endl;
 }
 else
 {
    cout<<"Good job! You are good manging your finance"<<endl;
 }

cout<<"Saving goal"<<endl;
cin>>goal;
if(balance>=goal)
{
    cout<<"Your goal is achieved!"<<endl;
}
else
{
    p=(balance/goal)*100;
    cout<<"You have saved"<<p<<"of your goal "<<endl;
}
if(balance>=30000 )
{
    cout<<"You earn 100 points :"<<rewardpoints<<endl;
}
else if(balance>=20000)
{
    cout<<"You earn 50 points :"<<rewardpoints<<endl;
}
else
{
    cout<<"You earn 20 points :"<< rewardpoints <<endl;
}
int m;
cout<<"Select your payment method \n 1 Cash \n 2 Debit card \n 3 Jazz Cash \n 4 Easypaisa "<<endl;
cin>>payment;
switch (m)
{
case 1:
    cout<<"You can use Cash "<<endl;
    break;
case 2:
    cout<<"You can use Debit card "<<endl;
    break;
case 3:
    cout<<"You can use Jazz Cash"<<endl;
    break;
case 4:
    cout<<"You can use Easypaisa"<<endl;
    break;
default:
    cout<<"Invalid input!"<<endl;
    break;
}
cout<<"Summary :"<<endl;
cout<<"Income :"<<income<<endl;
cout<<"Total Expenses :"<<expenses<<endl;
cout<<"Balance :"<<balance<<endl;
cout<<"Budget status :"<<budget<<endl;
cout<<"Savings goal status :"<<goal<<endl;
cout<<"Reward points :"<<rewardpoints<<endl;

 return 0;
}