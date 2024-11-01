#ifndef EXEMPLE_H
#define EXEMPLE_H

#include <string>
#include <vector>
#include <sstream>

class Exemple
{
public:
    // ����� ��� ���������� ������ �� ����� � ��������� ����� �� �������
    std::string getWordByIndex(const std::string& input, int index) {
        std::vector<std::string> words;
        std::stringstream ss(input);
        std::string word;

        // ��������� ������ �� ;
        while (std::getline(ss, word, ';')) {
            words.push_back(word);
        }

        // ���������, ���� ������ � �������� ����������� ���������
        if (index < 1 || index > words.size()) {
            return "��� ������ �����"; 
        }

        return words[index - 1];  // ���������� ����� (������ - 1, ��� ��� ������� ���������� � 0)
    }
};

#endif
