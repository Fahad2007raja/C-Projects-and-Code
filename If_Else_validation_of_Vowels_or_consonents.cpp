#include<iostream>

using namespace std;
int main()
{
    char ch;
    cout<<"Enter your character \n Only 1 Character at a time :"<<endl;
    cin>>ch;
    if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
{
    cout<<"Print Vowels :"<<endl;
}
else{
    cout<<"Print Consonent :"<<endl;
}
return 0;
}