import java.util.*;
public class ShoppingCart {
    protected static List<Product> shoppingCarts = new ArrayList<>();
    
    public void addProductToShoppingCart(Product product) {
        shoppingCarts.add(product);
    }
 
    public void removeProductFromShoppingCart(Product product) {
        shoppingCarts.remove(product);
    }
 
 
    public double calculateTotalPrice() {
        double total = 0;
        for (Product product : shoppingCarts) {
            total += product.getPrice();
        }
        return total;
    }
}
