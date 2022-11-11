#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;
int Number(int* b, const int size) {
    int n = 0;
    for (int i = 0; i <= size; i++) {
        if (b[i] % 2 != 1 && b[i] < 0)
            n++;

    }
    return n;
}
void Create(int* b, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        b[i] = Low + rand() % (High - Low + 1);
}
void Print(int* b, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << b[i];
    cout << endl;
}

int Sum(int* b, const int size) {
    int s = 0;
    for (int i = 0; i < size; i++)
        if (b[i] % 2 != 1 && b[i] < 0)
            s += b[i];
    return s;

}

void Change(int* b, const int size) {
    for (int i = 0; i < size; i++) {
        if (b[i] % 2 != 1 && b[i] < 0)
            b[i] = 0;
    }
}

int main()
{
    srand((unsigned)time(NULL)); // ����������� ���������� ���������� �����
    const int n = 24;
    int b[n];
    int Low = -15;
    int High = 75;
    Create(b, n, Low, High);
    Print(b, n);
    int number = Number(b, n);
    cout << "Numbers: " << endl;
    cout << number;
    int sum = Sum(b, n);
    cout << "\nSum: " << endl;
    cout << sum;
    cout << endl;
    cout << Sum(b, n) <<endl;
    Change(b, n);
    Print(b, n);



    return 0;

}