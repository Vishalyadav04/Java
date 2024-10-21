  class Rectangle {
 int length;
 int breadth;
 // Parameterized constructor
 public Rectangle(int l, int b) {
length = l;
 breadth = b;
 }
 public void area() {
 int area = length * breadth;
 System.out.println("Area of Rectangle: " + area);
 }
 }
 public class ParameterizedConstructorDemo {
 public static void main(String[] args) {
 Rectangle rect = new Rectangle(10, 20);
 rect.area();
 }
 }
