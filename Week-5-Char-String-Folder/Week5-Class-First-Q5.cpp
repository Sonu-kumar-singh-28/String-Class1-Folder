#include<iostream>
#include<cstring>
using namespace std;

void uppercase(char ch[]){

    int n = strlen(ch);
    for(int i=0; i<n; i++)
    {
        if(ch[i]>='A' && ch[i]<='Z')
        {
            ch[i] = ch[i]+32;
        }
    }   
}

int main()
{
    char ch[100];
    cout<<" Enter the name of the String : ";
    cin.getline(ch,100);

    cout<<" Initially inputs is : " <<ch << endl;

    uppercase(ch);

    cout<<" The Ans of This String in uppercase : " <<ch << endl;
}

