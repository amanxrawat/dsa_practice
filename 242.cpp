#include <iostream>
#include <algorithm>
using namespace std;

bool isAnagram(string s, string t) {
    if(s.length() != t.length()){
        return false;
    }

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    if(s == t){
        return true;
    }

    return false;
}

// bool isAnagram(string s, string t)
// {
//     string temp = s;
//     cout<<temp;

//     for (int i = 0; i < t.length(); i++)
//     {
//         // temp.erase(t[i]);
        
//     }

//     if (temp.length() == 0)
//     {
//         return true;
//     }
//     return false;
// }

int main()
{
    bool ans = isAnagram("hello", "olleh");
    cout << "the answer is " << ans;

    // string name = "";
    // cout<<name.length();

    string temp = "hello";
    // temp.erase('h');
    cout<<temp.length();

    return 0;
}