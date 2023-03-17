import java.lang.Comparable;

class MataKuliah implements Comparable<MataKuliah> {
  private String nama;
  private int kodeJurusan;
  private int tahunPengambilan;
  private float rating;

  public MataKuliah(String nama, int kodeJurusan, int tahunPengambilan, float rating) {
    this.nama = nama;
    this.kodeJurusan = kodeJurusan;
    this.tahunPengambilan = tahunPengambilan;
    this.rating = rating;
  }

  public String getNama() {
    return this.nama;
  }

  public int getKodeJurusan() {
    return this.kodeJurusan;
  }

  public int getTahunPengambilan() {
    return this.tahunPengambilan;
  }

  public float getRating() {
    return this.rating;
  }

  public int compareTo(MataKuliah m) {
    // compareTo mengembalikan:
    // 0 bila this sama dengan m
    // 1 bila this lebih dari m
    // -1 bila this kurang dari m
    /*
     * MataKuliah A disebut kurang dari MataKuliah B bila:

      kode jurusan MataKuliah A lebih kecil dari MataKuliah B
      kode jurusan MataKuliah A sama dengan MataKuliah B, tapi tahun pengambilannya lebih kecil
      kode jurusan dan tahun pengambilan MataKuliah A sama dengan MataKuliah B, tapi rating nya lebih kecil
      MataKuliah A sama dengan MataKuliah B bila kode jurusan, tahun pengambilan, dan rating kedua MataKuliah bernilai sama

      Selain itu, MataKuliah A disebut lebih dari MataKuliah B
     */
    int kodeJurusanA = this.getKodeJurusan();
    int kodeJurusanB = m.getKodeJurusan();
    int tahunPengambilanA = this.getTahunPengambilan();
    int tahunPengambilanB = m.getTahunPengambilan();
    float ratingA = this.getRating();
    float ratingB = m.getRating();

    if(kodeJurusanA < kodeJurusanB) return -1;
    if(kodeJurusanA == kodeJurusanB){
      if(tahunPengambilanA < tahunPengambilanB) return -1;
      if(tahunPengambilanA == tahunPengambilanB){
        if(ratingA < ratingB) return -1;
        if(ratingA == ratingB) return 0;
      }
    }
    return 1;
  }

}