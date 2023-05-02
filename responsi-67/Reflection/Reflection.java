import java.lang.reflect.Method;
import java.lang.reflect.Field;
import java.lang.reflect.Constructor;
import java.util.ArrayList;
import java.util.List;

public class Reflection {
    //TIDAK BOLEH MENGUBAH NAMA METHOD YANG SUDAH ADA DAN PARAMS SERTA INPUT TYPENYA
    //BOLEH MENAMBAHKAN PRIVATE / PROTECTED METHOD SESUAI DENGAN KEBUTUHAN
    //DI LUAR SANA ADA KELAS YANG NAMANYA Ghost DAN Secret.

    public ArrayList<String> ghostMethods() {
        ArrayList<String> methodNames = new ArrayList<>();
        try {
            Class ghostClass = Class.forName("Ghost");
            Method[] methods = ghostClass.getDeclaredMethods();
            for (Method method : methods) {
                method.setAccessible(true);
                methodNames.add(method.getName());
            }
        } catch (ClassNotFoundException e) {
            e.printStackTrace();
        }
        return methodNames;
    }

    public Integer sumGhost() throws Exception {
        Class ghostClass = Class.forName("Ghost");
        Method[] methods = ghostClass.getDeclaredMethods();
        Integer sum = 0;
        for (Method method : methods) {
            method.setAccessible(true);
            Object result = method.invoke(ghostClass.newInstance());
            if (result instanceof Integer) {
                sum += (Integer) result;
            }
        }
        return sum;
    }

    public String letterGhost() throws Exception {
        Class ghostClass = Class.forName("Ghost");
        Method[] methods = ghostClass.getDeclaredMethods();
        String concat = "";
        for (Method method : methods) {
            method.setAccessible(true);
            Object result = method.invoke(ghostClass.newInstance());
            if (result instanceof String) {
                concat += (String) result;
            }
        }
        return concat;
    }

    public String findSecretId(List<Secret> sl, String email) throws Exception {
        for (Secret secret : sl) {
            Method isThisMethod = secret.getClass().getDeclaredMethod("isThis", String.class);
            isThisMethod.setAccessible(true);
            Boolean isMatch = (Boolean) isThisMethod.invoke(secret, email);
            if (isMatch) {
                Field uniqueIdField = secret.getClass().getDeclaredField("uniqueId");
                uniqueIdField.setAccessible(true);
                return (String) uniqueIdField.get(secret);
            }
        }
        return "NaN";
    }
}
