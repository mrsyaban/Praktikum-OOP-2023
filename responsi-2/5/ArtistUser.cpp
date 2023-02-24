#include <iostream>
#include <cstring>
#include "User.h"
#include "ArtistUser.h"

using namespace std;


int ArtistUser::num_of_artist=0;

ArtistUser::ArtistUser(char* nm) : User(nm){
    this->num_of_music_uploaded = 0;
    this->uploaded_music_list = new char*[1000];
    num_of_artist++;
}

ArtistUser::ArtistUser(const ArtistUser& u): User(u.getName()){
    this->num_of_favourite_music = u.getNumOfFavouriteMusic();
    this->music_list = new char*[1000];
    for (int i = 0; i<this->num_of_favourite_music; i++){
        this->music_list[i] = new char[strlen(u.music_list[i])];
        strcpy(this->music_list[i], u.music_list[i]);
    }
    this->num_of_music_uploaded = u.num_of_music_uploaded;
    this->uploaded_music_list = new char*[1000];
    for (int i = 0; i<this->num_of_music_uploaded; i++){
        this->uploaded_music_list[i] = new char[strlen(u.uploaded_music_list[i])];
        strcpy(this->uploaded_music_list[i], u.uploaded_music_list[i]);
    }
    num_of_artist++;
}

ArtistUser::~ArtistUser(){
    cout << "Artist user " << this->name << " deleted"<< endl;
    for(int i = 0; i < this->num_of_music_uploaded;i++){
        delete [] this->uploaded_music_list[i];
    }
    delete [] this->uploaded_music_list;
}

void ArtistUser::uploadMusic(char* judul_musik){
    this->uploaded_music_list[this->num_of_music_uploaded] = new char[strlen(judul_musik)];
    strcpy(this->uploaded_music_list[this->num_of_music_uploaded], judul_musik);
    this->num_of_music_uploaded++;
}

void ArtistUser::deleteUploadedMusic(char* judul_musik){
    if(this->num_of_music_uploaded > 0){
        if (this->num_of_music_uploaded == 1){
            if(strcmp(this->uploaded_music_list[0], judul_musik)==0){
                this->num_of_music_uploaded--;
            }
        } else{
            for(int i = 0; i<this->num_of_music_uploaded;i++){
                if(strcmp(this->uploaded_music_list[i], judul_musik) == 0){
                    this->num_of_music_uploaded--;
                    int p = i;
                    while (p<this->num_of_music_uploaded){
                        strcpy(this->uploaded_music_list[p], this->uploaded_music_list[p+1]);
                        p++;
                    }
                    break;
                }
            }
        }
    }
}

void ArtistUser::viewUploadedMusicList() const{
    if(this->num_of_music_uploaded>0){
        for(int i = 0; i < this->num_of_music_uploaded; i++){
            cout << i+1 << ". " << this->uploaded_music_list[i] << endl;
        }
    } else{
        cout << "No music uploaded" << endl;
    }
}

int ArtistUser::getNumOfMusicUploaded() const{
    return this->num_of_music_uploaded;
}

int ArtistUser::getNumOfArtist(){
    return ArtistUser::num_of_artist;
}