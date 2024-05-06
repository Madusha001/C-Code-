#include<iostream>
using namespace std;
int main()
{
    string str1;
    cout<<"Enter the Word:"<<endl;
    cin>>str1;

    int length=str1.length();//AMMA
    //cout<<length<<endl;
    int flag=0;
    for(int i=0,j=length-1;i<length;i++,j--)//I=0,J=3//I=1,J=2
    {
        if(str1[i]!=str1[j])//A,A//M,M
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<str1<<" is Not a Palindrome"<<endl;
    else
        cout<<str1<<" is a Palindrome"<<endl;
    return 0;
}