#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t, n, k;
    std::cin >> t;

    for (int i = 0; i < t; i++)
    {
        int gold = 0;
        int given = 0;
        std::cin >> n >> k;
        for (int j = 0; j < n; j++)
        {
            int a;
            std::cin >> a;

            if (a >= k)
            {
                gold += a;
            }
            else if (a == 0 && gold > 0)
            {
                gold--;
                given++;
            }
        }
        std::cout << given << "\n";
    }
}