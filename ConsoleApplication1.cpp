#include <iostream>
#include <fstream>  // Для роботи з файлами
using namespace std;

int main() {
    // Відкриваємо файл chusla.txt для читання
    ifstream inputFile("chusla.txt");

    // Перевіряємо, чи файл успішно відкрився
    if (!inputFile) {
        cerr << "Не вдалося відкрити файл chusla.txt" << endl;
        return 1;  // Завершуємо програму з кодом помилки
    }

    int number;              // Змінна для зчитування чисел з файлу
    long long product = 1;   // Для збереження добутку чисел (long long для великих значень)
    bool found = false;      // Прапорець для перевірки наявності чисел, кратних 4

    // Зчитуємо числа з файлу
    while (inputFile >> number) {
        if (number % 4 == 0) {  // Якщо число кратне 4
            product *= number;  // Множимо його на поточний добуток
            found = true;       // Позначаємо, що таке число знайдено
        }
    }

    // Закриваємо файл після читання
    inputFile.close();

    // Виводимо результат
    if (found) {
        cout << "Добуток чисел, кратних 4: " << product << endl;
    }
    else {
        cout << "У файлі немає чисел, кратних 4." << endl;
    }

    return 0;  // Успішне завершення програми
}
