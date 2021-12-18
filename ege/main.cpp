#include <iostream>
#include <array>
using namespace std;

void number_sums_div_eff_2()
{
    int a = 0;
    int fin_sum = 0;

    array<array<int,40>,2> numbers;
    array<int,40> n;
    n.fill(0);
    numbers.fill(n);

    cin >> a;

    while (a != -9999)
    {
        numbers[a > 40][a % 40] += 1;
        cin >> a;
    }
    
    int up   = numbers[1][0];
    int down = numbers[0][0];

    fin_sum += up * (up - 1) / 2;
    fin_sum += up * down;

    up   = numbers[1][20];
    down = numbers[0][20];

    fin_sum += up * (up - 1) / 2;
    fin_sum += up * down;

    for (int i = 1; i < 20; i++)
    {
        int upOther1   = numbers[1][i], upOther2  = numbers[1][40 - i];
        int downOther1 = numbers[0][i], downOther2 = numbers[0][40 - i];

        fin_sum += upOther1 * upOther2;
        fin_sum += upOther1 * downOther2;
        fin_sum += downOther1 * upOther2;
    }

    cout << fin_sum;
}

int main()
{
    number_sums_div_eff_2();
    return 0;
}