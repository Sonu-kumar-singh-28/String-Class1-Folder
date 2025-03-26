#include<iostream>
using namespace std;

bool compare(string a, string b){

    int j=0;
    if(a.length() !=b.length())
    {
        return false;
    }
    else{
        int j=0;
        for(int i=0; i<a.length(); i++)
        {
            if(a[i]!=b[j])
            {
                return false;
            }
            else{
                j++;
            }
        }
    }
    return true;
}

int main(){
    string str;

    cout<<"Enter the name : ";
    cin>>str;

    cout<<str << endl;
    cout<<" Length is : " << str.length() << endl;
    cout<<" Empty String : " << str.empty() << endl;

    str.push_back('a');

    cout<<str << endl;

    str.pop_back();
    cout<<str << endl;

    cout << " ans is : "<<str.substr(1,4)<< endl;


    string a = "love";
    string b = "love";

    // if(a.compare(b)==0)
    // {
    //     cout<<" a is b Is exacatly same in the string ";
    // }
    // else{
    //     cout<<"A and b is not Exactly Same in the String ";
    // }


    compare(a,b);

if(compare(a,b))
{
    cout<<" The String are same ";
}
else{
    cout<<" The String are Not same ";
}
    
return 0;
}