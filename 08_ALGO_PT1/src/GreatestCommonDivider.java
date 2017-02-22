/**
 * Created by major on 22.02.17.
 */
public class GreatestCommonDivider {

    public static int gcd(int p, int q) {
        if (q==0) return p;
        int r = p%q;
        return gcd(q, r);
    }

    public static void main(String[] args) {
        System.out.println("GCD of 77 and 7777 is " + gcd(77, 7777));
    }
}
