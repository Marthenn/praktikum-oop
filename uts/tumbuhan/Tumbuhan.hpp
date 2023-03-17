#include <iostream>
using namespace std;

class Tumbuhan {
private:
    string pemilik;
public:
    Tumbuhan(string pemilik) {
        this->pemilik = pemilik;
    };

    // Print dan Print 2 memiliki format yang sama yaitu
    // (X) <kalimat unik setiap kelas>
    // (X) diisi dengan (1) untuk print, (2) untuk print 2
    // berlaku untuk kelas turunan.
    virtual void print() {
        cout<< "(1) Tumbuhan ini milik \'"<< pemilik <<"\'"<<endl;
    }

    // Print dan Print 2 memiliki format yang sama yaitu
    // (X) <kalimat unik setiap kelas>
    // (X) diisi dengan (1) untuk print, (2) untuk print 2
    // berlaku untuk kelas turunan.
    void print2() {
        cout<< "(2) Tumbuhan ini milik \'"<< pemilik <<"\'"<<endl;
    }

    ~Tumbuhan(){
        cout<< "Tumbuhan milik \'" << pemilik <<"\' mati"<<endl;
    };
};


class TumbuhanMakan: public Tumbuhan {
protected:
    string idPot;
public:
    TumbuhanMakan(string pemilik, string idPot) : Tumbuhan(pemilik) {
        this->idPot = idPot;
    };

    virtual void print() {
        cout<< "(1) Tumbuhan Makan ditanam di pot \'"<< idPot <<"\'"<<endl;
    }

    void print2() {
        cout<< "(2) Tumbuhan Makan ditanam di pot \'"<< idPot <<"\'"<<endl;
    }

    virtual ~TumbuhanMakan(){
        cout<< "TumbuhanMakan pot \'" << idPot << "\' mati\n";
    };
};

class TumbuhanObat : public Tumbuhan {
protected:
    string idPot;
public:
    TumbuhanObat(string pemilik, string idPot) : Tumbuhan(pemilik) {
        this->idPot = idPot;
    };

    void print() {
        cout<<"(1) Tumbuhan Obat ditanam di pot \'"<<idPot<<"\'\n";
    }

    void print2() {
        cout<<"(2) Tumbuhan Obat ditanam di pot \'"<<idPot<<"\'\n";
    }

    virtual ~TumbuhanObat(){
        cout<<"TumbuhanObat pot \'"<<idPot<<"\' mati\n";
    };
};

class Jagung : public TumbuhanMakan {
public:
    Jagung(string pemilik, string idPot) : TumbuhanMakan(pemilik, idPot) {
    };

    void print() {
        cout<<"(1) Jagung pot \'"<<idPot<<"\' tumbuh segar\n";
    }

    void print2() {
        cout<<"(2) Jagung pot \'"<<idPot<<"\' tumbuh segar\n";
    }

    ~Jagung(){
        cout<<"Jagung pot \'"<<idPot<<"\' mati\n";
    };
};


class Padi : public TumbuhanMakan {
public:
    Padi(string pemilik, string idPot) : TumbuhanMakan(pemilik, idPot) {
    };

    void print() {
        cout<<"(1) Padi pot \'"<<idPot<<"\' tumbuh tinggi\n";
    }

    void print2() {
        cout<<"(2) Padi pot \'"<<idPot<<"\' tumbuh tinggi\n";
    }

    ~Padi(){
        cout<<"Padi pot \'"<<idPot<<"\' mati\n";
    };
};

class Jahe : public TumbuhanObat {
public:
    Jahe(string pemilik, string idPot) : TumbuhanObat(pemilik, idPot) {
    };

    void print() {
        cout<<"(1) Jahe pot \'"<<idPot<<"\' terlihat aman\n";
    }

    void print2() {
        cout<<"(2) Jahe pot \'"<<idPot<<"\' terlihat aman\n";
    }

    ~Jahe(){
        cout<<"Jahe pot \'"<<idPot<<"\' mati\n";
    };
};

class Kencur : public TumbuhanObat {
public:
    Kencur(string pemilik, string idPot) : TumbuhanObat(pemilik, idPot) {
    };

    void print() {
        cout<<"(1) Kencur pot \'"<<idPot<<"\' terlihat sehat\n";
    }

    void print2() {
        cout<<"(2) Kencur pot \'"<<idPot<<"\' terlihat sehat\n";
    }

    ~Kencur(){
        cout<<"Kencur pot \'"<<idPot<<"\' mati\n";
    };
};