#include <iostream>
#include <vector>

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
    cin >> n;
    vector<int> numbers(n);
    for (int i(0); i < n; i++)
        cin >> numbers[i];
    cout << endl;

    for (int i(0);i<n-1;i++)
        for (int j(i+1);j<n;j++)
            cout << numbers[i] << " " << numbers[j] << endl;
}

int main()
{
    max_sum_div_INEFF();
    return 0;
}
