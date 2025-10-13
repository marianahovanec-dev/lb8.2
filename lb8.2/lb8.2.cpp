
#include <iostream>
#include <string>
#include <windows.h>
#include <algorithm> // Для функції sort
    using namespace std;

    int main() {
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);

        // Створюємо одновимірний масив з різних слів
        string words[] = { "книга", "газета", "журнал", "сторінка", "буква", "слово", "речення", "текст", "абзац", "том" };
        int n = sizeof(words) / sizeof(words[0]); // Визначаємо кількість елементів у масиві

        // Виводимо початковий масив слів
        cout << "Початковий масив слів:\n";
        for (int i = 0; i < n; i++) {
            cout << words[i] << " ";
        }
        cout << "\n\n";

        // Впорядковуємо масив в алфавітному порядку
        sort(words, words + n);

        // Виводимо відсортований масив
        cout << "Відсортований масив слів (алфавітний порядок):\n";
        for (int i = 0; i < n; i++) {
            cout << words[i] << " ";
        }
        cout << "\n\n";

        // Виводимо кожне слово і кількість букв у ньому у вигляді списку
        cout << "Слова та кількість букв:\n";
        for (int i = 0; i < n; i++) {
            cout << words[i] << " - " << words[i].length() << " букв\n"; // length() повертає кількість символів у слові
        }

        return 0;
    }
