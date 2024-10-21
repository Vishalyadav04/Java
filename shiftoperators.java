 public class ShiftOperators {
 public static void main(String[] args) {
 int num = 16; // 16 in binary is 0001 0000
 int leftShift = num << 2; // Left shift (multiplies by 2^2)
 int rightShift = num >> 2; // Right shift (divides by 2^2)
 int unsignedRightShift = num >>> 2; // Unsigned right shift
 System.out.println("Original number: " + num);
 System.out.println("Left shift: " + leftShift);
 System.out.println("Right shift: " + rightShift);
 System.out.println("Unsigned right shift: " + unsignedRightShift);
 }
 }
