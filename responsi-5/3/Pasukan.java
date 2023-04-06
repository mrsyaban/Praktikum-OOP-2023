import java.util.*;

public class Pasukan {
    private List<Integer> list;
    private int n;


    public Pasukan(List<Integer> li, int n) {
        this.list = li;
        this.n = n;
    }

    public void reset(){
        list.clear();
        for (int i = 0; i < n; i++) {
            list.add(0);
        }
    }

    public long get(int index){
        this.reset();
        long startTime = Util.getTime();
        list.get(index);
        long endTime = Util.getTime();
        return endTime - startTime;
    }

    public long del(int idx, int t) {
        this.reset();
        long startTime = Util.getTime();
        for (int i = 0; i < t; i++) {
            this.list.remove(idx);
        }
        long endTime = Util.getTime();
        return endTime - startTime;
    }

}
