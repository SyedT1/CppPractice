
#include <iostream>
#include <utility>
using namespace std;
bool compare(pair<int, int> a, pair<int, int> b)
{
    return !(a.first < 0 || b.first < 0) && !(a == b) && ((a.first < b.first && a.second > b.second) || (b.first < a.first && b.second > a.second));
}
int main()
{
    int n;
    cin >> n;
    pair<int, int> alesbMN{-1, -1}, alesbMX{-1, -1}, agrebMN{-1, -1}, agrebMX{-1, -1}, aeqb{-1, -1};
    for (int i = 0, a, b; i < n; i++)
    {
        cin >> a >> b;
        if (a == b)
        {
            a = (aeqb.first < 0 ? a : min(a, aeqb.first));
            aeqb = {a, a};
        }
        else if (a < b)
        {
            if (alesbMN.first < 0)
            {
                alesbMN = alesbMX = {a, b};
            }
            else
            {
                alesbMN = min(alesbMN, {a, b});
                alesbMX = max(alesbMX, {a, b});
            }
        }
        else
        {
            if (agrebMN.first < 0)
            {
                agrebMN = agrebMX = {a, b};
            }
            else
            {
                agrebMN = min(agrebMN, {a, b});
                agrebMX = max(agrebMX, {a, b});
            }
        }
    }
    //initial case
    if (compare(alesbMN, alesbMX) || compare(alesbMN, agrebMN) || compare(alesbMX, agrebMN) || compare(alesbMN, agrebMX) || compare(alesbMX, agrebMX))
    {
        cout << "Happy Alex\n";
    }
    else
    {
        if (compare(alesbMN, aeqb) || compare(alesbMX, aeqb) || compare(agrebMN, agrebMX) || compare(agrebMN, aeqb) || compare(agrebMX, aeqb))
        {
            cout << "Happy Alex\n";
        }
        else
        {
            cout << "Poor Alex\n";
        }
    }
}
