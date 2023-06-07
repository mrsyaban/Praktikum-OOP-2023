package Latihan.UAS_2021.no1;
import java.util.*;
public abstract class Container implements GUI {
    private ArrayList<GUI> components;

    public Container(){
        components = new ArrayList<>();
    }

    public void add(GUI component){
        components.add(component);
    }

    public void draw(){
        for (GUI component: components){
            component.draw();
        }
    }
}
