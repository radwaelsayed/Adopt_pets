#ifndef PET_H
#define PET_H
#include <iostream>
#include <string>
using namespace std;

class Pet
{
    protected:
        string Name;
        int Age;
        string Species;
        string Gender;
        bool Vaccinated;
        bool Adopted;

    public:
        Pet();
        Pet(string);
        Pet(string,int);
        Pet(string,int,string);
        Pet(string,int,string,string);
        Pet(string,int,string,string,bool);
        Pet(string,int,string,string,bool,bool);
        //setters
        void setName(string);
        void setAge(int);
        void setSpecies(string);
        void setGender(string);
        void setAdopted(bool);
        void setVaccinated (bool);
        //getters
        string getName();
        int getAge();
        string getSpecies();
        string getGender();
        bool getAdopted();
        bool getVaccinated();
          virtual void Display();
        ~Pet();
};

#endif // PET_H
