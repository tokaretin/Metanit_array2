/*Напишите программу, в которой с помощью функции std::cin.getline() пользователь вводит строку с консоли в массив символов. С помощью цикла подсчитайте количество символов, введенных пользователем. Затем с помощью второго цикла выведите все символы введенной строки в обратном порядке.*/

#include <iostream>
#include <cstring>

int main() {
    char* input = nullptr; // Указатель на массив символов

    std::cout << "Введите строку: ";
    std::string userInput;
    std::getline(std::cin, userInput); // Чтение строки с помощью std::getline()

    input = new char[userInput.length() + 1]; // Выделение памяти для массива символов

    std::strcpy(input, userInput.c_str()); // Копирование строки в массив символов

    int length = std::strlen(input); // Получение длины строки

    std::cout << "Количество символов: " << length << std::endl;

    std::cout << "Строка в обратном порядке: ";
    for (int i = length - 1; i >= 0; --i) {
        std::cout << input[i];
    }
    std::cout << std::endl;

    delete[] input; // Освобождение выделенной памяти

    return 0;
}
