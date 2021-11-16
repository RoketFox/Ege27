#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void max_sum_div_INEFF()
{
    ifstream ifs("data.txt");
    /**
    1. считать и запомнить входные числа
    2. вывести все пары чисел
    3. вместо пар вывести суммы
    4. проверить делимость сумм
    5. вывести только наибольшую сумму
    */
    int n(0);
    int currsum(0);
    int finsum(0);
    ifs >> n;
    vector<int> numbers(n);
    for (int i(0); i < n; i++)
        ifs >> numbers[i];
    cout << endl;

    for (int i(0);i<n-1;i++)
    {
        for (int j(i+1);j<n;j++)
        {
            currsum = numbers[i] + numbers[j];
            if (currsum % 2 != 0 & currsum > finsum)
            {
                finsum = currsum;
            }
        }
    }
    cout << finsum << endl;
}

int main()
{
    max_sum_div_INEFF();
    return 0;
}
