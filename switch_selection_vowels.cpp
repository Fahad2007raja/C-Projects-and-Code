#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter your character "<<endl;
    cin>>ch;
    switch(ch){
    case 'A':
    case 'a':
        cout<<"You entered vowel A"<<endl;
        break;
    case 'E':
    case 'e':
        cout<<"You entered vowel E"<<endl;
        break;
    case 'I':
    case 'i':
        cout<<"You entered vowel I"<<endl;
        break;
    case 'O':
    case 'o':
        cout<<"You entered vowel O"<<endl;
        break;
    case 'U':
    case 'u':
        cout<<"You entered vowel U"<<endl;
        break;
    default:
        cout<<"You entered consonant "<<endl;
    break;
    }
    return 0;
}