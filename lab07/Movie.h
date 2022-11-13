#ifndef CPP_2022_MOVIE_H
#define CPP_2022_MOVIE_H
#include <string>
#include <ostream>

using namespace std;

class Movie {
private:
    int id;
    string title;
    int year;
    string language;
    string genre;
    string director;
    int length;
    static int counter;
public:
    Movie(const string &title, int year, const string &language, const string &genre, const string &director,
          int length);

    int getId() const;

    const string &getTitle() const;

    int getYear() const;

    int getLength() const;

    const string &getLanguage() const;

    const string &getGenre() const;

    const string &getDirector() const;

    friend ostream &operator<<(ostream &os, const Movie &movie);

};

#endif //CPP_2022_MOVIE_H
