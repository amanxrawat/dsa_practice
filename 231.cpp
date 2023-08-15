#include <iostream>
#include<math.h>
using namespace std;

bool isPowerOfTwo(int n)
{   
    if(n<=0) return false;
    for(int i =0;i<=30;i++){
        int ans =pow(2,i);
        if(ans==n) return true;
    }
    return false;
    // if(n%2!=0)
    //     return false;
    // if (n == 1)
    //     return true;
    // if (n <= 0)
    //     return false;
    // float ans = log2(n);

// failed because of presicion of log function in language


/*
op code
bool isPowerOfTwo(int n) {
    return ( (n>0) && !(n&(n-1)) );
}
*/


}
int main()
{

    return 0;
}