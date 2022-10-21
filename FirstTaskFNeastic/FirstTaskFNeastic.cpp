#include <iostream>
#include <algorithm>
#include <string>

std::string MyWord, FinalWord;
int WordSize;

void AskTheWord()
{
    std::cin >> MyWord;
    WordSize = MyWord.size();
};

bool bUniqueSymbol(char symbol, int iterator)
{
    for (int x = 0; x < WordSize; x++)
    {
        if (symbol == MyWord[x] && x != iterator)
        {
            return false;
            break;
        }
    }
    return true;
}

int main()
{
    AskTheWord();
    std::transform(MyWord.begin(), MyWord.end(), MyWord.begin(), tolower);

    for (int i = 0; i < WordSize; i++)
    {
        bUniqueSymbol(MyWord[i], i) ? FinalWord += '(' : FinalWord += ')';
    }
    std::cout << FinalWord;
}
