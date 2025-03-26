#include<iostream>
using namespace std;

int findlength(char ch[])
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
    char ch[100];
    cout<<"Enter the size of the String : ";
    cin.getline(ch, 100);

   int ans = findlength(ch);
  cout<<" The ans is : " <<ans<< endl;
}