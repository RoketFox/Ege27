#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void max_sum_div_INEFF()
{
    /**
    1. ������� � ��������� ������� �����
    2. ������� ��� ���� �����
    3. ������ ��� ������� �����
    4. ��������� ��������� ����
    5. ������� ������ ���������� �����
    */
    int n(0);
    int currsum(0);
    int finsum(0);
    cin >> n;
    vector<int> numbers(n);
    for (int i(0); i < n; i++)
        cin >> numbers[i];

    for (int i(0);i<n-1;i++)
    {
        for (int j(i+1);j<n;j++)
        {
            currsum = numbers[i] + numbers[j];
            if (currsum % 2 != 0 && currsum > finsum)
            {
                finsum = currsum;
            }
        }
    }
    if (finsum == 0) cout << "-1" << endl;
    else cout << finsum << endl;
}

int main()
{
    max_sum_div_INEFF();
    return 0;
}
