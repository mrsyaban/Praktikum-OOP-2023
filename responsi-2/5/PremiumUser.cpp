#include "User.h"
#include "PremiumUser.h"
#include <iostream>
#include <cstring>

using namespace std;

PremiumUser::PremiumUser(char* nm): User(nm){
    this->num_of_music_downloaded = 0;
    this->active = true;
}
        
PremiumUser::PremiumUser(const PremiumUser& u): User(u.name){
    this->num_of_favourite_music = u.getNumOfFavouriteMusic();
    this->music_list = new char*[1000];
    for (int i = 0; i<this->num_of_favourite_music; i++){
        this->music_list[i] = new char[strlen(u.music_list[i])];
        strcpy(this->music_list[i], u.music_list[i]);
    }
    this->num_of_music_downloaded = u.num_of_music_downloaded;
    this->active = u.active;
} 

PremiumUser::~PremiumUser(){
}

void PremiumUser::downloadMusic(char* judul_musik){
    if(this->active){
        this->num_of_music_downloaded++;
        cout << "Music Downloaded: " << judul_musik << endl;
    } else{
        cout << "Activate premium account to download music" << endl;
    }
}

void PremiumUser::inactivatePremium(){
    this->active = false;
}

void PremiumUser::activatePremium(){
    this->active = true;
}
        
int PremiumUser::getNumOfMusicDownloaded() const{
    return this->num_of_music_downloaded;
}

// mengembalikan nilai active
bool PremiumUser::getPremiumStatus() const{
    return this->active;
}