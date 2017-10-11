#include <string>
#include <vector>
#include <iostream>

/**
 * @brief Check if palindrome
 *
 * @param[in] word - word to check if palindrome
 *
 */
bool isPalindrome(std::string word)
{
    auto lastChar = word.size() - 1;
    auto mid = lastChar / 2;

    for (int i = 0; i <= mid; i++)
    {
        if (word.substr(i, 1).compare(word.substr(lastChar - i, 1)) != 0)
        {
            return false;
        }
    }
    return true;
}



int main()
{
    std::vector<std::string> words;
    words.push_back("abcdcba");
    words.push_back("banana");
    words.push_back("pop");
    words.push_back("civic");
    words.push_back("noon");
    words.push_back("abcdecba");
    for (auto& word : words)
    {
        std::string msg = " is a palindrome.";
        if (!isPalindrome(word))
        {
            msg.insert(msg.find("is a") + 3, "not ");
        }
        std::cout << word << msg << std::endl;
    }
    return 0;
}
