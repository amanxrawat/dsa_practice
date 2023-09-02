#include<iostream>
using namespace std;

void reverseString(string &str, int s, int e){
    if(s>e){
        return ;
    }

    swap(str[s],str[e]);

    reverseString(str , s+1,e-1);
}

int main()
{
    string name = "aman";
    reverseString(name,0,name.length()-1);
    cout<<name;
    return 0;
}