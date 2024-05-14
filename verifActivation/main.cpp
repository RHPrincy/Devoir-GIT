#include <iostream>
#include "Header/Activation.hpp"

int main()
{
    
    std::string i;
    std::ifstream fs("try.txt");
    fs >> i;
	std::cout << i << std::endl;
    if (fs.fail())
    {
        std::cout << "try.txt introuvable" << std::endl;
    }
	else if(i == "active")
	{
		std::cout << "Hello World" << std::endl;
    }
    else
	{
		Activation test = Activation();
		test.verifActivation();
		if (test.getPoint() > 0)
		{
			std::cout << "Hello world (Entrer la cle d'Activation)" << std::endl;
			std::cout << test.getPoint() - 1 << " essai gratuit" << std::endl;
		}
		else
		{
			std::cout << " Impossible, Limite d'essai gratuit atteint" << std::endl;
		}
	}
    return 0;
}
