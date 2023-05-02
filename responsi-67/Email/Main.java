import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String email = scanner.nextLine();
        Email emailObj = new Email(email);
        try {
            emailObj.validateEmail();
            System.out.println("Email valid");
        } catch (InvalidEmailException e) {
            System.out.println(e.getMessage());
        } catch (InvalidDomainException e) {
            System.out.println(e.getMessage());
        }
    }
}
