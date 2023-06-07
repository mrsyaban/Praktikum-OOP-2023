public class Order {
    private ShoppingCart shoppingCart;
    private PaymentProcessor paymentProcessor;
 
 
    public Order(ShoppingCart shoppingCart) {
        this.shoppingCart = shoppingCart;
    }
 
    public void checkout(String checkoutMethod) {
        double totalPrice = shoppingCart.calculateTotalPrice();
        if (checkoutMethod.equalsIgnoreCase("Cash")) {
            paymentProcessor = new Cash();
        } else if (checkoutMethod.equalsIgnoreCase("CreditCard")) {
            paymentProcessor = new CreditCard();
        } else if (checkoutMethod.equalsIgnoreCase("DebitCard")) {
            paymentProcessor = new DebitCard();
        } else {
            throw new IllegalArgumentException("Invalid payment method.");
        }

        paymentProcessor.processPayment(totalPrice);
    }
 }
 