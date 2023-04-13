/***
 * @author Muhammad Rizky Sya'ban / 13521119
 */

import java.util.*;

public class GameKata {
    public static void run(String[] tito, String[] wiwid) {
        Map<String, Integer> hash = new HashMap<String, Integer>();

        // put the same string into hash
        for (String t : tito) {
            for (String w : wiwid){
                if (t.equals(w)){
                    Integer freq = hash.get(t);
                    hash.put(t, (freq == null) ? 1 : freq + 1);
                }    
            }
        }

        for (String i : hash.keySet()){
            System.out.println(i);
        }

    }
}