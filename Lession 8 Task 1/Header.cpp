#include <exception>
#include <string>

int function(std::string anyWord, int forbiddenLength)
{
    if (forbiddenLength == anyWord.length())
    {
        throw std::exception("Вы ввели слово запретной длины! До свидания");
    };

    return static_cast<int>(anyWord.length());
}