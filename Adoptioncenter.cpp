#include "Adoptioncenter.h"

Adoptioncenter::Adoptioncenter(){
shelterAddress=" Zamalek,Cairo , Egypt";
}
void Adoptioncenter::Displaymenu()
{
    cout << "*** Shelter For Home Center Menu ***" <<endl;
    cout << "1. Display pets" << endl;
    cout << "2. Add Dogs" <<endl;
    cout << "3. Add Cats" <<endl;
    cout << "4. Add Birds" <<endl;
    cout << "5. Display  adopted pets " <<endl;
    cout << "6. Display not adopted pets " <<endl;
    cout << "7. Display vaccinated pets" <<endl;
    cout << "8. Display not vaccinated pets" <<endl;
    cout << "9. Display  which pets to you want to adopt" <<endl;
    cout << "10. Exit" <<endl;
    cout << "===============================" << std::endl;
    cout << "Enter Your Choice Number: ";
}


void Adoptioncenter::addPet(Pet* pet){
    if(petcount < maxPets){
        pets[petcount++] = pet;
    }
    else{
        cout<< "cannot add more pets. Adoption center is full"<<endl;
    }

}
void  Adoptioncenter::DisplayavailablePets(){
    cout<< "Available Pets for adoption at "<< shelterAddress<<endl;
    for(int i=0;i<petcount;++i){
        pets[i]->Display();
    }

}


void Adoptioncenter::adoptePet(string& petSpecies,int petIndex, Pet*&adoptePet){
adoptePet= NULL;
if(petIndex>=0 && petIndex< petcount && pets[petIndex]->getSpecies() == petSpecies){
    adoptePet = pets[petIndex];
 // Move the remaining pets to fill the gap
for(int j=petIndex; j< petcount-1;++j){
    pets[j] = pets[j+1];
}
--petcount;
}
}
void Adoptioncenter::DisplayPetsBySpecies(string& species) {
cout << "Available " << species << " for adoption at " << shelterAddress << endl;
    bool foundPets = false;

    for (int i = 0; i < petcount; ++i) {
        if (pets[i]->getSpecies() == species && !pets[i]->getAdopted()) {
            pets[i]->Display();
            foundPets=true;
        }
    }
       if (!foundPets) {
        cout << "No available " << species << " for adoption." << endl;
    }
}
void Adoptioncenter::addDog() {

        if (petcount < maxPets) {
        string name;
        int age;
        string gender;
        bool vaccinated;

        cout << "Enter dog's name: ";
        cin >> name;

        cout << "Enter dog's age: ";
        cin >> age;

        cout << "Enter dog's gender: ";
        cin >> gender;

        cout << "Is the dog vaccinated? (1 for Yes, 0 for No): ";
        cin >> vaccinated;

        Pet* newDog = new Dogs(name, age, "Dog", gender, vaccinated, false);
        addPet(newDog);
        cout << "Dog added successfully!" << endl;
    } else {
        cout << "Cannot add more pets. Adoption center is full." << endl;
    }
}

void Adoptioncenter::addCat() {
        if (petcount < maxPets) {
        string name;
        int age;
        string gender;
        bool vaccinated;

        cout << "Enter cat's name: ";
        cin >> name;

        cout << "Enter cat's age: ";
        cin >> age;

        cout << "Enter cat's gender: ";
        cin >> gender;

        cout << "Is the cat vaccinated? (1 for Yes, 0 for No): ";
        cin >> vaccinated;

        Pet* newCat = new Cats(name, age, "Cat", gender, vaccinated, false);
        addPet(newCat);
        cout << "Cat added successfully!" << endl;
    } else {
        cout << "Cannot add more pets. Adoption center is full." << endl;
    }
}

void Adoptioncenter::addBird() {
    if (petcount < maxPets) {
            if (petcount < maxPets) {
        string name;
        int age;
        string gender;
        bool vaccinated;

        cout << "Enter bird's name: ";
        cin >> name;

        cout << "Enter bird's age: ";
        cin >> age;

        cout << "Enter bird's gender: ";
        cin >> gender;

        cout << "Is the bird vaccinated? (1 for Yes, 0 for No): ";
        cin >> vaccinated;

        Pet* newBird = new Birds(name, age, "Bird", gender, vaccinated, false);
        addPet(newBird);
        cout << "Bird added successfully!" << endl;
    } else {
        cout << "Cannot add more pets. Adoption center is full." << endl;
    }
}}
void Adoptioncenter::DisplayAdoptedPets(){
    cout << "Adopted Pets at " << shelterAddress <<endl;
    bool foundAdopted = false;

    for (int i = 0; i < petcount; ++i) {
        if (pets[i]->getAdopted()) {
            pets[i]->Display();
            foundAdopted = true;
        }
        else{
            cout<< "no adopted found"<<endl;}

    }
}
void Adoptioncenter::DisplayNotAdoptedPets(){
    cout << "Not Adopted Pets at " << shelterAddress <<endl;
     bool foundNotAdopted = false;
    for (int i = 0; i < petcount; ++i) {
        if (!pets[i]->getAdopted()) {
            pets[i]->Display();
            foundNotAdopted = true;
        }

    else{
        cout<< "not adopted pets are available"<<endl;
    }
    }
}
void Adoptioncenter::DisplayVaccinatedPets() {
    std::cout << "Vaccinated Pets at " << shelterAddress << endl;
     bool foundVaccinated = false;
    for (int i = 0; i < petcount; ++i) {
        if (pets[i]->getVaccinated()) {
            pets[i]->Display();
            foundVaccinated=true;
        }
    }
}
void Adoptioncenter::DisplayNotVaccinatedPets() {
    std::cout << "Not Vaccinated Pets at " << shelterAddress << endl;
    bool foundNotVaccinated = false;
    for (int i = 0; i < petcount; ++i) {
        if (!pets[i]->getVaccinated()) {
            pets[i]->Display();
            foundNotVaccinated = true;
        }
    }
}
void Adoptioncenter::Toadoptpet(){
string spec;
int petIndex;
cout << "Enter the species of the pet you want to adopt (Dog/Cat/Bird): ";
cin >> spec;
DisplayPetsBySpecies(spec);
bool speciesFound = false;
    for (int i = 0; i < petcount; ++i) {
        if (pets[i]->getSpecies() == spec && !pets[i]->getAdopted()) {
            speciesFound = true;
            break;
        }
    }
 if (speciesFound){
cout << "Enter the index of the pet you want to adopt: ";
cin >> petIndex;
Pet* adoptedPet = NULL;
adoptePet(spec, petIndex, adoptedPet);
if (adoptedPet != NULL) {
cout << "Congratulations! You have adopted a pet:"<<adoptedPet->getName() << endl;
adoptedPet->Display();
adoptedPet->setAdopted(true);
}
else {
cout << "Unable to adopt the specified pet." << endl;
}
}}



Adoptioncenter::~Adoptioncenter(){ for(int i=0; i<petcount;++i){ delete pets[i];}}

