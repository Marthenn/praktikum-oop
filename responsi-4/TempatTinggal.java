public class TempatTinggal {
    protected int luas;
    protected double hargaBahanBangunan;

    TempatTinggal(int luas, double hargaBahanBangunan){
        this.luas = luas;
        this.hargaBahanBangunan = hargaBahanBangunan;
    }

    TempatTinggal(){
        this.luas = 0;
        this.hargaBahanBangunan = 0;
    }

    public int getLuas(){
        return this.luas;
    }

    public double getHargaBahanBangunan(){
        return this.hargaBahanBangunan;
    }

    public void setLuas(int luas){
        this.luas = luas;
    }

    public void setHargaBahanBangunan(double hargaBahanBangunan){
        this.hargaBahanBangunan = hargaBahanBangunan;
    }

    public double hitungBiayaBangun(){
        return luas * hargaBahanBangunan;
    }
}

class Rumah extends TempatTinggal {
    Rumah(int luas, double hargaBahanBangunan){
        super(luas, hargaBahanBangunan);
    }

    Rumah(int lebarTanah, int panjangTanah, double hargaBahanBangunan){
        super(lebarTanah * panjangTanah, hargaBahanBangunan);
    }

    public double hitungBiayaBangun(){
        return super.hitungBiayaBangun();
    }

    public double hitungBiayaBangun(double biayaOrmas){
        return luas * hargaBahanBangunan + biayaOrmas;
    }

    public void setLuas(int lebarTanah, int panjangTanah){
        super.setLuas(panjangTanah * lebarTanah);
    }

    public void setLuas(int luas){
        super.setLuas(luas);
    }
}

interface Kendaraan{
    public float hitungJarakTempuh();
}

class Karavan extends Rumah implements Kendaraan {
    private float bensin;
    private float pemakaianBensin;

    Karavan(){
        super(0,0);
        this.bensin = 0;
        this.pemakaianBensin = 0;
    }

    Karavan(int luas, double hargaBahanBangunan, float jumlahBensin, float pemakaianBensin){
        super(luas, hargaBahanBangunan);
        this.bensin = jumlahBensin;
        this.pemakaianBensin = pemakaianBensin;
    }

    public float getBensin(){
        return this.bensin;
    }

    public float getPemakaianBensin(){
        return this.pemakaianBensin;
    }

    public void setHargaBahanBangunan(double hargaBahanBangunan){
        super.setHargaBahanBangunan(hargaBahanBangunan);
    }

    public void setLuas(int luas){
        super.setLuas(luas);
    }

    public void setBensin(float jumlahBensin){
        this.bensin = jumlahBensin;
    }

    public void setPemakaianBensin(float pemakaianBensin){
        this.pemakaianBensin = pemakaianBensin;
    }

    public double hitungBiayaBangun(){
        return luas*hargaBahanBangunan*3;
    }

    public float hitungJarakTempuh(){
        return bensin * pemakaianBensin;
    }
}