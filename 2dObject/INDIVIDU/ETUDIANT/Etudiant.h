#ifndef ETUDIANT__
    #define ETUDIANT__

    #include "../../main.h"
    #include "../Personne.h"

    namespace individu
    {
        class Etudiant:public Personne
        {
            private:
                string EcoleName;
                string filiere;
            public:
                void setEtablisment(string et);
                void setfiliere(string fil);
                string getfiliere();
                void DisplayDetails();
                Etudiant();
                ~Etudiant();
        };
    } // namespace individu
    


#endif