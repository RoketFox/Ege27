#include <iostream>
#include <vector>

using namespace std;

void number_sums_div_ineff_2()
{
    /**
    1. считать и запомнить входные числа
    2. вывести все пары чисел
    3. вместо пар вывести произведения
    4. проверить делимость сумм
    5. проверить делимость произведений
    5. вывести только наибольшую сумму подходящую по условию
    */

        int n(0);
    cin >> n;
    vector<int> numbers(n);
    for (int i(0); i < n; i++)
        cin >> numbers[i];

    for (int i(0);i<n-1;i++)
        for (int j(i+1);j<n;j++)
            cout << numbers[i] * numbers[j] << endl;
}

int main()
{
    number_sums_div_ineff_2();
    return 0;
}
