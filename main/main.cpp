#include <iostream>
#include "include/Exemple.h"

int main()
{
    setlocale(LC_ALL, "Ru");

    // Создаем объект класса Exemple
    Exemple ex;

    std::string input = "нога;рука;голова";

    // Выводим все слова
    std::cout << "Список слов: " << input << std::endl;  // Выводим все слова через ;

    int index;
    std::cout << "Введите номер слова: ";
    std::cin >> index;

    // Получаем слово по индексу
    std::string word = ex.getWordByIndex(input, index);
    std::cout << "Слово: " << word << std::endl;  // Выводим найденное слово или сообщение об ошибке

    return 0;  
}
