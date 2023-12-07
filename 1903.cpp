// 1903. Largest Odd Number in String

#include <iostream>
using namespace std;

string largestOddNumber(string num)
{
    int i = num.size()-1;
    string ans = "";
    for(i;i>=0;i--){
        if((num[i])  == '9' ||(num[i])  == '7'||(num[i])  == '5'||(num[i])  == '3' ||(num[i])  == '1'){
            return num;
        }
        else{
            num.erase(i);
        }
    }
    return ans;
}

int main()
{
    string ans = largestOddNumber("008");
    cout<<"ans is "<< ans;
    return 0;
}