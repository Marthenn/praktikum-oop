import java.util.*;

public class Pasukan {
    private List<Integer> list;
    private int n;

    Pasukan(List<Integer> list, int n){
        this.list = list;
        this.n = n;
    }

    public void reset(){
        list.clear();
        // isi list dengan n buah 0
        for(int i=0; i<n; i++) list.add(0);
    }

    public long get(int idx){
        reset();
        // take time now
        long start = Util.getTime();
        // take idx-th element
        int x = list.get(idx);
        // take time now
        long end = Util.getTime();
        // return time taken
        return end-start;
    }

    public long del(int idx, int t){
        reset();
        // take time now
        long start = Util.getTime();
        // delete idx-th element t time
        for(int i=0; i<t; i++) list.remove(idx);
        // take time now
        long end = Util.getTime();
        // return time taken
        return end-start;
    }
}
