// length of string 

#include<iostream>
using namespace std;

int FindLength(char ch[10])
{
    int length =0;
    int i=0;

    while(ch[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}
int main()
{
    char ch[10];

    cout<<" Enter the String : " <<endl;
    cin.getline(ch,10);

    int getlength = FindLength(ch);

    cout<<" The Length of the String is : " << getlength << endl;

    
}