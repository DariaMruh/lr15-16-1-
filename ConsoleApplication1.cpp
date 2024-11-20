#include <iostream>
#include <fstream>  // ��� ������ � �������
using namespace std;

int main() {
    // ³�������� ���� chusla.txt ��� �������
    ifstream inputFile("chusla.txt");

    // ����������, �� ���� ������ ��������
    if (!inputFile) {
        cerr << "�� ������� ������� ���� chusla.txt" << endl;
        return 1;  // ��������� �������� � ����� �������
    }

    int number;              // ����� ��� ���������� ����� � �����
    long long product = 1;   // ��� ���������� ������� ����� (long long ��� ������� �������)
    bool found = false;      // ��������� ��� �������� �������� �����, ������� 4

    // ������� ����� � �����
    while (inputFile >> number) {
        if (number % 4 == 0) {  // ���� ����� ������ 4
            product *= number;  // ������� ���� �� �������� �������
            found = true;       // ���������, �� ���� ����� ��������
        }
    }

    // ��������� ���� ���� �������
    inputFile.close();

    // �������� ���������
    if (found) {
        cout << "������� �����, ������� 4: " << product << endl;
    }
    else {
        cout << "� ���� ���� �����, ������� 4." << endl;
    }

    return 0;  // ������ ���������� ��������
}
