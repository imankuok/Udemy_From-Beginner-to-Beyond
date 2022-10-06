#include <iostream>
#include "Movies.h"
using namespace std;

void increment_watched(Movies &Movies, string name);
void add_movie(Movies &Movies, string name, string rating, int watched);


void increment_watched(Movies &Movies, string name){
    if (Movies.increment_watched(name)){
        cout << name <<" watch incremented" <<endl;
    }
    else {
        cout<<name <<" not found" <<endl;
    }
}

void add_movie(Movies &Movies, string name, string rating, int watched){
    if (Movies.add_movie(name, rating, watched)){
        cout<<name<<" added"<<endl;
        
    }
    else {
        cout <<name <<" already exists" <<endl;
    }
}



int main()
{
    Movies my_movies;
    my_movies.display();
    add_movie(my_movies, "big", "PG-13", 2); //ok
    add_movie(my_movies, "star Wars", "PG", 5);//ok
    add_movie(my_movies, "Cinderella", "PG", 7);//ok
    
    my_movies.display();
    
    add_movie(my_movies, "Cinderella", "PG", 7);//already exist
    add_movie(my_movies, "Ice age", "PG", 12);//OK
    
    my_movies.display();
    
   increment_watched(my_movies, "big");//OK
    increment_watched(my_movies, "Ice age"); //ok
    
    my_movies.display();
    
    increment_watched(my_movies, "XXXX"); // XXX not found
    return 0;
}
