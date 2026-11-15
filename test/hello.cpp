#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> langs = {"C", "C++", "Python"};
    std::cout << "Hello, VS Code C++ 环境!" << std::endl;
    for (const auto &lang : langs)
    {
        std::cout << "- " << lang << std::endl;
    }
    return 0;
}
