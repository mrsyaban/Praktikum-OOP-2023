#include <iostream>
#include <cstring>
#include "User.h"

using namespace std;

int User::n_user = 0;

User::User(char* nm){
    this->name = new char[strlen(nm)];
    strcpy(this->name, nm);
    this->num_of_favourite_music = 0;
    this->music_list = new char*[1000]; // array of string (char*) dgn ukuran 1000
    n_user++;
}

User::User(const User& u){
    this->name = new char[strlen(u.getName())];
    strcpy(this->name, u.getName());
    this->num_of_favourite_music = u.getNumOfFavouriteMusic();
    this->music_list = new char*[1000];
    for (int i = 0; i<this->num_of_favourite_music; i++){
        this->music_list[i] = new char[strlen(u.music_list[i])];
        strcpy(this->music_list[i], u.music_list[i]);
    }
    n_user++;
}


User::~User(){
    cout << "User " << this->name << " deleted" << endl;
    delete [] this->name;
    for(int i = 0; i < this->num_of_favourite_music;i++){
        delete [] this->music_list[i];
    }
    delete [] this->music_list;
}

void User::addFavouriteMusic(char* judul_musik){
    this->music_list[this->num_of_favourite_music] = new char[strlen(judul_musik)];
    strcpy(this->music_list[this->num_of_favourite_music], judul_musik);
    this->num_of_favourite_music++;
}

void User::deleteFavouriteMusic(char* judul_musik){
    if(this->num_of_favourite_music > 0){
        if (this->num_of_favourite_music == 1){
            if(strcmp(this->music_list[0], judul_musik)==0){
                this->num_of_favourite_music--;
            }
        } else{
            for(int i = 0; i<this->num_of_favourite_music;i++){
                if(strcmp(this->music_list[i], judul_musik) == 0){
                    this->num_of_favourite_music--;
                    int p = i;
                    while (p<this->num_of_favourite_music){
                        strcpy(this->music_list[p], this->music_list[p+1]);
                        p++;
                    }
                    break;
                }
            }
        }
    }
}

void User::setName(char* nm){
    strcpy(this->name, nm);
}

char* User::getName() const{
    return this->name;
}

int User::getNumOfFavouriteMusic() const{
    return this->num_of_favourite_music;
}

void User::viewMusicList() const{
    if(this->num_of_favourite_music>0){
        for(int i = 0; i < this->num_of_favourite_music; i++){
            cout << i+1 << ". " << this->music_list[i] << endl;
        }
    } else{
        cout << "No music in your favourite list" << endl;
    }
}

int User::getNumOfUser(){
    return User::n_user;
}
