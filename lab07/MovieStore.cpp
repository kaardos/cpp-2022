//
// Created by kardos on 02.11.2022.
//
#include "Movie.h"
#include "MovieStore.h"

bool MovieStore::findByTitle(const string &title) const {
    for(auto& m : movies){
        if(m.getTitle() == title){
            return true;
        }
    }
    return false;
}

void MovieStore::add(const Movie &movie) {
    for(auto& m: movies){
        if( findByTitle(movie.getTitle()) == false ){
            this->movies.push_back(movie);
        }
    }
}
void MovieStore::printAll(ostream &os, const string &prefix) const {
    for(auto& m: movies){
        os<<prefix<<" - "<<m.getTitle()<<"\n";
    }
}
vector<string> MovieStore::getDirectors() const {
    return vector<string>();
}

void MovieStore::printMoviesOfGenre(const string &genre) const {
    for(auto&m : movies){
        if(m.getGenre() == genre){
            cout<<m.getTitle()<<"\n";
        }
    }
}

/*const Movie &MovieStore::longestMovie() const {
    return max_element();
}*/