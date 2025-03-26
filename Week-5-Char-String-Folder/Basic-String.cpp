#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char ch[100];

    cout<<" Enter the  name of the String : ";
    cin.getline(ch,100);

    cout<<" the First Index of Element are inserted Is : " <<ch[3] << endl;
    cout<<" the First Index of Element are inserted Is : " <<ch[16] << endl;

    int values = (int)ch[16];

    cout<<" The values of 16 index is : " << values <<" " << endl;
}
