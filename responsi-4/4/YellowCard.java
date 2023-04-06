public class YellowCard extends Card {
    public YellowCard() {
        super();
    }
    public YellowCard(Double num) {
        super(num); 
    }
    public void printInfo(){
        System.out.println("Kartu Kuning: " + number);
    }

    public Double value(){
        return (number * 0.1) + 0.06;
    }
}