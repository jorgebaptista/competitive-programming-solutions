/*
    Solution for SWERC 2023 Problem F: Programming-trampoline-athlon!
    See problem_set.pdf in this same folder.

    *****************************************

    M and N are the number of dice Alice and Bob have, respectively.
    A and B are the number of sides on each of Alice and Bob have, respectively.
    k is a specific index of A or B
    Ak and Bk represent how many sides there are on that die
    The average of a die is calculated as (1 + Ak) / 2

    We can sum the averages of all dice for both players and compare who has higher
    probability of winning
*/

#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int M, N;
    long double A_sum = 0, B_sum = 0;

    std::cin >> M >> N;

    for (int k = 0; k < M; k++)
    {
        int A;
        std::cin >> A;
        A_sum += (A + 1.0) / 2;
    }

    for (int k = 0; k < N; k++)
    {
        int B;
        std::cin >> B;
        B_sum += (B + 1.0) / 2;
    }

    if (A_sum == B_sum)
    {
        std::cout << "TIED\n";
    }
    else
        std::cout << (A_sum > B_sum ? "ALICE" : "BOB") << '\n';

    return 0;
}