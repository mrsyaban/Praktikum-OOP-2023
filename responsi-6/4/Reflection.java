import java.lang.reflect.Field;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class Reflection{
    //TIDAK BOLEH MENGUBAH NAMA METHOD YANG SUDAH ADA DAN PARAMS SERTA INPUT TYPENYA
    //BOLEH MENAMBAHKAN PRIVATE / PROTECTED METHOD SESUAI DENGAN KEBUTUHAN
    //DI LUAR SANA ADA KELAS YANG NAMANYA Ghost DAN Secret.

    public ArrayList<String> ghostMethods() throws Exception{
        Class<?> ghostClass = Class.forName("Ghost");
        ArrayList<String> methods = new ArrayList<>();
        for(Method method : ghostClass.getDeclaredMethods()){
            method.setAccessible(true);
            methods.add(method.getName());
        }
        return methods;
    }   

    public Integer sumGhost() throws Exception {
        Class<?> ghostClass = Class.forName("Ghost");
        Object ghost = ghostClass.newInstance();
        Integer sum = 0;
        for (Method method : ghostClass.getDeclaredMethods()) {
            method.setAccessible(true);
            if (method.getReturnType() == Integer.class) {
                sum += (Integer) method.invoke(ghost);
            }
        }
        return sum;
    }
    

    public String letterGhost() throws Exception{
        Class<?> ghostClass = Class.forName("Ghost");
        Object ghost = ghostClass.newInstance();
        StringBuilder concat = new StringBuilder();
        for (Method method : ghostClass.getDeclaredMethods()) {
            method.setAccessible(true);
            if (method.getReturnType().equals(String.class)) {
                String newString = (String) method.invoke(ghost);
                concat.append(newString);
            }
        }
        return concat.toString();
    }

    public String findSecretId(List<Secret> sl, String email) throws Exception{
        for (Secret secret : sl) {
            if (secret.isThis(email)) {
                Field uniqueIdField = secret.getClass().getDeclaredField("uniqueId");
                uniqueIdField.setAccessible(true);
                String uniqueId = (String) uniqueIdField.get(secret);
                return uniqueId;
            }
        }
        return "NaN";
    }
}