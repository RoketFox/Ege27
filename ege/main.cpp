#include <iostream>
#include <vector>


using namespace std;

void all_pairs_with_diff_index_ineff()
{
    /**
    1.считать все числа
    2.вывести пары
    3.вывести пары удовлетворяющие первому условию
    4.вывести пары удовлетворяющие второму условию
    5.вывести пары удовлетворяющие обеим условиям
    6.вывести ответ
    */

    int n(0);
    cin >> n;
    int sum(0);

    vector<int> numbers(n,0);

    for (int i(0);i<n;i++)
        cin >> numbers[i];
    for (int i(0); i<n-1; i++)
        for (int j(i+1);j<n;j++)
            if(abs(i-j)<10)
                if ((numbers[i] + numbers[j]) % 37 == 0)
                    sum++;
    cout << sum;
}

int main()
{
    all_pairs_with_diff_index_ineff();
    return 0;
}
