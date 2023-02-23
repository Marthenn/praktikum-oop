#include "PremiumUser.h"
#include "ArtistUser.h"
#include <iostream>
using namespace std;

int main(){
    char nama[100];
    cin.getline(nama, 100);
    PremiumUser pu(nama);
    cin.getline(nama, 100);
    ArtistUser au(nama);
    cin.getline(nama, 100);
    PremiumUser pu2(nama);
    cin.getline(nama, 100);
    ArtistUser au2(nama);

    char music[100];
    cin.getline(music, 100);
    pu.downloadMusic(music);
    cin.getline(music, 100);
    au.uploadMusic(music);
    cin.getline(music, 100);
    pu2.downloadMusic(music);
    cin.getline(music, 100);
    au2.uploadMusic(music);

    pu.viewMusicList();
    au.viewMusicList();
    au.viewUploadedMusicList();
    pu2.viewMusicList();
    au2.viewMusicList();
    au2.viewUploadedMusicList();

    PremiumUser pu3(pu2);
    ArtistUser au3(au2);
    pu3.viewMusicList();
    au3.viewMusicList();
    au3.viewUploadedMusicList();

    pu.addFavouriteMusic(music);
    pu2.addFavouriteMusic(music);
    pu3.addFavouriteMusic(music);
    au.addFavouriteMusic(music);
    au2.addFavouriteMusic(music);
    au3.addFavouriteMusic(music);

    cout<<au.getNumOfMusicUploaded()<<endl;
    cout<<au2.getNumOfMusicUploaded()<<endl;
    cout<<au3.getNumOfMusicUploaded()<<endl;

    cout<<"---------"<<endl;

    cout<<ArtistUser::getNumOfArtist()<<endl;
    cout<<User::getNumOfUser()<<endl;
    return 0;

    char* c1 = new char[100];
    strcpy(c1, "c1");
}