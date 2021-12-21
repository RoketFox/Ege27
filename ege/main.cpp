#include <iostream>
#include <vector>


void max_3nums_div_by4()
{
    int mult = 4;

    int N = 0;
    std::cin >> N;

    std::vector<int> numbers(N,0);

    for (int i = 0; i<N; i++)
    {
        std::cin >> numbers[i];
    }

    for (int i = 0;i < N-1; i++)
        for (int j = i+1; j < N; j++)
            for (int k = j+1; k < N; k++)
                if ((numbers[i] * numbers[j] * numbers[k]) % mult == 0)
                    std::cout << numbers[i] <<" "<< numbers[j] <<" "<< numbers[k] <<std::endl;
}

int main()
{
    max_3nums_div_by4();
    return 0;
}