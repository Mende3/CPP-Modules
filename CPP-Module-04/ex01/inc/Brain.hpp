#ifndef BRAIN
# define BRAIN

# include <iostream>
# include <cstdlib>
# include <cstring>

# define LIMIT 100

class Brain 
{
    private :
        std::string ideas[LIMIT];

    public :
        int maxIdea;
        Brain ();
        Brain (const Brain &ohter);
        Brain& operator=(const Brain &other);
        ~Brain ();

        void getIdea (std::string type);
        void generateIdea ();
        void addInNextPos (std::string *arr, int i, std::string add);
};

#endif