#ifndef DOGS_H
#define DOGS_H
#include<Pet.h>
#include<iostream>
#include<string>

using namespace std;


class Dogs: public Pet
{
    public:
        Dogs();
        Dogs(string);
        Dogs(string,int);
        Dogs(string,int,string);
        Dogs(string,int,string,string);
        Dogs(string,int,string,string,bool);
        Dogs(string,int,string,string,bool,bool);
        ~Dogs();
};

#endif // DOGS_H
