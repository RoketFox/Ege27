#include <iostream>
using namespace std;

void min_sum_min_distance_ineff_1()
{
    int n;
    cin >> n;
    int min_sum = 32767;
    int min_v = 32767;
    int buf[4] = {};

    for (int i = 0; i < 4; i++)
    {
        cin >> buf[i];
    }

    for (int i = 4; i < n; i++)
    {
        int a;
        cin >> a;
        int min_cand = buf[0];
        for (int i = 0; i < 3; i++)
        {
            buf[i] = buf[i+1];
        }
        buf[3] = a;
        min_v = std::min(min_cand, min_v);
        min_sum = std::min(min_sum, min_v + buf[3]);
    }

    cout << min_sum;
}

int main()
{
    min_sum_min_distance_ineff_1();
    return 0;
}
