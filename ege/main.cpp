#include <iostream>
#include <vector>

using namespace std;

void number_products_div_ineff_2()
{
    /**
    1. считать и запомнить входные числа
    2. вывести все пары чисел
    3. вместо вывода пар посчитать произведение
    4. вывести пары, произведения которых равны 22
    5. только кол-во пар
    */

        int n(0);
    cin >> n;

    vector<int> numbers(n,0);

    for (int i(0);i<n;i++)
        cin >> numbers[i];

    for (int i(0);i<n-1;i++)
        for (int j(i+1);j<n;j++)
            if ((numbers[i]*numbers[j])%42 == 0)
                cout << numbers[i] << " " << numbers[j] << endl;
}

int main()
{
    number_products_div_ineff_2();
    return 0;
}
