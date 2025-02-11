#include "test.h"

void test()
{
    Etudiant myStudent{};
    Etablissement MySchool{};
    //set Information
    MySchool.setName("Lycee Bosco");
    MySchool.setPerimetre(400);
    MySchool.setStudentNumber(1);
    myStudent.setfiliere("Faculte des Science");
    myStudent.setName("Bob");
    myStudent.setAge(20);

    MySchool.Inscrire(myStudent);
    myStudent.setEtablisment("Lycee Bosco");
    cout << "\n\nStudent Information "  << endl;
    cout << "===================="  << endl;
    myStudent.DisplayDetails();
    cout << "\n\nEtablisement Information " << endl;
    cout << "===================="  << endl;
    MySchool.DisplayEtabDetails();
    
    
    Medecin MyDoctor{};
    Hopital Myhospital{};

    Myhospital.setName("HJRA");
    Myhospital.setPatientNumber(129);
    MyDoctor.setName("Robert");
    MyDoctor.setAge(33);
    MyDoctor.setFonction("Chirurgien");
    Myhospital.setDoctor(MyDoctor);

    cout << "\n\nMedecin Information " << endl;
    cout << "===================="  << endl;
    MyDoctor.info();
    cout << "\n\nHospital Information " << endl;
    cout << "===================="  << endl;
    Myhospital.printDetails();
}