import edu.princeton.cs.algs4.StdOut;

/**
 * Created by majoroff on 24.02.17.
 */
public class Excercises {

    public static void ex1113(){
        int a[][] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
        for (int i = 0; i<3; i++){
            StdOut.printf("%d: ", i+1);
            for (int j = 0; j<3; j++){
                StdOut.printf("%d ", a[j][i]);
            }
            StdOut.println();
        }
    }

    public static String ex127 (String s) {
        int N = s.length();
        if (N <= 1) return s;
        String a = s.substring(0, N/2);
        String b = s.substring(N/2, N);
        return ex127(a) + ex127(b);
    }

    public static void main(String[] args){
        System.out.println(ex127("Zhopa"));

    }
}
