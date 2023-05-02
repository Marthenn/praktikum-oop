public class Main {
    public static void main(String[] args) {
        Processor processor = new ImplementorA();
        processor.check();
        processor.run();

        Processor pb = new ImplementorB();
        pb.check();
        pb.run();

        Processor pc = new ImplementorC();
        pc.check();
        pc.run();

        /*
         * Output:
         * Implementor A running process 1.
         * Implementor A running process 2.
         * Implementor A running process 3.
         * Implementor A running process 1.
         * 
         * Implementor B running process 2.
         * Implementor B running process 3.
         * Implementor B running process 4.
         * Implementor B running process 3.
         * 
         * Implementor C running process 3.
         * Implementor C running process 4.
         * Implementor C running process 5.
         * Implementor C running process 5.
         */
    }
}