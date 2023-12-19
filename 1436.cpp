#include <iostream>
#include <vector>
#include<unordered_set>

#include <algorithm>
using namespace std;

string destCity(vector<vector<string>> &paths)
{
    unordered_set<string> s;
    for (auto &p : paths)
        s.insert(p[0]), s.insert(p[1]);
    for (auto &p : paths)
        s.erase(p[0]);
    return *s.begin();
}
