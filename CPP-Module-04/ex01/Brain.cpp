#include "inc/Brain.hpp"

Brain::Brain ()
{
    maxIdea = -1;
    generateIdea ();
    std::cout << "[Brain] construtor padrão chamado" << std::endl;
}

Brain::Brain (const Brain &other)
{
    std::cout << "[Brain] construtor de cópia chamado" << std::endl;
    *this = other;
}

Brain& Brain::operator=(const Brain &other)
{
    if (this == &other)
        return *this;
    this->ideas[100] = other.ideas[100];
    return *this;
}

Brain::~Brain ()
{
    std::cout << "[Brain] destructor padrão chamado" << std::endl;
}

void Brain::addInNextPos (std::string *arr, int i, std::string add)
{
    size_t len = i - 1;
    for (size_t j = 0; j < len; j++)
    {
       size_t strLen = arr[j].size();
       if (strLen == 0) {
           arr[j] = add;
           maxIdea ++;
           return ;
       }
    }
    return ;
}

void Brain::generateIdea ()
{
    // pensametnos do gato
    addInNextPos(ideas, LIMIT ,"Estou com fome.");
    addInNextPos(ideas, LIMIT ,"Hora da soneca.");
    addInNextPos(ideas, LIMIT ,"Aquele sofá é meu trono.");
    addInNextPos(ideas, LIMIT ,"Alguém abriu a geladeira?");
    addInNextPos(ideas, LIMIT ,"Por que o humano está me olhando?");
    addInNextPos(ideas, LIMIT ,"Essa caixa parece confortável.");
    addInNextPos(ideas, LIMIT ,"Miau... só para lembrar que existo.");
    addInNextPos(ideas, LIMIT ,"Será que hoje é dia de petisco?");
    addInNextPos(ideas, LIMIT ,"Vou fingir que não ouvi meu nome.");
    addInNextPos(ideas, LIMIT ,"Se eu ficar encarando, o humano vai me dar comida.");

    // pensamentos do cão
    addInNextPos(ideas, LIMIT ,"Preciso caçar algo... talvez aquele inseto.");
    addInNextPos(ideas, LIMIT ,"Preciso enterrar esse osso... mesmo que seja no sofá.");
    addInNextPos(ideas, LIMIT ,"Estou entediado, vou morder um chinelo.");
    addInNextPos(ideas, LIMIT ,"Hora de correr pela casa sem motivo.");
    addInNextPos(ideas, LIMIT ,"É agora que eu derrubo esse vaso.");
    addInNextPos(ideas, LIMIT ,"A porta está fechada. Quero sair. Agora!");
    addInNextPos(ideas, LIMIT ,"O carteiro de novo? Tenho que latir!");
    addInNextPos(ideas, LIMIT ,"Esse sol está perfeito pra deitar.");
    addInNextPos(ideas, LIMIT ,"Preciso proteger o território!");
    addInNextPos(ideas, LIMIT ,"Ah, o som mágico do saco de ração...");
}

void Brain::getIdea (std::string type)
{
    srand(time(0));
    int min_val = 0;

    if (type == "Cat")
        maxIdea = (maxIdea / 2);

    if (type == "Dog")
        min_val = (maxIdea / 2) + 1;

    int rdmNum = (rand() % (maxIdea - min_val + 1)) + min_val;
    std::string print;
    print = ideas[rdmNum];
    std::cout <<"["<< type <<"] " << print << std::endl;
}
