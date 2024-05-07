#ifndef BIRDS_H
#define BIRDS_H
#include<Pet.h>
#include<iostream>
#include<string>

using namespace std;

class Birds:public Pet{

    public:
        Birds();
        Birds(string);
        Birds(string,int);
        Birds(string,int,string);
        Birds(string,int,string,string);
        Birds(string,int,string,string,bool);
        Birds(string,int,string,string,bool,bool);
        ~Birds();

    protected:

    private:
};



#endif // BIRDS_H
