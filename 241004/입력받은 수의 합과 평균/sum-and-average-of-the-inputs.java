import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int a, sum = 0;
        for (int i=0; i<n; i++) {
            a = sc.nextInt();
            sum += a;
        }
        System.out.printf("%d %.1f", sum, (double)sum/n);
    }
}