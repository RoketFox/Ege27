#include <iostream>
#include <vector>
#include <list>

using namespace std;

void number_sums_div_40_ineff_2()
{
    int a(0);
    vector<int> numbers;
    int fin(0);

    while (a != -9999)
    {
        cin >> a;
        if (a == -9999) break;
        numbers.push_back(a);
    }

    int n = numbers.size();

    for (int i(0);i<n-1;i++)
    {
        for (int j(i+1);j<n;j++)
        {
            if(numbers[i]>40 || numbers[j]>40)
                if((numbers[i]+numbers[j])%40==0)
                    fin += 1;
        }
    }
    cout << fin;
    // for (auto i = numsy.begin();i != numsy.end();i++)
    // {
    //     cout << *i << endl;
    // }
}

int main()
{
    number_sums_div_40_ineff_2();
    return 0;
}