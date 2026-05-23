interface Bird {
    void fly();
    void eat();
}

class Sparrow implements Bird {
    public void fly() {
        System.out.println("Sparrow can fly");
    }
    public void eat() {
        System.out.println("Sparrow can eat");
    }
}

public class main { 

    public static void doStuff(Bird b) {
        b.fly();
        b.eat();
    }

    public static void main(String[] args) {;
        doStuff(new Sparrow());
    }
}