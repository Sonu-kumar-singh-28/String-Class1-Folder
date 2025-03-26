#include<iostream>
#include<string>
using namespace std;
int main()
{
    // string str;
    // cout<<"Enter the String : ";
    // cin>>str;

    // cout<<" the input of the String are :" << str<< endl;
    // str[0] ='b';
    // str[1] ='a';
    // str[2] ='\0';
    // str[3] ='b';
    // str[4] ='b';
    // str[5] ='\0';
    // str[6] ='r';
    // cout<<str[0]<<str[1]<<str[2]<<str[3]<<str[4]<<str[5]<<str[6]<<endl;

    char str[100];
    str[0] ='b';
    str[1] ='a';
    str[2] ='\0';
    str[3] ='b';
    str[4] ='b';
    str[5] ='\0';
    str[6] ='r';
    cout<<str[0]<<str[1]<<str[2]<<str[3]<<str[4]<<str[5]<<str[6]<<endl;

    int values =(int)str[2];
    cout<<values <<endl;
}