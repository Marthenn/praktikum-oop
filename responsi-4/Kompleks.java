public class Kompleks {
    private static int n_kompleks = 0;
    private int real;
    private int imaginer;

    public Kompleks(){
        this.real = 0;
        this.imaginer = 0;
        n_kompleks++;
    }

    public Kompleks(int real, int imaginer){
        this.real = real;
        this.imaginer = imaginer;
        n_kompleks++;
    }

    public int getReal(){
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

    public void print(){ // masalah di sini tc 7 dan 8
        if(this.real == 0 & this.imaginer == 0){
            System.out.println("0");
        }
        if(this.real == 0 & this.imaginer != 0){
            System.out.println(this.imaginer + "i");
        }
        if(this.real != 0 & this.imaginer == 0){
            System.out.println(this.real);
        }
        if(this.real != 0 & this.imaginer != 0){
            System.out.print(this.real);
            if(this.imaginer > 0){
                System.out.print("+");
            }
            System.out.println(this.imaginer + "i");
        }
    }

    public Kompleks plus(Kompleks b){
        int real = this.real + b.getReal();
        int imaginer = this.imaginer + b.getImaginer();
        return new Kompleks(real, imaginer);
    }

    public Kompleks minus(Kompleks b){
        int real = this.real - b.getReal();
        int imaginer = this.imaginer - b.getImaginer();
        return new Kompleks(real, imaginer);
    }

    public Kompleks multiply(Kompleks b){
        int real = (this.real * b.getReal()) - (this.imaginer * b.getImaginer());
        int imaginer = (this.real * b.getImaginer()) + (this.imaginer * b.getReal());
        return new Kompleks(real, imaginer);
    }

    public Kompleks multiply(int b){
        int real = this.real * b;
        int imaginer = this.imaginer * b;
        return new Kompleks(real, imaginer);
    }

    static int countKompleksInstance(){
        return n_kompleks;
    }
}
