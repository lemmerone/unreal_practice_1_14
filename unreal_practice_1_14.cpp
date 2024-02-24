#include <iostream>
#include <string>

int main()
{
    std::string line;

    std::cout << "Enter string: ";
    std::getline(std::cin, line);

    std::cout << "String length: " << line.size() << "\n";
    std::cout << "First character: " << line.front() << "\n";
    std::cout << "Last character: " << line.back() << "\n";
}
