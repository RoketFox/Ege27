#include <iostream>
#include <array>

void num_sum_max_distance_eff_2()
{
    int minLen = 7;
    int mult = 28;

    int N = 0;
    std::cin >> N;
    
    int fin = 0;

    std::array <int,7> mainBuf;
    std::array <int,28> helpBuf;
    helpBuf.fill(0);

    for (int i = 0; i < minLen; i++)
    {
        std::cin >> mainBuf[i];
    }
    
    for (int i = minLen; i < N; i++)
    {
        helpBuf[mainBuf[0] % mult] += 1;

        for (int j = 0; j < minLen - 1; j++)
        {
            mainBuf[j] = mainBuf[j + 1];
        }

        int a = 0;
        std::cin >> a;

        mainBuf[minLen - 1] = a;
        fin += helpBuf[(mult - (a % mult)) % mult];
    }
    std::cout << fin;
}

int main()
{
    num_sum_max_distance_eff_2();
    return 0;
}