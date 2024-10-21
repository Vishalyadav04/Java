 public class Exception {
 public static void main(String[] args) {
 int a[] = {5, 10};
 int b = 5;
 try {
 int x = a[2] / (b- a[1]); // ArrayIndexOutOfBoundsException
 } catch (ArrayIndexOutOfBoundsException e) {
 System.out.println("Array index error...");
 } finally {
 System.out.println("Finally block executed");
 int y = a[1] / a[0];
 System.out.println("Result: " + y);
 }
 }
 }
