#include <iostream>
#include <array>

void num_sum_max_distance_eff_3()
{
    int indexMult = 5;
    int mult = 36;

    int N = 0;
    std::cin >> N;
    
    int fin = 0;

    std::array <std::array<int,5>,36> helpBuf;
    helpBuf.fill(std::array<int,5>{0,0,0,0,0});

    int a = 0;
    for (int i = 0; i < N; i++)
    {
        std::cin >> a;
        helpBuf[a % mult][i % indexMult] += 1;
    }

    for (int i = 0; i < indexMult; i++)
    {
        int n = helpBuf[0][i], nh;

        
        fin += n * (n - 1) / 2;
        n = helpBuf[mult / 2][i];
        
        fin += n * (n - 1) / 2;

        for (int j = 1; j < mult / 2; j++)
        {
            n = helpBuf[j][i];
            nh = helpBuf[mult - j][i];

            
            fin += n * nh;
        }
    }

    std::cout << 
    fin;


}

int main()
{
    num_sum_max_distance_eff_3();
    return 0;
}
