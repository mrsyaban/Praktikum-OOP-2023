
public class FashionProduct extends Product {
    private String size;

    public FashionProduct(int id, String name, int price, String description, String size) {
        super(id, name, price, description);
        this.size = size;
    }

    public String getSize(){
        return size;
    }
    
    @Override
    public String getInfo(){
        return (Integer.toString(id) + ": " +this.name + " - " +Integer.toString(price) + " - " +this.size + " - " + this.description );
    }

}