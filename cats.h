#ifndef CATS_H
#define CATS_H
#include<pet.h>
#include<iostream>
#include<string>


using namespace std;


class Cats : public Pet
{

    public:
        Cats();
        Cats(string);
        Cats(string,int);
        Cats(string,int,string);
        Cats(string,int,string,string);
        Cats(string,int,string,string,bool);
        Cats(string,int,string,string,bool,bool);
        ~Cats();
};

#endif // CATS_H
