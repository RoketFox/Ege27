#include <iostream>
#include <vector>

using namespace std;

void number_products_div_ineff_2()
{
    /**
    1. ������� � ��������� ������� �����
    2. ������� ��� ���� �����
    3. ������ ������ ��� ��������� ������������
    4. ������� ����, ������������ ������� ����� 22
    5. ������ ���-�� ���
    */

        int n(0);
    cin >> n;

    vector<int> numbers(n,0);

    for (int i(0);i<n;i++)
        cin >> numbers[i];
    for (int i(0);i<n;i++)
        cout<< numbers[i]<<" ";
}

int main()
{
    number_products_div_ineff_2();
    return 0;
}
