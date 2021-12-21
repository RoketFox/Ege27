#include <iostream>
#include <vector>


void max_3nums_div_by4()
{
    int N = 0;
    std::cin >> N;

    std::vector<int> numbers(N,0);

    for (int i = 0;i<N;i++)
    {
        std::cin >> numbers[i];
    }

    for (int i = 0;i < N;i++)
    {
        std::cout << numbers[i] << " ";
    }
}

int main()
{
    max_3nums_div_by4();
    return 0;
}