#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1,s2;
    cout<<"Enter the First String : ";
    cin>>s1;

    cout<<" Enter the Second String :";
    cin>>s2;


    cout<<s1.compare(s2)<< endl;
 
    cout<<s1.find(s2);

    string str = " this is my first message :";
    string word = "Babbar";

    str.replace(0,5,word);

    cout<<str<<endl;

    string str1= " abcdefghijklmnopqrstuvwxyz";
    str1.erase(0,4);
    cout<<str1<< endl;
}