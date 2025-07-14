#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    char opt;
    cout<<"Enter any number of your choice :"<<endl;
    cin>>n1;
    cout<<"Enter any number of your choice :"<<endl;
    cin>>n2;
    cout<<"Enter any operator of your choice :"<<endl;
    cin>>opt;
    switch(opt){
        case '+':
        cout<<n1 + n2 <<endl;
        break;
        case '*':
        cout<<n1 * n2 <<endl;
        break;
        case '-':
        cout<< n1 - n2 <<endl;
        break;
        case '%':
        cout<< n1 % n2 <<endl;
        break;
        case '/':
        cout<< n1 / n2 <<endl;
        break;
        default:
        cout<<"Invalid operator "<<endl;
        break;
    }
    return 0;
}