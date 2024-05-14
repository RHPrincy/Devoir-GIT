#include "../Header/Activation.hpp"

bool Activation::verifActivation()
{
    std::ifstream fs("cledActivation.txt");
    if (fs.fail())
    {
        std::cout << "Cle d'activation introuvable" << std::endl;
        return false;
    }
    else
    {
        std::string cledActivation;
        fs >> cledActivation;
        fs.close();
        if (cledActivation == cleTest)
        {
            std::cout << "Activation reussi" << std::endl;
            active();
            return true;
        }
        else
        {
            std::string s;
            std::ifstream tryFyle("try.txt");
            tryFyle >> s;
            tryFyle.close();
            int i = stoi(s), value;
            std::ofstream w("try.txt");
            value = (i - 1);
            w << value;
            w.close();
            return false;
        }
    }
}

void Activation::active()
{
    std::ofstream fs("try.txt");
    fs << "active";
    status = true;
    fs.close();
}

Activation::Activation()
{
    std::string i;
    std::ifstream fs("try.txt");
    if (fs.fail())
    {
        std::cout << "try.txt introuvable" << std::endl,
            point = 0;
    }
    else
    {
        fs >> i;
        if (i == "activated")
        {
            status = true;
        }
        else
        {
            point = stoi(i);
        }
        fs.close();
    }
}

Activation::~Activation()
{
    
}

int Activation::getPoint()
{
    return point;
}
