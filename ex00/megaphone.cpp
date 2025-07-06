#include <iostream>

int main(int argc, char **argv) 
{
    int i;

    i = 0;
    if (argc < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        while (++i < argc)
        {
            for (int y = 0; argv[i][y]; y++)
                argv[i][y] = toupper(argv[i][y]);
            std::cout << argv[i];
            if (argv[i])
                std::cout << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}
