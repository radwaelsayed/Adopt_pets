#ifndef ADOPTIONCENTER_H
#define ADOPTIONCENTER_H
using namespace std;

#include <Pet.h>
#include <Birds.h>
#include <Cats.h>
#include <Dogs.h>
#include <iostream>
#include <string>


class Adoptioncenter
{
protected:
    Dogs dog;
    Cats cat;
    Birds bird;
    static const int maxPets= 10;
    Pet* pets[maxPets]{};
    int petcount=0;
    string shelterAddress;
public:

    Adoptioncenter();
    void addPet(Pet* pet);
    void adoptePet(string& petSpecies,int petIndex, Pet*&adoptePet);
    void DisplayPetsBySpecies(string& species);
    void Toadoptpet();
    void DisplayavailablePets();
    void Displaymenu();
    void addDog();
    void addCat();
    void addBird();
    void DisplayAdoptedPets();
    void DisplayNotAdoptedPets();
    void DisplayVaccinatedPets();
    void DisplayNotVaccinatedPets();
    ~Adoptioncenter();


};

#endif // ADOPTIONCENTER_H
