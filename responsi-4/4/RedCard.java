public class RedCard extends Card {
    public RedCard() {
        super();
    }    
    public RedCard(Double num) {
        super(num);
    }
    public void printInfo(){
        System.out.println("Kartu Merah: " + number);
    }

    public Double value(){
        return number * 0.1 + 0.09;
    }
}