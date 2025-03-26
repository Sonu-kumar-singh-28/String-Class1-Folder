#include<iostream>
#include<cstring>
using namespace std;

bool palindrome(char ch[])
{
    int i=0; 
    int n= strlen(ch);
    int j= n-1;
    while(i<=j)
    {
        if(ch[i] !=ch[j])
        {
            return false;
        }
        else{
            i++;
            j--;
        } 
    }
    return true;
}

int main()
{
    char ch[100];
    cout<<"Enter the name of the String : ";
    cin.getline(ch,100);

    cout<<" Initially Inputs is : " << ch << endl;

    palindrome(ch);

    if(palindrome(ch))
    {
        cout<<" This String is A Palindrome ";
    }
    else{
        cout<<" This is not a Palindrome ";
    }
    return 0;
}