#ifndef MEDECIN__
    #define MEDECIN__
        #include "../../main.h"
        #include "../Personne.h"

        namespace individu
        {
            class Medecin:public Personne
            {
                private:
                    string fonction;
                public:
                    Medecin();
                    ~Medecin();
                    string getFonctin();
                    void setFonction(string fonction);
            };
        } // namespace individu
        

#endif