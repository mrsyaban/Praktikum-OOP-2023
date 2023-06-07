import java.util.*;
public class Subject {
    private List<Observer> listSystem;
    public Subject(){
        listSystem = new ArrayList<Observer>();
    }

    public void addSystem(Observer obs){
        listSystem.add(obs);
    }

    public void removeSystem(Observer obs){
        listSystem.remove(obs);
    }

    public static void main(String[] args) {
        Subject subject = new Subject();
        SMS sms = new SMS();
        Email email = new Email();
        PushNotification push = new PushNotification();
        subject.addSystem(sms);
        subject.addSystem(email);
        subject.addSystem(push);
        
    }
}
