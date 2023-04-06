import java.util.*;

public class GameKata {
  public static void run(String[] tito, String[] wiwid) {
    // use java api map to print the intersection of tito and wiwid (case sensitive and unique)
    Map<String, Integer> map = new HashMap<>();
    Arrays.stream(tito).forEach(x -> map.put(x,1));
    Arrays.stream(wiwid).filter(map::containsKey).distinct().forEach(System.out::println);
  }

  public static void main(String[] args) {
    String a[] = {"budi", "budi", "adalah", "budi"};
    String b[] = {"budi", "adalah", "mapres"};
    GameKata.run(a, b);
  }
}