/* 
Solution for problem 2025B : Binomial Coefficients, Kind Of
Link of the problem description - https://codeforces.com/problemset/problem/2025/B
*/

#include <iostream>
#include <vector>

int main()
{
    int t;
    std::cin >> t;
    std::vector<int> C;

    int n = t * 2;

    for (int i = 0; i < n; i++)
    {
        int k;
        std::cin >> k;
        C.push_back(k);
    }

    for (int i = 0; i < t; i++)
    {
        for (int j = t; j < t * 2; j++)
        {
            
        }
        
    }
    

    return 0;
}