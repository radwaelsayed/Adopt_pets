#include "dogs.h"

Dogs::Dogs(){}
Dogs::Dogs(string N): Pet(N , 0 , "  " , " ",false,false){}
Dogs::Dogs(string N,int A): Pet(N , A , "  ", " ",false,false){}
Dogs::Dogs(string N,int A,string S): Pet(N , A , S , " ",false,false){}
Dogs::Dogs(string N,int A,string S,string G): Pet(N , A ,S, G,false,false){}
Dogs::Dogs(string N,int A,string S,string G,bool V): Pet(N , A , S, G,V,false){}
Dogs::Dogs(string N,int A,string S,string G,bool V,bool D): Pet(N , A , S, G,V,D){}


Dogs::~Dogs()
{
    //dtor
}
