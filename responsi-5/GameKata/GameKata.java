import java.util.*;

public class GameKata {
  public static void run(String[] tito, String[] wiwid) {
    // print all intersection using stream CASE-SENSITIVE (unique)
    Arrays.stream(tito).filter(Arrays.asList(wiwid)::contains).distinct().forEach(System.out::println);
  }
}