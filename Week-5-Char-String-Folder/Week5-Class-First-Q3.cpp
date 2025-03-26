#include<iostream>
#include<cstring>
using namespace std;

int replacevalues(char ch[])
{
    int i=0;
    int n = strlen(ch);
    for(int i=0; i<n; i++)
    {
        if(ch[i] == ' ')
        {
            ch[i] = '@';
        }
    }
}

int main()
{
    char ch[100];
    cout<<" Enter the name of the String : ";
    cin.getline(ch,100);

    cout<<" Initially input is : " << ch << endl;

    replacevalues(ch);

    cout<<" Replace Values is : " << ch << endl;
}