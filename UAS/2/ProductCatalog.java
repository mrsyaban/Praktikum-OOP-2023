import java.util.*;

public class ProductCatalog implements ProductManagement{
    private List<Product> productList;

    public ProductCatalog(List<Product> li){
        this.productList = li;
    }

    @Override
    public void addProduct(Product prod){
        productList.add(prod);
    }
    
    @Override
    public Product removeProduct(int id){
        Product prod = getProduct(id);
        if (productList.remove(prod)){
            return prod;
        } else {
            return null;
        }
    }

    @Override
    public void updateProduct(int id, String name, int price, String description){
        boolean found = false;
        for (Product prod: productList){
            if (prod.getId() == id) {
                prod.setName(name);
                prod.setPrice(price);
                prod.setDescription(description);
                found = true;
            }
        }
        
        if (!found){
            System.out.println("Produk dengan id " + id + " tidak ditemukan");
        }
    }

    @Override
    public List<Product> getAllProduct(){
        return productList;
    }

    @Override
    public Product getProduct(int id){
        for (Product prod: productList){
            if (prod.getId() == id) {
                return prod;
            }
        }
        return null;
    }
}
