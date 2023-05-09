public class ImplementorA extends Processor {
    public boolean process1() {
        return true;
    }

    public boolean process2() {
        return false;
    }

    public void process3() {
        System.out.println("Implementor A running process 1.");
    }

    public void process4() {
        System.out.println("Implementor A running process 2.");
    }

    public void process5() {
        System.out.println("Implementor A running process 3.");
    }
}
