#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    // Создаем массивы с номерами телефонов
    string mobileNumbers[] = { "456-789-0123", "345-678-9012", "234-567-8901", "123-456-7890" };
    string homeNumbers[] = { "444-555-6666", "333-444-5555", "222-333-4444", "111-222-3333" };
    int size = sizeof(mobileNumbers) / sizeof(mobileNumbers[0]);

    while (true) {
        // Отображаем меню пользователю
        cout << "\nМеню:\n";
        cout << "1. Отсортировать по номерам мобильных\n";
        cout << "2. Отсортировать по домашним номерам телефонов\n";
        cout << "3. Вывести пользовательские данные\n";
        cout << "4. Выход\n";

        int choice;
        cout << "Выберите действие: ";
        cin >> choice;

        switch (choice) {
        case 1:
            // Сортируем по номерам мобильных телефонов
            for (int i = 0; i < size - 1; i++) {
                for (int j = 0; j < size - i - 1; j++) {
                    if (mobileNumbers[j] > mobileNumbers[j + 1]) {
                        swap(mobileNumbers[j], mobileNumbers[j + 1]);
                        swap(homeNumbers[j], homeNumbers[j + 1]);
                    }
                }
            }
            cout << "Отсортировано по номерам мобильных\n";
            break;
        case 2:
            // Сортируем по домашним номерам
            for (int i = 0; i < size - 1; i++) {
                for (int j = 0; j < size - i - 1; j++) {
                    if (homeNumbers[j] > homeNumbers[j + 1]) {
                        swap(homeNumbers[j], homeNumbers[j + 1]);
                        swap(mobileNumbers[j], mobileNumbers[j + 1]);
                    }
                }
            }
            cout << "Отсортировано по домашним номерам телефонов\n";
            break;
        case 3:
            // Выводим все данные
            cout << "Все данные:\n";
            for (int i = 0; i < size; i++) {
                cout << mobileNumbers[i] << " " << homeNumbers[i] << "\n";
            }
            break;
        case 4:
            // Выходим из программы
            cout << "Выход из программы\n";
            return 0;
        default:
            cout << "Некорректный выбор\n";
        }
    }

    return 0;
}