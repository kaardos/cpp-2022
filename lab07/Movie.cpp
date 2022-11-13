#include "Movie.h"

int Movie::counter{0};

Movie::Movie(const string &title, int year, const string &language, const string &genre, const string &director,
             int length):title(title),year(year),language(language),genre(genre),director(director),length(length) {
    if(counter == 0){
        this->id = counter;
    }
    counter++;
    this->id = counter;
}

int Movie::getId() const {
    return id;
}

const string &Movie::getTitle() const {
    return title;
}

int Movie::getYear() const {
    return year;
}

int Movie::getLength() const {
    return length;
}

const string &Movie::getLanguage() const {
    return language;
}

const string &Movie::getGenre() const {
    return genre;
}

const string &Movie::getDirector() const {
    return director;
}
ostream &operator<<(ostream &os, const Movie &movie) {
    os<<"Id:"<<movie.getId()<<", Title:"<<movie.getTitle()<<", Year:"<<movie.getYear()<<", Length:"<<movie.getLength()<<", Language:"<<movie.getLanguage()<<", Genre:"<<movie.getGenre()<<", Director:"<<movie.getDirector();
    return os;
}


