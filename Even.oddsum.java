import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int evenSum = 0, oddSum = 0;

        for (; n > 0; n /= 10) {
            int d = n % 10;

            if (d == 0)
                continue;

            if (d % 2 == 0)
                evenSum += d;
            else
                oddSum += d;

            if (Math.abs(evenSum - oddSum) > 10)
                break;
        }

        if (evenSum > oddSum)
            System.out.println(evenSum + " " + oddSum + " EVEN");
        else if (oddSum > evenSum)
            System.out.println(evenSum + " " + oddSum + " ODD");
        else
            System.out.println(evenSum + " " + oddSum + " EQUAL");
    }
}
