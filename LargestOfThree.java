import java.util.Scanner;
public class LargestOfThree {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter three numbers: ");
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int c = scanner.nextInt();
        int largest = Math.max(a, Math.max(b, c));
        System.out.println("The largest number is: " + largest);
    }
}