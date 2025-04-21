class Shape {
    void area() {
        System.out.println("Area method of Shape");
    }

    void display() {
        System.out.println("Display method of Shape");
    }
}


class R extends Shape {
    float pr;

    void area(float l, float b) { // Method Overloading (not overriding)
        pr = l * b;
    }

   
    void display() { // Proper overriding
        System.out.println("Area of Rectangle: " + pr);
    }
}

public class Pol{
    public static void main(String[] args) {
        R rect = new R();
        rect.area(4.5f, 8.9f); // Use float values to match method signature
        rect.display();

    }
}