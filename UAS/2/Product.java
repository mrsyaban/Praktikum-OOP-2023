
public abstract class Product {
    protected int id;
    protected String name;
    protected int price;
    protected String description;
    
    public Product(int id, String name, int price, String description){
        this.id = id;
        this.name = name;
        this.price = price;
        this.description = description;
    }

    // Getter
    public Integer getId(){
        return id;
    }

    public String getName(){
        return name;
    }

    public Integer getPrice(){
        return price;
    }

    public String getDescription(){
        return description;
    }

    //Setter
    public void setId(Integer id){
        this.id = id;
    }

    public void setName(String name){
        this.name = name;
    }

    public void setPrice(Integer price){
        this.price = price;
    }

    public void setDescription(String desc){
        description = desc;
    }

    public abstract String getInfo();
}
