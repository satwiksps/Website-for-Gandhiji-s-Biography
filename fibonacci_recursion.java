
import java.util.Scanner;

public class FibonacciRecursion {
    public static int fibonacci(int n) {
        if (n <= 1) return n;
        return fibonacci(n - 1) + fibonacci(n - 2);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the position of Fibonacci number: ");
        int n = sc.nextInt();
        System.out.println("Fibonacci number is: " + fibonacci(n));
    }
}
