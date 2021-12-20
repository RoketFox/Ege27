#include <iostream>
#include <array>

void num_sum_max_distance_eff_1()
{
    int bufLen = 10;
    int mult = 37;
    int N = 0;
    std::cin >> N;
    int fin = 0;
    std::array <int,10> buf;

    for (int i = 0; i < bufLen; i++)
    {
        std::cin >> buf[i];
    }

    for (int i = 0; i < bufLen - 1; i++)
    {
        for (int j = i + 1; j < bufLen; j++)
        {
            if (((buf[i] + buf[j]) % mult) == 0)
            fin += 1;
        }
    }

    for (int i = bufLen; i < N; i++)
    {
        int a = 0;
        std::cin >> a;

        for (int i = 0; i < bufLen - 1; i++)
        {
            buf[i] = buf[i + 1];
            if (((buf[i] + a) % mult) == 0)
            fin += 1;
        }
        buf[bufLen - 1] = a;
    }
    std::cout << fin;
}

int main()
{
    num_sum_max_distance_eff_1();
}