public class Main {
    public static void main(String[] args) {
        RedCard redCard = new RedCard(9.0);
        YellowCard yellowCard = new YellowCard(9.0);
        System.out.println(Comparator.isObj1LowerThanObj2(redCard, yellowCard));
        redCard.printInfo();
    }
}
