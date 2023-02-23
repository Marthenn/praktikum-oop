#include "User.h"
#include <iostream>
#include <cstring>
using namespace std;

int User::n_user = 0;

User::User(char* name){
    this -> name = new char[strlen(name) + 1];
    strcpy(this -> name, name);
    this -> num_of_favourite_music = 0;
    this -> music_list = new char*[0];
    n_user++;
}

User::User(const User& u){
    this -> name = new char[strlen(u.name) + 1];
    strcpy(this -> name, u.name);
    this -> num_of_favourite_music = u.num_of_favourite_music;
    this -> music_list = new char*[u.num_of_favourite_music];
    for(int i = 0; i < u.num_of_favourite_music; i++){
        this -> music_list[i] = new char[strlen(u.music_list[i]) + 1];
        strcpy(this -> music_list[i], u.music_list[i]);
    }
    n_user++;
}

User::~User(){
    cout << "User " << this -> name << " deleted" << endl;
    delete[] this -> name;
    for(int i = 0; i < this -> num_of_favourite_music; i++){
        delete[] this -> music_list[i];
    }
    delete[] this -> music_list;
    // n_user--;
}

void User::addFavouriteMusic(char* music){
    char** temp = new char*[this -> num_of_favourite_music + 1];
    for(int i = 0; i < this -> num_of_favourite_music; i++){
        temp[i] = new char[strlen(this -> music_list[i]) + 1];
        strcpy(temp[i], this -> music_list[i]);
    }
    temp[this -> num_of_favourite_music] = new char[strlen(music) + 1];
    strcpy(temp[this -> num_of_favourite_music], music);
    for(int i = 0; i < this -> num_of_favourite_music; i++){
        delete[] this -> music_list[i];
    }
    delete[] this -> music_list;
    this -> music_list = temp;
    this -> num_of_favourite_music++;
}

void User::deleteFavouriteMusic(char* music){
    int index = -1;
    for(int i = 0; i < this -> num_of_favourite_music; i++){
        if(strcmp(this -> music_list[i], music) == 0){
            index = i;
            break;
        }
    }
    if(index != -1){
        char** temp = new char*[this -> num_of_favourite_music - 1];
        for(int i = 0; i < index; i++){
            temp[i] = new char[strlen(this -> music_list[i]) + 1];
            strcpy(temp[i], this -> music_list[i]);
        }
        for(int i = index + 1; i < this -> num_of_favourite_music; i++){
            temp[i - 1] = new char[strlen(this -> music_list[i]) + 1];
            strcpy(temp[i - 1], this -> music_list[i]);
        }
        for(int i = 0; i < this -> num_of_favourite_music; i++){
            delete[] this -> music_list[i];
        }
        delete[] this -> music_list;
        this -> music_list = temp;
        this -> num_of_favourite_music--;
    }
}

void User::setName(char* name){
    delete[] this -> name;
    this -> name = new char[strlen(name) + 1];
    strcpy(this -> name, name);
}

char* User::getName() const{
    return this -> name;
}

int User::getNumOfFavouriteMusic() const{
    return this -> num_of_favourite_music;
}

void User::viewMusicList() const{
    if(this -> num_of_favourite_music == 0){
        cout << "No music in your favourite list" << endl;
    }else{
        for(int i = 0; i < this -> num_of_favourite_music; i++){
            cout << i + 1 << ". " << this -> music_list[i] << endl;
        }
    }
}

int User::getNumOfUser(){
    return n_user;
}