#include <iostream>
#include <fstream>


int main(int ac, char **av)
{
    std::string     line;
    std::size_t     findPos;

    if (ac != 4)
    {
        std::cout << "Usage -> ./replace filname string1 string2" << std::endl;
        return (1);
    }
    std::ifstream   inputFile(av[1]);
    if (!inputFile.is_open())
    {
        std::cout << "Error opening file " << av[1] << std::endl;
        return (2);
    }
    std::string ofName(av[1]);
    ofName.append(".replace");
    std::ofstream   outputFile(ofName);
    if (!outputFile.is_open())
    {
        std::cout << "Error opening file " << ofName << std::endl;
        inputFile.close();
        return (3);
    }
    std::string originalWord(av[2]);
    while (std::getline(inputFile, line))
    {
        findPos = line.find(originalWord);
        if (findPos != std::string::npos)
        {
            while (findPos != std::string::npos)
            {
                line.erase(findPos, originalWord.length());
                line.insert(findPos, av[3]);
                findPos = line.find(originalWord);
            }
            outputFile << line << std::endl;
        }
        else
            outputFile << line << std::endl;
    }
    inputFile.close();
    outputFile.close();
}
