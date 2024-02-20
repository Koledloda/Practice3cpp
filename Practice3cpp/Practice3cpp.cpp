#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    const int nunel = 3;
    const int nunel1 = 5;
    int arr[nunel][nunel1];

    for (int i = 0; i < nunel; i++) {
        for (int j = 0; j < nunel1; j++) {
            cout << "Введите элементы: ";
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < nunel; i++) {
        int sum = 0;
        for (int j = 0; j < nunel1; j++) {
            sum += arr[i][j];
        }
        double average = (double)sum / nunel1;
        cout << "Среднее арифметическое чисел строк:\n";
        cout << "Строка " << ": " << average << endl;
    }


    return 0;
}
