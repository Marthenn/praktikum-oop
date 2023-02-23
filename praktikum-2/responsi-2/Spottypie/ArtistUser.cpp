#include "ArtistUser.h"
#include <iostream>
#include <cstring>
using namespace std;

int ArtistUser::num_of_artist = 0;

ArtistUser::ArtistUser(char* name) : User(name){
    this -> num_of_music_uploaded = 0;
    this -> uploaded_music_list = new char*[0];
    num_of_artist++;
}

ArtistUser::ArtistUser(const ArtistUser& au) : User(au){
    this -> num_of_music_uploaded = au.num_of_music_uploaded;
    this -> uploaded_music_list = new char*[au.num_of_music_uploaded];
    for(int i = 0; i < au.num_of_music_uploaded; i++){
        this -> uploaded_music_list[i] = new char[strlen(au.uploaded_music_list[i]) + 1];
        strcpy(this -> uploaded_music_list[i], au.uploaded_music_list[i]);
    }
    num_of_artist++;
}

ArtistUser::~ArtistUser(){
    // for(int i = 0; i < this -> num_of_music_uploaded; i++){
    //     delete[] this -> uploaded_music_list[i];
    // }
    delete[] this -> uploaded_music_list;
    cout << "Artist user " << this -> name << " deleted" << endl;
    // num_of_artist--;
}

void ArtistUser::uploadMusic(char* music){
    char** temp = new char*[this -> num_of_music_uploaded + 1];
    for(int i = 0; i < this -> num_of_music_uploaded; i++){
        temp[i] = new char[strlen(this -> uploaded_music_list[i]) + 1];
        strcpy(temp[i], this -> uploaded_music_list[i]);
    }
    temp[this -> num_of_music_uploaded] = new char[strlen(music) + 1];
    strcpy(temp[this -> num_of_music_uploaded], music);
    for(int i = 0; i < this -> num_of_music_uploaded; i++){
        delete[] this -> uploaded_music_list[i];
    }
    delete[] this -> uploaded_music_list;
    this -> uploaded_music_list = temp;
    this -> num_of_music_uploaded++;
}

void ArtistUser::deleteUploadedMusic(char* music){
    int index = -1;
    for(int i = 0; i < this -> num_of_music_uploaded; i++){
        if(strcmp(this -> uploaded_music_list[i], music) == 0){
            index = i;
            break;
        }
    }
    if(index == -1){
        return;
    }
    char** temp = new char*[this -> num_of_music_uploaded - 1];
    for(int i = 0; i < index; i++){
        temp[i] = new char[strlen(this -> uploaded_music_list[i]) + 1];
        strcpy(temp[i], this -> uploaded_music_list[i]);
    }
    for(int i = index + 1; i < this -> num_of_music_uploaded; i++){
        temp[i - 1] = new char[strlen(this -> uploaded_music_list[i]) + 1];
        strcpy(temp[i - 1], this -> uploaded_music_list[i]);
    }
    for(int i = 0; i < this -> num_of_music_uploaded; i++){
        delete[] this -> uploaded_music_list[i];
    }
    delete[] this -> uploaded_music_list;
    this -> uploaded_music_list = temp;
    this -> num_of_music_uploaded--;
}

void ArtistUser::viewUploadedMusicList() const{
    if(this -> num_of_music_uploaded == 0){
        cout << "No music uploaded" << endl;
        return;
    }
    for(int i = 0; i < this -> num_of_music_uploaded; i++){
        cout << i + 1 << ". " << this -> uploaded_music_list[i] << endl;
    }
}

int ArtistUser::getNumOfMusicUploaded() const{
    return this -> num_of_music_uploaded;
}

int ArtistUser::getNumOfArtist(){
    return num_of_artist;
}