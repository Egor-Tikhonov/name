// Задача: Проверка простого числа
// Практика code review (2 курс)
// На что смотреть: глубокая вложенность; флаг flag; неочевидная логика
// Файл: 06_is_prime.cpp

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int flag = 1;
    if (n > 1) {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            cout << "prime" << endl;
        } else {
            cout << "not" << endl;
        }
    } else {
        cout << "not" << endl;
    }
    return 0;
}
