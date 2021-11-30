#include <iostream>
#include <vector>

using namespace std;

void min_sum_min_distance_ineff_1()
{
    /**
    1. считать все числа
    2. вывести все числа
    3. вывести все пары
    4. вывести только достаточно далёкие пары
    5. вместо вывода пары - сумма
    б. найти минимальную сумму
    */

    int n(0);
    cin >> n;

    vector<int> numbers(n,0);

    for (int i(0);i<n;i++)
        cin >> numbers[i];
    for (int i(0);i<n-1;i++)
        for (int j(i+1);j<n;j++)
            cout << numbers[i] << " " << numbers[j] << endl;
}

int main()
{
    min_sum_min_distance_ineff_1();
    return 0;
}
