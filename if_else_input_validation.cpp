#include<iostream>

using namespace std;
int main()
{
    string  username,password;
    cout<<"Enter username "<<endl;
    cin>>username;
    cout<<"Enter password "<<endl;
    cin>>password;
    if(username=="admin" && password=="1234")
    {
        cout<<"Login successful!"<<endl;
    }
    else{
        cout<<"Appropriate message "<<endl;
    }
    return 0;
}
