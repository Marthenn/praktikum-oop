#include "sekretaris.h"
#include <iostream>

const int MEMO_MAX = 100005;

Sekretaris::Sekretaris(){
    energi = ENERGI_MAX;
    tinta = TINTA_DEFAULT;
    kertas = KERTAS_DEFAULT;
    memoLength = 0;
    memo = new Memo[MEMO_MAX];
}

Sekretaris::Sekretaris(int kertas, int tinta){
    energi = ENERGI_MAX;
    this->tinta = tinta;
    this->kertas = kertas;
    memo = new Memo[MEMO_MAX];
    memoLength = 0;
}

Sekretaris::~Sekretaris(){
    delete[] memo;
}

void Sekretaris::pakaiKertas(){
    if(kertas < 1){
        throw KertasHabisException();
    }
    kertas--;
}

void Sekretaris::pakaiTinta(int num){
    if(tinta < num){
        throw TintaKurangException();
    }
    tinta -= num;
}

void Sekretaris::pakaiEnergi(){
    if(energi < 1){
        throw EnergiHabisException();
    }
    energi--;
}

void Sekretaris::batalPakaiKertas(){
    kertas++;
}

void Sekretaris::batalPakaiTinta(int num){
    tinta += num;
}

void Sekretaris::batalPakaiEnergi(){
    energi++;
}

void Sekretaris::isiTinta(int num){
    tinta += num;
}

void Sekretaris::isiKertas(int num){
    kertas += num;
}

void Sekretaris::istirahat(){
    energi = ENERGI_MAX;
}

void Sekretaris::printStatus(){
    cout << "Status" << endl;
	cout << "  Energi : " << energi << endl;
	cout << "  Tinta : " << tinta << endl;
	cout << "  Kertas : " << kertas << endl;
	cout << "  Memo : " << memoLength << endl;
	for(int i = 0; i < memoLength; i++){
		cout << "    Memo [" << i+1 << "]" << endl;
		cout << "      Pesan : " << memo[i].getPesan() << endl;
		cout << "      Untuk : " << memo[i].getUntuk() << endl;
	}
}

void Sekretaris::buatMemo(string pesan, string untuk){
    try{
        pakaiKertas();
        pakaiTinta(pesan.length());
        pakaiEnergi();
        Memo m(pesan, untuk);
        memo[memoLength] = m;
        memoLength++;
        cout<<"Memo ["<<memoLength<<"] untuk "<<untuk<<" berhasil dibuat"<<endl;
    } catch (KertasHabisException e){
        cout << e.what() << ", segera isi kertas" << endl;
    } catch (TintaKurangException e){
        batalPakaiKertas();
        cout << e.what() << ", segera isi tinta" << endl;
    } catch (EnergiHabisException e){
        batalPakaiKertas();
        batalPakaiTinta(pesan.length());
        cout << e.what() << ", segera istirahat" << endl;
    } catch (PesanKepanjanganException e){
        batalPakaiKertas();
        batalPakaiTinta(pesan.length());
        batalPakaiEnergi();
        cout << e.what() << ", perpendek pesannya" << endl;
    }
}