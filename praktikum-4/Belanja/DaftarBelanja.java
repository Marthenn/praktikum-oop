public class DaftarBelanja {
    private Barang[] listBelanja;
    private int indeks;
    private int max;
    public DaftarBelanja(int max){
        this.listBelanja = new Barang[max];
        this.max = max;
        this.indeks = 0;
    }
    void belanja(int lorong, String keterangan){
        if(this.indeks == this.max){return;}
        this.listBelanja[this.indeks] = new Barang(keterangan+" (lorong "+lorong+")", 1);
        this.indeks = this.indeks + 1;
    }
    void belanja(int lorong, int qty, String keterangan){
        if(this.indeks == this.max){return;}
        this.listBelanja[this.indeks] = new Barang(keterangan+" (lorong "+lorong+")", qty);
        this.indeks = this.indeks + 1;
    }
    void belanja(String barang){
        if(this.indeks == this.max){return;}
        this.listBelanja[this.indeks] = new Barang(barang, 1);
        this.indeks = this.indeks + 1;
    }
    void belanja(String barang, int qty){
        if(this.indeks == this.max){return;}
        this.listBelanja[this.indeks] = new Barang(barang, qty);
        this.indeks = this.indeks + 1;
    }
    void print(){
        for(int ii = 0 ; ii < this.indeks ; ii++){
            System.out.printf("%d. %s\n",ii+1,this.listBelanja[ii].toString());
        }
    }
}