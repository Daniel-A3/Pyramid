#include <iostream>
#include <string>

int reverseStr(std::string& str) 
{ 
    int n = str.length(); 

    for (int i = 0; i < n / 2; i++) 
        std::swap(str[i], str[n - i - 1]); 

    return 0;
} 

int main()
{
    std::string userString{};
    std::cout << "\nEnter any string for its pyramid : ";
    std::getline(std::cin, userString);

    int strLen = userString.length();
    int lines = strLen;
    int spacesNum = strLen - 1;
    std::string spaces{};
    
    std::cout << "\n";
    for (int i = 0; i < spacesNum; i++)
    {
        spaces += " ";
    }
    for (int i = 1; i < lines + 1; i++) 
    {
        std::string snippet = userString.substr(0, i);
        std::string reverse = snippet;
        reverseStr(reverse);
        reverse.erase(0, 1); 
            
        if (reverse.length() == 0)
        {
             std::cout << "   " << spaces << snippet << spaces << std::endl;
        }
        else 
        {
            std::cout << "   " << spaces << snippet << reverse << spaces << std::endl;
        }
        if  (spaces.length() == 0){}
        else{
            spaces.erase(spaces.length() - 1, spaces.length());
        }
    }

    return 0;
}