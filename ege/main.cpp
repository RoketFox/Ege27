#include <iostream>
#include <vector>


using namespace std;

void all_pairs_with_diff_index_ineff()
{
    /**
    1.������� ��� �����
    2.������� ����
    3.������� ���� ��������������� ������� �������
    4.������� ���� ��������������� ������� �������
    5.������� ���� ��������������� ����� ��������
    6.������� �����
    */

    int n(0);
    cin >> n;

    vector<int> numbers(n,0);

    for (int i(0);i<n;i++)
        cin >> numbers[i];
        for (int i(0);i<n-1;i++)
            for (int j(i+1);j<n;j++)
                if(abs(i-j)<=10)
                    cout << numbers[i] << " " << numbers[j] << "|" << i << j <<endl;
}

int main()
{
    all_pairs_with_diff_index_ineff();
    return 0;
}
