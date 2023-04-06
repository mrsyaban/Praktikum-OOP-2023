/***
 * @author Muhammad Rizky Sya'ban / 13521119
 */

class DebitCard implements IPaymentMethod {
    double balance;

    // Inisialisasi balance menjadi 0
    public DebitCard() {
        this.balance = 0.0;
    }

    // Getter
    public double getBalance() {
        return this.balance;
    }

    // Menambahkan amount ke balance
    // Mengembalikan true
    public boolean deposit(double amount) {
        this.balance += amount;
        return true;
    }

    // Mengurangi amount dari balance
    // Mengembalikan false apabila amount melebihi balance
    public boolean withdraw(double amount) {
        if (this.balance < amount){
            return false;
        } else {
            this.balance -= amount;
            return true;
        }
    }

    // Mengurangi amount dari balance
    // Mengembalikan false apabila amount melebihi balance
    public boolean pay(double price) {
        if (price > this.balance){
            return false;
        } else {
            this.balance -= price;
            return true;
        }
    }
}