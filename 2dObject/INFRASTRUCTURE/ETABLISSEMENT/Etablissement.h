#ifndef ETABLISSEMENT__
    #define ETABLISSEMENT__

    #include "../Infrastructure.h"
    #include "../../INDIVIDU/ETUDIANT/Etudiant.h"
    #include "../../main.h"
    namespace place
    {
        using namespace individu;
        class Etablissement:public Infrastructure
        {
            private:
                int StudentNumber;
                vector<Etudiant> ListOfStudent;
            public:
                void setStudentNumber(int number);
                int getStudentNumber();
                void DisplayEtabDetails();
                void Inscrire(Etudiant e);
                Etablissement();
                ~Etablissement();
        };
    } // namespace place


#endif 