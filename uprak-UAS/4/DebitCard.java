public class DebitCard implements PaymentProcessor{

    @Override
    public void processPayment(double amount) {
        // Process payment logic
        System.out.println("Payment processed successfully with debit card: $" + amount);
    }
}
