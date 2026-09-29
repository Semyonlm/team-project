#include <iostream>
using namespace std;

int main() {
    int choice;
    do {
        cout << "\nКомандный проект: сборник расчётов\n";

        cout << "0. Выход\n";
        cout << "Выберите пункт: ";
        cin >> choice;
        switch (choice) {
            case 0:
                cout << "Работа завершена.\n";
                break;
            default:
                cout << "Такого пункта нет.\n";
        }
    } while (choice != 0);
    return 0;
}
