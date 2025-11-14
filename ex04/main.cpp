#include <iostream>
#include <fstream>
#include <sstream> 

int main(int ac, char **av)
{
    std::string line;
    if (ac < 4)
    {
        std::cout << "Missing argumenst for this program" << std::endl;
        return (1);
    }
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::string filename = av[1];
    if (s1.empty())
    {
        std::cout << "s1 must not be empty" <<std::endl;
        return (1);
    }
    std::ifstream infile(filename);
    std::ofstream outfile("lfile jdid");
    std::stringstream buffer;
    if (!infile.is_open()){
        std::cout << "Error failed to open " << filename << std::endl;
        return (1);
    }
    else if (!outfile.is_open())
    {
        std::cout << "failed to open outfile" << std::endl;
        return (1);
    }
    while (std::getline(infile, line))
    {
        int pos = 0;
        if ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
        }
        outfile << line << '\n';
        line.clear();
    }
    infile.close();
    std::stringstream buff;
    buff << outfile.rdbuf();
    std::string content = buff.str();
    std::cout<<content<<std::endl;
    outfile.close();
}