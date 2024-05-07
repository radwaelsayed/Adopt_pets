#include "cats.h"

Cats::Cats(){}
Cats::Cats(string N): Pet(N , 0 , "  " , " ",false,false){}
Cats::Cats(string N,int A): Pet(N , A , "  ", " ",false,false){}
Cats::Cats(string N,int A,string S): Pet(N , A , S , " ",false,false){}
Cats::Cats(string N,int A,string S,string G): Pet(N , A ,S, G,false,false){}
Cats::Cats(string N,int A,string S,string G,bool V): Pet(N , A , S, G,V,false){}
Cats::Cats(string N,int A,string S,string G,bool V,bool D): Pet(N , A , S, G,V,D){}



Cats::~Cats(){}
