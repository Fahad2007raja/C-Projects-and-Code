#include<iostream>

using namespace std;
int main()
{
    char weekday,exam,sick;
    cout<<"Type 'Y' for 'Yes' and 'N' for 'No' "<<endl;
    
    cout<<"It is a weekday? (y/n)"<<endl;
    cin>>weekday;
    cout<<"Do you have exam tomorrow? (y/n)"<<endl;
    cin>>exam;
    cout<<"Are you feeling sick? (y/n)"<<endl;
    cin>>sick;
    if(weekday=='Y'&&weekday=='y'&& exam=='Y' &&exam=='y' &&sick=='N' && sick=='n')
    {
        cout<<"Set alarm for 6am "<<endl;
    }
    else{
        cout<<"No need to set alarm "<<endl;
    }
return 0;
}