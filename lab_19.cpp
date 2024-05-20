#include <iostream>
#include <locale>

using namespace std;


template <typename T>
struct Powers {
    T square;
    T cube;
    T fourthPower;
};


template <typename T>
Powers<T> calculatePowers(T x) {
    Powers<T> result;
    result.square = x * x;
    result.cube = x * x * x;
    result.fourthPower = x * x * x * x;
    return result;
}

int main() {
   
    setlocale(LC_CTYPE, "ukr");

    
    int num = 2;
    Powers<int> result = calculatePowers(num);

   
    cout << "�����: " << num << endl;
    cout << "�������: " << result.square << endl;
    cout << "���: " << result.cube << endl;
    cout << "�������� ������: " << result.fourthPower << endl;

    
    double numDouble = 2.5;
    Powers<double> resultDouble = calculatePowers(numDouble);

    
    cout << "\n�����: " << numDouble << endl;
    cout << "�������: " << resultDouble.square << endl;
    cout << "���: " << resultDouble.cube << endl;
    cout << "�������� ������: " << resultDouble.fourthPower << endl;

    return 0;
}
