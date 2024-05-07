#include "Pet.h"

Pet::Pet(): Name(" "),Age(0),Species(" "),Gender(" "),Vaccinated(false),Adopted(false){}
Pet::Pet(string N): Name(N),Age(0),Species(" "),Gender(" "),Vaccinated(false),Adopted(false){}
Pet::Pet(string N,int A): Name(N),Age(A),Species(" "),Gender(" "),Vaccinated(false),Adopted(false){}
Pet::Pet(string N,int A,string S): Name(N),Age(A),Species(S),Gender(" "),Vaccinated(false),Adopted(false){}
Pet::Pet(string N,int A,string S,string G): Name(N),Age(A),Species(S),Gender(G),Vaccinated(false),Adopted(false){}
Pet::Pet(string N,int A,string S,string G,bool V): Name(N),Age(A),Species(S),Gender(G),Vaccinated(V),Adopted(false){}
Pet::Pet(string N,int A,string S,string G,bool V,bool D): Name(N),Age(A),Species(S),Gender(G),Vaccinated(V),Adopted(D){}

void Pet::setName(string N){Name = N;}
void Pet::setAge(int A){Age =A;}
void Pet::setSpecies(string S){Species = S;}
void Pet::setGender(string G){Gender = G;}
void Pet::setAdopted(bool D){Adopted = D;}
void Pet::setVaccinated(bool V){Vaccinated = V;}

string Pet::getName(){return Name;}
int Pet::getAge(){return Age;}
string Pet::getSpecies(){return Species;}
string Pet::getGender(){return Gender;}
bool Pet::getAdopted(){return Adopted;}
bool Pet::getVaccinated(){return Vaccinated;}
void Pet::Display()
{
    cout<<"Name: "<<Name<<"\nAge: "<<Age<<"\nSpecies: "<<Species<<"\nGender: "<<Gender<<endl;
    cout<<"Vaccinated: "<< (Vaccinated ? "Vaccinated" : "Not Vaccinated") <<endl;
    cout<<"Adopted: "<< (Adopted ? "Adopted" : "Not Adopted")<<endl;
    cout<<"--------------------------------"<<endl;
}
Pet::~Pet(){}
