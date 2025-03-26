#include<iostream>
#include<cstring>
using namespace std;

void findreverse(char ch[])
{
    int i=0;
    int n=strlen(ch);
    int j=n-1;

    while(i<=j)
    {
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
}

int main()
{
    char ch[100];
    cout<<"Enter the name of the string : ";
    cin.getline(ch,100);

    cout<<" Initially values is : " << ch << endl;

    cout<<" The length of the String is : " << strlen(ch) << endl;

    findreverse(ch);
    cout<<"Reversed Values is :" << ch << endl;
}