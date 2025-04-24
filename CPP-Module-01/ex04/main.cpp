#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

std::string changedLine (std::string &cur_line,
                        std::string org,
                        std::string sbtt);

std::string search (std::string cur_line, std::string org);

int main (int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Need a <filename> <original> <substitute>"<<std::endl;
        return 0;
    }
    std::string filename = av[1];
    std::string org = av[2];
    std::string sbtt = av[3];
    std::string line;
    std::string newLine;
    int nbrLine = 0;

    std::ifstream myfile(filename.c_str());
    std::ofstream newFile ((filename + ".replace").c_str());

    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            newLine = changedLine (line, org, sbtt);
            if (newFile.is_open())
                newFile << newLine <<std::endl;
            nbrLine++;
        }
        myfile.close();
        newFile.close();
    }
    else
        std::cout << "erro" <<std::endl;
}

std::string changedLine(std::string &cur_line,
                      std::string org,
                      std::string sbtt)
{
    size_t itFound = cur_line.find(org);
    std::string wFounded = search (cur_line, org);
    
    if (wFounded == org)
    {
        while ((itFound = cur_line.find(org, itFound)) != std::string::npos)
        {
            if (itFound != std::string::npos)
            {
                std::string result = cur_line.substr(0, itFound);
                result += sbtt; 
                result += cur_line.substr(itFound + org.length());
                cur_line = result;
                itFound += sbtt.length();
            }
        }
    }
    return cur_line;
}

std::string search (std::string cur_line, std::string org)
{
    std::string word;

    size_t itFound = cur_line.find(org);
    size_t l = 0;

    while (cur_line[l] != '\0' && cur_line[l] != '\n')
    {
        if (cur_line[l])
        {
            if (cur_line[itFound] != 32)
            {
                word += cur_line[itFound];
                itFound++;
            }
        }
        l++;
    }
    if (word.compare(org) == 0)
        return word;
    return " ";
}