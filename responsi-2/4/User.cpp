#include "User.h"
#include <iostream>
using namespace std;

int User::n_user = 0;

User :: User ( char * name ) {
    this->name = new char[strlen(name)] ;
    strcpy(this->name,name) ;
    num_of_favourite_music = 0 ;
    music_list = NULL ;
    n_user ++ ;
}

User :: User(const User& u) {
    name = new char[strlen(u.name)];
    strcpy(name, u.name);
    num_of_favourite_music = u.num_of_favourite_music;
    music_list = new char*[num_of_favourite_music];
    for (int i = 0; i < num_of_favourite_music; i++) {
        music_list[i] = new char[strlen(u.music_list[i]) + 1];
        strcpy(music_list[i], u.music_list[i]);
    }
    n_user++;
}

User :: ~User(){
    cout << "User " << name << " deleted" << endl;
    delete[] music_list;
}

void User :: addFavouriteMusic ( char * music ) {
    char ** temp = new char * [ num_of_favourite_music] ;
    for ( int i = 0 ; i < num_of_favourite_music ; i ++ ) {
        temp [ i ] = new char [ strlen ( music_list [ i ] ) ] ;
        strcpy ( temp [ i ] , music_list [ i ] ) ;
    }
    temp [ num_of_favourite_music ] = new char [ strlen ( music ) ] ;
    strcpy ( temp [ num_of_favourite_music ] , music ) ;
    delete[] music_list;
    music_list = temp;
    num_of_favourite_music ++ ;
}

void User :: deleteFavouriteMusic ( char * music ) {
    int idx = - 1 ;
    for ( int i = 0 ; i < num_of_favourite_music ; i ++ ) {
        if ( strcmp ( music_list [ i ] , music ) == 0 ) {
            idx = i;
            break;
        }
    }
    if ( idx == - 1 ) {
        return;
    }
    char ** temp = new char * [ num_of_favourite_music - 1 ] ;
    for ( int i = 0 ; i < idx ; i ++ ) {
        temp [ i ] = new char [ strlen ( music_list [ i ] ) ] ;
        strcpy ( temp [ i ] , music_list [ i ] ) ;
    }
    for ( int i = idx ; i < num_of_favourite_music - 1 ; i ++ ) {
        temp [ i ] = new char [ strlen ( music_list [ i + 1 ] ) ] ;
        strcpy ( temp [ i ] , music_list [ i + 1 ] ) ;
    }
    delete[] music_list;
    music_list = temp;
    num_of_favourite_music -- ;
}

void User :: setName ( char * name ) {
    delete[] this -> name;
    this -> name = new char [ strlen ( name ) + 1 ] ;
    strcpy ( this -> name , name ) ;
}

char * User :: getName () const {
    return name;
}

int User :: getNumOfFavouriteMusic () const {
    return num_of_favourite_music;
}

void User :: viewMusicList () const {
    if ( num_of_favourite_music == 0 ) {
        cout << "" << endl;
    }
    for ( int i = 0 ; i < num_of_favourite_music ; i ++ ) {
        cout << i + 1 << ". " << music_list [ i ] << endl;
    }
}

int User :: getNumOfUser () {
    return n_user;
}

int User :: n_user = 0 ;
