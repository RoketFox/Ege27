#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void max_sum_div_INEFF()
{
    ifstream ifs("data.txt");
    /**
    1. ������� � ��������� ������� �����
    2. ������� ��� ���� �����
    3. ������ ��� ������� �����
    4. ��������� ��������� ����
    5. ������� ������ ���������� �����
    */
    int n(0);
    ifs >> n;
    vector<int> numbers(n);
    for (int i(0); i < n; i++)
        ifs >> numbers[i];
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
