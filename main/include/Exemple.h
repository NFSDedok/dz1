#ifndef EXEMPLE_H
#define EXEMPLE_H

#include <string>
#include <vector>
#include <sstream>

class Exemple
{
public:
    // Метод для разделения строки на слова и получения слова по индексу
    std::string getWordByIndex(const std::string& input, int index) {
        std::vector<std::string> words;
        std::stringstream ss(input);
        std::string word;

        // Разделяем строку по ;
        while (std::getline(ss, word, ';')) {
            words.push_back(word);
        }

        // Проверяем, если индекс в пределах допустимого диапазона
        if (index < 1 || index > words.size()) {
            return "Нет такого слова"; 
        }

        return words[index - 1];  // Возвращаем слово (индекс - 1, так как индексы начинаются с 0)
    }
};

#endif
