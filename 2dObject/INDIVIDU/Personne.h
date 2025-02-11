#ifndef PERSONNE_H__
    #define PERSONNE_H__
        #include <iostream>
        #include <string.h>

        using namespace std;
        namespace individu
        {
            class Personne{
                private:
                    string name;
                    int age;
                public:
                    void info();
                    void setName(string name);
                    void setAge(int age);
                    int getAge();
                    string getName();
            };
        } // namespace individu
        
#endif