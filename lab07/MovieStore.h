//
// Created by kardos on 02.11.2022.
//

#ifndef CPP_2022_MOVIESTORE_H
#define CPP_2022_MOVIESTORE_H
#include <vector>
#include <iostream>
#include "Movie.h"
#include <vector>
using namespace std;

class MovieStore {
    vector<Movie> movies;
public:
    bool findByTitle(const string &title) const;

    void add(const Movie &movie);

    void printAll(ostream &os = cout, const string &prefix = "") const;

    void printMoviesOfGenre(const string &genre) const;

    void printMoviesGroupedByGenre();

    void printMoviesSortedByYear();
    // returns the list of unique authors sorted alphabetically
    vector<string> getDirectors() const;

    void printMoviesSortByDirectorAndTitle();

    const Movie& longestMovie() const;

    const Movie& shortestMovie() const;

    int numGenres() const;

};

#endif //CPP_2022_MOVIESTORE_H
