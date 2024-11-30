/*
Вариант 9.
Ввести натуральные числа A, B и C. Если A больше B и B больше C, то вывести A-B-C, если B больше A и B  кратно C, то вывести B/С+B-A, в остальных случаях вывести A+B+C.

Ввести число N, которое обозначает некоторую ошибку. При помощи оператора switch расшифровать значение ошибки.

Список ошибок:
0 – все хорошо, 1 – ошибка чтения файла, 2 – ошибка записи файла, 3 – не все поля определены. Предусмотреть обработку ошибочного ввода N.

Переменная x может принимать 2 значения: -1 и 1. Если -1, то вывести в консоль “Negative number”, если положительное - “Positive number”. Предложить вариант программы и объяснить свой выбор.
*/



#include <iostream>
using namespace std;

int main()
{
// Логика 1
    int A;
    std::cout << "Enter A: "; //получили число
    std::cin >> A;
    int B;
    std::cout << "Enter B: "; //получили число
    std::cin >> B;
    int C;
    std::cout << "Enter C: "; //получили число
    std::cin >> C;

    if (A > B && B > C)
    {
        cout << "Результат: " << A - B - C << endl;
    } 
    else if (B > A && B % C == 0) {
        cout << "Результат: " << B / C + B - A << endl;
    }
    else 
    {
        cout << "Результат: " << A + B + C << endl;
    }

// Ввод ошибки
    int N;
    std::cout << "число ошибки (0-3): "; //получили число
    std::cin >> N;

    switch (N) 
    {
        case 0: 
            cout << "все хорошо" << endl; 
            break;
        case 1: 
            cout << "Ошибка чтения файла!" << endl; 
            break;
        case 2: 
            cout << "ошибка записи файла" << endl; 
            break;
        case 3: 
            cout << "не все поля определены" << endl; 
            break;
        default: 
            cout << "такой ошибки нет" << endl; 
            break;
    }

//значение x
    int x;
    std::cout << "Enter x: "; //получили число
    std::cin >> x;

    if (x == -1) //если х=-1, то выводим "Negative number"
    {
        cout << "Negative number" << endl;
    } 
    else if (x == 1) // если первое не выполнено а х=1, то выводим "Positive number"
    {
        cout << "Positive number" << endl;
    } 
    else // если оба условия ложны
    {
        cout << "ошибка ввода" << endl;
    }

    return 0;
}
