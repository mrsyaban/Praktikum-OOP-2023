import java.lang.reflect.*;

public class MahasiswaDecoder {

    private Mahasiswa mahasiswa;

  MahasiswaDecoder(Mahasiswa mahasiswa) {
    this.mahasiswa = mahasiswa;
  }



  public void addMatkul(String name) throws Exception {
    Method method = mahasiswa.getClass().getDeclaredMethod("addMatkul", String.class);
    method.setAccessible(true);
    method.invoke(mahasiswa, name);
  }



  public int getNIM() throws Exception {
    Field field = mahasiswa.getClass().getDeclaredField("NIM");
    field.setAccessible(true);
    return (int) field.get(mahasiswa);

  }



  public double getIPK() throws Exception {
    Field field = mahasiswa.getClass().getDeclaredField("IPK");
    field.setAccessible(true);
    return (double) field.get(mahasiswa);
  }



}