#include <iostream>
#include<string>

using namespace std;

#include<Pet.h>
#include<Dogs.h>
#include<Cats.h>
#include<Birds.h>
#include <Adoptioncenter.h>




int main(){
    Adoptioncenter adoptioncenter;
    Pet* pet1 = new Pet("Fluffy", 2, "Cat", "Male", true, false);
    Pet* pet2 = new Pet("Buddy", 3, "Dog", "Male", false, true);
    Pet* pet3 = new Pet("Tweety", 1, "Bird", "Female", true, false);


    adoptioncenter.addPet(pet1);
    adoptioncenter.addPet(pet2);
    adoptioncenter.addPet(pet3);
    int choice;
    do {
        adoptioncenter.Displaymenu();
        cin >> choice;

        switch (choice) {
            case 1:
                adoptioncenter.DisplayavailablePets();
                break;
            case 2:
                adoptioncenter.addDog();
                break;
            case 3:
               adoptioncenter.addCat();
                break;
            case 4:
                adoptioncenter.addBird();
                break;
            case 5:
                adoptioncenter.DisplayAdoptedPets();
                break;
            case 6:
                adoptioncenter.DisplayNotAdoptedPets();
                break;
            case 7:
                adoptioncenter.DisplayVaccinatedPets();
                break;
            case 8:
                adoptioncenter.DisplayNotVaccinatedPets();
                break;
            case 9:
                adoptioncenter.Toadoptpet();
                   break;
         case 10:
                cout <<  "Thank you for visiting the adoption center!\n"<<endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." <<endl;
        }}while(choice !=10);

    return 0;
    }











