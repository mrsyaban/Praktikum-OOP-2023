import java.util.ArrayList;
import java.util.List;

public class BoxOperator {
    public static <T> List<T> getContents(Box<?> box, Class<T> type) {
        // Implement this function.
        // Case need to be handled: Box may contains null value, please make sure it is not returned.
        List<T> list = new ArrayList<>();

        for (int i=0; i<box.getContents().size(); i++){
            if (box.getContents().get(i) != null){
                if (type.isAssignableFrom(box.getContents().get(i).getClass())){
                    list.add(type.cast(box.getContents().get(i)));
                }
            }
        }

        return list;
    }

    // public static void main(String[] args) {
    //     List<Object> li = new ArrayList<Object>();
    //     li.add(21);
    //     li.add(3.4f);
    //     li.add(true);
    //     li.add("TEST");
    //     li.add('c');

    //     Box<Object> box = new Box(li);
    //     Class<Integer> tip = 9;
    //     List<Integer> res = BoxOperator.<Integer>getContents(box, tip.getClass());
        
    // }
}