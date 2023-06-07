
public class FoodProduct extends Product{
    private String expiryDate;

    public FoodProduct(int id, String name, int price, String description, String exp){
        super(id, name, price, description);
        this.expiryDate = exp;
    }

    public String getExpiryDate(){
        return expiryDate;
    }

    @Override
    public String getInfo(){
        return (Integer.toString(id) + ": " +this.name + " - " +Integer.toString(price) + " - " +this.expiryDate + " - " + this.description );
    }
}
