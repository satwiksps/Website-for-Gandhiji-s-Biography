import java.util.Scanner;
public class MultiplyTwo {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter two numbers: ");
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        System.out.println("Product: " + (a * b));
    }
}