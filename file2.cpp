#include <iostream>
#include <string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

    char input[256];
    char insertChar;

    cout << "������� �����������: ";
    cin.getline(input, 256);
    cout << "������� ������ ��� �������: ";
    cin >> insertChar;

    char result[512];
    int j = 0;

    int length = 0;
    while (input[length] != '\0')
    {
        length++;
    }

    for (int i = 0; i < length; i++)
    {
        result[j++] = input[i];
        if ((i + 1) % 2 == 0)
        {
            result[j++] = insertChar;
        }
    }
    result[j] = '\0';

    cout << "���������� �����������: " << result << endl;

    return 0;
}