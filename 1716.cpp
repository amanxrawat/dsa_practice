// 1716 calculate total money in leetcode bank

#include <iostream>
using namespace std;

int totalMoney(int n)
{
    int quotient = n / 7;
    cout<<quotient;
    int remainder = n % 7;
    cout<<remainder;

    int sum=0;
    int initialValue = 0;

    if (remainder > 0)
    {
        initialValue = quotient+1;
        // using sum of AP 
        sum = ((remainder)*((initialValue*2)+(remainder-1)))/2;
    }

    if(quotient){
        // using sum of AP 
        sum = sum + ((quotient)*((28 * 2) + ( quotient-1)*7))/2;

    }


    return sum;
}

int main()
{

    cout << totalMoney(10);
    return 0;
}