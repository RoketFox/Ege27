#include <iostream>
#include <vector>

using namespace std;

void number_sums_div_ineff_2()
{
    /**
    1. ������� � ��������� ������� �����
    2. ������� ��� ���� �����
    3. ������ ��� ������� ������������
    4. ��������� ��������� ����
    5. ��������� ��������� ������������
    5. ������� ������ ���������� ����� ���������� �� �������
    */

        int n(0);
    cin >> n;
    vector<int> numbers(n);
    for (int i(0); i < n; i++)
        cin >> numbers[i];
    for (int i(0); i < n; i++)
        cout << numbers[i] << " ";
}

int main()
{
    number_sums_div_ineff_2();
    return 0;
}
