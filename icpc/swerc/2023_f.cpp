#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct team
{
    std::string code;
    int total, index;

    bool operator<(const team &t) const
    {
        if (total == t.total)
            return index < t.index;
        return total > t.total;
    }
};

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;
    std::vector<team> teams;

    for (int i = 0; i < n; i++)
    {
        team nt;
        int p, e;
        std::cin >> nt.code >> p;
        nt.total = p * 10;
        nt.index = i;
        int maxe, mine;

        for (int j = 0; j < 6; j++)
        {
            std::cin >> e;
            if (j == 0)
            {
                maxe = mine = e;
            }
            else
            {
                if (e > maxe)
                    maxe = e;
                if (e < mine)
                    mine = e;
            }
            nt.total += e;
        }

        nt.total -= (mine + maxe);
        teams.push_back(nt);
    }

    std::sort(teams.begin(), teams.end());

    int hi_count = 0;
    int prev_score = -1;
    int prev_count = 0;

    for (const auto &t : teams)
    {
        if (t.total != prev_score)
        {
            hi_count += prev_count;
            prev_score = t.total;
            prev_count = 1;
        }
        else
            prev_count++;

        if (hi_count <= 2)
            std::cout << t.code << ' ' << t.total << '\n';
    }

    return 0;
}