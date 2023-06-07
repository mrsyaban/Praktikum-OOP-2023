
public class ElectronicProduct extends Product {
    private String warrantyPeriod;

    public ElectronicProduct(int id, String name, int price, String description, String warr){
        super(id, name, price, description);
        this.warrantyPeriod = warr;
    }

    @Override
    public String getInfo(){
        return (Integer.toString(id) + ": " +this.name + " - " +Integer.toString(price) + " - " +this.warrantyPeriod + " - " + this.description );
    }

    public String getWarrantyPeriod(){
        return warrantyPeriod;
    }
}
