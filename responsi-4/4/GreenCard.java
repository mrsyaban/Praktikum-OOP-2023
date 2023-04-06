public class GreenCard extends Card {
    public GreenCard() {
        super();
    }    
    public GreenCard(Double num) {
        super(num);
    }
    public void printInfo(){
        System.out.println("Kartu Hijau: " + number);
    }

    public Double value(){
        return number * 0.1;
    }
}