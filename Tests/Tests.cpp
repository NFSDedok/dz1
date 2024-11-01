#include "pch.h"
#include "CppUnitTest.h"
#include "../main/include/Exemple.h"  

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Tests
{
    TEST_CLASS(Tests)
    {
    public:
        TEST_METHOD(TestGetWordByIndex) // ��� ������� ������� ��������������� ��� �����. 1=����, 2=����... � ��������� ����� ������ ��� ������� �� � ��������� 1-3
        {
            Exemple ex;
            std::string input = "����;����;������";

            Assert::AreEqual("����", ex.getWordByIndex(input, 1).c_str());  // ������� "����"
            Assert::AreEqual("����", ex.getWordByIndex(input, 2).c_str());  // ������� "����"
            Assert::AreEqual("������", ex.getWordByIndex(input, 3).c_str());  // ������� "������"
            Assert::AreEqual("��� ������ �����", ex.getWordByIndex(input, 4).c_str());  // ������� ��������� �� ������
            Assert::AreEqual("��� ������ �����", ex.getWordByIndex(input, 0).c_str());  // ������� ��������� �� ������ ��� ������� 0
        }

        TEST_METHOD(TestGetWordFromEmptyString) // ��� ����� ������ ��� ������ ������
        {
            Exemple ex;
            std::string input = "";

            Assert::AreEqual("��� ������ �����", ex.getWordByIndex(input, 1).c_str());  
        }

        TEST_METHOD(TestGetWordFromSingleWord)
        {
            Exemple ex;
            std::string input = "����";

            Assert::AreEqual("����", ex.getWordByIndex(input, 1).c_str());  // ������� "����" 
            Assert::AreEqual("��� ������ �����", ex.getWordByIndex(input, 2).c_str());  // ������� ��������� �� ������ ��� ������� 2
        }
    };
}
