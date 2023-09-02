#include<iostream>
using namespace std;

bool checkPallindrome(string &str,int start , int end){
    if(start >= end){
        return true;
    }
    if(str[start]!=str[end]){
        return false;
    }
    if(str[start]==str[end]){
        return checkPallindrome(str,start+1,end-1);
    }
}


int main()
{
    string name = " ";
    cout<<checkPallindrome(name,0,name.length()-1);
    string name2 = "aman";
    cout<<checkPallindrome(name2,0,name2.length()-1);
    string name3 = "mam";
    cout<<checkPallindrome(name3,0,name3.length()-1);
    string name4 = "mango";
    cout<<checkPallindrome(name4,0,name4.length()-1);
    string name5 = "non";
    cout<<checkPallindrome(name5,0,name5.length()-1);
    return 0;
}