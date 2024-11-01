#include "pch.h"
#include "CppUnitTest.h"
#include "../main/include/Exemple.h"  

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Tests
{
    TEST_CLASS(Tests)
    {
    public:
        TEST_METHOD(TestGetWordByIndex) // при индексе выводит соответствующие ему слово. 1=нога, 2=рука... и проверяет будет ошибка при индексе не в диапозоне 1-3
        {
            Exemple ex;
            std::string input = "нога;рука;голова";

            Assert::AreEqual("нога", ex.getWordByIndex(input, 1).c_str());  // Ожидаем "нога"
            Assert::AreEqual("рука", ex.getWordByIndex(input, 2).c_str());  // Ожидаем "рука"
            Assert::AreEqual("голова", ex.getWordByIndex(input, 3).c_str());  // Ожидаем "голова"
            Assert::AreEqual("Нет такого слова", ex.getWordByIndex(input, 4).c_str());  // Ожидаем сообщение об ошибке
            Assert::AreEqual("Нет такого слова", ex.getWordByIndex(input, 0).c_str());  // Ожидаем сообщение об ошибке для индекса 0
        }

        TEST_METHOD(TestGetWordFromEmptyString) // что будет ошибка при пустой строке
        {
            Exemple ex;
            std::string input = "";

            Assert::AreEqual("Нет такого слова", ex.getWordByIndex(input, 1).c_str());  
        }

        TEST_METHOD(TestGetWordFromSingleWord)
        {
            Exemple ex;
            std::string input = "нога";

            Assert::AreEqual("нога", ex.getWordByIndex(input, 1).c_str());  // Ожидаем "нога" 
            Assert::AreEqual("Нет такого слова", ex.getWordByIndex(input, 2).c_str());  // Ожидаем сообщение об ошибке для индекса 2
        }
    };
}
