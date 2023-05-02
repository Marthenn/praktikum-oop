import java.lang.reflect.*;

public class MahasiswaDecoder {
  private Mahasiswa mahasiswa;

  MahasiswaDecoder(Mahasiswa mahasiswa) {
    this.mahasiswa = mahasiswa;
  }

  public void addMatkul(String name) throws Exception {
    Method m = mahasiswa.getClass().getDeclaredMethod("addMatkul", String.class);
    m.setAccessible(true);
    m.invoke(mahasiswa, name);
  }

  public int getNIM() throws Exception {
    Field f = mahasiswa.getClass().getDeclaredField("NIM");
    f.setAccessible(true);
    return f.getInt(mahasiswa);
  }

  public double getIPK() throws Exception {
    Field f = mahasiswa.getClass().getDeclaredField("IPK");
    f.setAccessible(true);
    return f.getDouble(mahasiswa);
  }

}