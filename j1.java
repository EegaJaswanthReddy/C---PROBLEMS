package day14;

import java.util.Arrays;

public class HandsOnString {
    public static void main(String[] args) {
        String alpha = "Anudeep";
        String beta = new String("        Anudeep   ");
        System.out.println(beta.length());
        beta = beta.trim();
        System.out.println(beta.length());
        System.out.println(beta.equals("Anudeep"));
        System.out.println(alpha=="Anudeep");
        alpha = alpha.replace("Anudeep","Deep");
        System.out.println(alpha.compareTo("Deep"));
        byte[] bytes = alpha.getBytes();
        System.out.println(Arrays.toString(bytes));
        char[] chars = alpha.toCharArray();
        System.out.println(Arrays.toString(chars));
        byte[] newBytes = {65,66,67,68,69,70};
        String zeta = new String(newBytes);
        System.out.println(zeta);
        char[] newChars = {122,121,120,119,118};
        String delta = new String(newChars);
        System.out.println(delta);
        System.out.println(delta.contains("y"));
    }
}
