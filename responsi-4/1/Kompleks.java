// Muhammad Rizky Sya'ban
// 13521119

public class Kompleks {
  private static int n_kompleks;
  private int real;
  private int imaginer;

  public Kompleks(){
    this.real = 0;
    this.imaginer = 0;
  }

  public Kompleks(int real, int imaginer){
    this.real = real;
    this.imaginer = imaginer;
  }

  public int getReal() {
    return this.real;
  }

  public int getImaginer(){
    return this.imaginer;
  }

  public void setReal(int real){
    this.real = real;
  }

  public void setImaginer(int imaginer){
    this.imaginer = imaginer;
  }

  public Kompleks plus(Kompleks b){
    int resReal = this.real + b.getReal();
    int resImag = this.imaginer + b.getImaginer();
    Kompleks res = new Kompleks(resReal, resImag);
    return res;
  }

  public Kompleks minus(Kompleks b){
    int resReal = this.real - b.getReal();
    int resImag = this.imaginer - b.getImaginer();
    Kompleks res = new Kompleks(resReal, resImag);
    return res;
  }
  public Kompleks multiply(Kompleks b){
    Kompleks c = new Kompleks();
    c.real = (this.real * b.real) - (this.imaginer * b.imaginer);
    c.imaginer = (this.real * b.imaginer) + (this.imaginer * b.real);
    return c;
  }

  public Kompleks multiply(int number){
    Kompleks c = new Kompleks();
    c.real = this.real * number;
    c.imaginer = this.imaginer * number;
    return c;
  };

  public static int countKompleksInstance(){
    return n_kompleks;
  }
  public void print(){
    if(imaginer==0 && real==0){
        System.out.println("0");
    }
    else if(imaginer==0){
        System.out.println(real);
    }
    else if(real==0){
        System.out.println(imaginer+"i");
    }
    else if(imaginer<0){
        System.out.print(real);
        System.out.print(imaginer);
        System.out.println("i");
    }
    else{
        System.out.println(real+"+"+imaginer+"i");
    }   
  }
}