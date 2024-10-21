 import java.util.Scanner;
 public class vowels {
 public static void main(String[] args) {
 Scanner s = new Scanner(System.in);
 System.out.println("Enter a string: ");
 String msg = s.nextLine().toLowerCase();
 int count = 0;
 for (int i = 0; i < msg.length(); i++) {
 char ch = msg.charAt(i);
 if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
 count++;
 }
 }
 System.out.println("Number of vowels in the string: " + count);
 }
 }
