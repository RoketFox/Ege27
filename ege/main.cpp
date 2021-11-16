#include <iostream>
#include <vector>

using namespace std;

void max_sum_div_INEFF()
{
    /**
    1. считать и запомнить входные числа
    2. вывести все пары чисел
    3. вместо пар вывести суммы
    4. проверить делимость сумм
    5. вывести только наибольшую сумму
    */
    int n(0);
    cin >> n;
    vector<int> numbers(n);
    for (int i(0); i < n; i++)
        cin >> numbers[i];
    cout << endl;
    for (int i(0); i < n; i++)
        cout << numbers[i] << " ";
}

int main()
{
    max_sum_div_INEFF();
    return 0;
}
