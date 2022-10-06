#include <iostream>
#include "Movies.h"
#include "Movie.h"


Movies::Movies(){}



Movies::~Movies(){}


bool Movies::add_movie(string name, string rating, int watched){
    
    for (const Movie &movie: movies){
        if (name == movie.get_name()){
            return false;
        }
    }
    
    Movie new1 = Movie(name, rating, watched);
    
    movies.push_back(new1);
    return true;

    
}

bool Movies::increment_watched(string name){
    
    for (Movie &movie: movies){
        if (name == movie.get_name()){
            movie.increment_watched();
            return true;
        }
    }
    
    return false;

}

void Movies::display() const{
    
    
if (movies.size() ==0){
    cout<< "sorry"<<endl;
}
else {
    
 for (auto movie: movies){
        movie.display();
        cout<<endl;
    }
    
}

}

