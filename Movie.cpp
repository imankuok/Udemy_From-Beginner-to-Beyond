#include <iostream>
#include "Movie.h"

using namespace std;

Movie::Movie(string name, string rating, int watched)
:name(name), rating(rating), watched(watched){
    
}


Movie::~Movie(){
}

void Movie::display() const{
    cout <<name << ", " << rating <<"," <<watched << endl;
}