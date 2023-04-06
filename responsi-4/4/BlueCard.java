public class BlueCard extends Card {
    public BlueCard() {
        super();
    }    
    public BlueCard(Double num) {
        super(num);
    }
    public void printInfo(){
        System.out.println("Kartu Biru: " + number);
    }

    public Double value(){
        return number * 0.1 + 0.03;
    }
}