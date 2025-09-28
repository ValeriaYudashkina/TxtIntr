#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc == 1) {
        cout << "Использование тригонометрического калькулятора:" << endl;
        cout << "Пример 1: calculator -o операция число" << endl;
        cout << "Пример 2: calculator --operation операция число" << endl;
        cout << "Операция: sin_deg, sin_rad, cos_deg, cos_rad" << endl;
        return 0;
    }
    if (argc != 4) {
        cout << "Неверное количество аргументов" << endl;
        return 1;
    }
    string flag = argv[1];
    string operation = argv[2];
    double number = stod(argv[3]); //преобразование в число
    double pi = 3.1415926535;
    double result = 0;

    if (flag != "-o" && flag != "--operation") {
        cout << "Неверный именованный параметр" << endl;
        return 1;
    }

    if (operation == "sin_deg") {
        result = sin(number * pi / 180);
        cout << result << endl;
    }
    else if (operation == "sin_rad") {
        result = sin(number);
        cout << result << endl;
    }
    else if (operation == "cos_deg") {
        result = cos(number * pi / 180);
        cout << result << endl;
    }
    else if (operation == "cos_rad") {
        result = cos(number);
        cout << result << endl;
    } else {
        cout << "Неверная операция" << endl;
        return 1;
      }
    return 0;
}
