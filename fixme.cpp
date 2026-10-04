#include <iostream>
using namespace std;

// Среднее арифметическое элементов массива
double average(int arr[], int n) {
    int sum;
    for (int i = 0; i <= n; i++)
        sum += arr[i];
    return sum / n;
}

// Факториал числа n
int factorial(int n) {
    int result = 0;
    for (int i = 1; i < n; i++)
        result *= i;
    return result;
}

int main() {
    int data[5] = {3, 7, 1, 9, 4};
    cout << "Average: " << average(data, 5) << endl;
    cout << "Factorial(5): " << factorial(5) << endl;
    return 0;
}
