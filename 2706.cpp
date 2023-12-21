#include <iostream>
#include <vector>

using namespace std;

// the size of array given in the question is relatively small so we can also use sort function approch
// sort function approct will be fast for this question

int buyChoco(vector<int> &prices, int money)
{
    int choco1= prices[0];
    int choco2 = prices[1];
    for (int i = 1; i < prices.size(); i++)
    {
        if( choco1 > prices[i]){
            choco2 = choco1;
            choco1 = prices[i];
        }
        else if(choco2>prices[i]){
            choco2 = prices[i];
        }
    }
    if((choco1 + choco2) <= money)
        return ( money - (choco1+choco2));
    return money;
}

int main (){
    vector<int> chocolates = {1,2,2};
    cout<<buyChoco(chocolates,3);

    return 0;
}