#include <iostream>
#include <vector>


void max_3nums_div_by4_ineff()
{
    int mult = 4;

    int N = 0;
    std::cin >> N;

    int fin1 = 0, fin2 = 0, fin3 = 0;

    std::vector<int> numbers(N,0);

    for (int i = 0; i<N; i++)
    {
        std::cin >> numbers[i];
    }

    for (int i = 0;i < N-1; i++)
        for (int j = i+1; j < N; j++)
            for (int k = j+1; k < N; k++)
                if ((numbers[i] * numbers[j] * numbers[k]) % mult == 0)
                {
                    fin1 = std::max(fin1, numbers[i]);
                    fin2 = std::max(fin2, numbers[j]);
                    fin3 = std::max(fin3, numbers[k]);
                }
                    
    std::cout << fin1 <<" "<< fin2 <<" "<< fin3 <<std::endl;
}

int main()
{
    max_3nums_div_by4_ineff();
    return 0;
}