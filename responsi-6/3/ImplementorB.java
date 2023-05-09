public class ImplementorB extends Processor {
    public boolean process1() {
        return false;
    }

    public boolean process2() {
        return true;
    }

    public void process3() {
        System.out.println("Implementor B running process 2.");
    }

    public void process4() {
        System.out.println("Implementor B running process 3.");
    }

    public void process5() {
        System.out.println("Implementor B running process 4.");
    }
}
