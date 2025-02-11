#ifndef INFRASTRUCTURE__
    #define INFRASTRUCTURE__
        #include <string>
        using namespace std;
        namespace place
        {
            class Infrastructure
            {
                private:
                    string name;
                    float perimetre;
                public:
                    Infrastructure();
                    ~Infrastructure();
                    void setName(string name);
                    void setPerimetre(float per);
                    string getName();
                    float getPerimetre();
            };
        } // namespace place
        
#endif