#ifndef HOPITAL__
    #define HOPITAL__


        #include "../Infrastructure.h"
        #include "../../INDIVIDU/MEDECIN/Medecin.h"

        namespace place
        {
            using namespace individu;
            class Hopital:public Infrastructure
            {
                private:
                    int patientNumber;
                    vector<Medecin> AllDoctor;
                public:
                    void setDoctor(Medecin doc);
                    void setPatientNumber(int patient);
                    vector<Medecin> getListOfALlDoctor();
                    int getPatientNumber();
                    void printDetails();
                    Hopital();
                    ~Hopital();
            };
        } // namespace place
        

#endif 
