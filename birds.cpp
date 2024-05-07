#include "Birds.h"

Birds::Birds(){}
Birds::Birds(string N): Pet(N , 0 , "  " , " ",false,false){}
Birds::Birds(string N,int A): Pet(N , A , "  ", " ",false,false){}
Birds::Birds(string N,int A,string S): Pet(N , A , S , " ",false,false){}
Birds::Birds(string N,int A,string S,string G): Pet(N , A ,S, G,false,false){}
Birds::Birds(string N,int A,string S,string G,bool V): Pet(N , A , S, G,V,false){}
Birds::Birds(string N,int A,string S,string G,bool V,bool D): Pet(N , A , S, G,V,D){}

Birds::~Birds()
{
    //dtor
}
