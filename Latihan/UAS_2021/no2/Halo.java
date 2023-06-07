package Latihan.UAS_2021.no2;

    public class Halo {
        public static void main(String[] args) {
            // TO DO no 3
            // .....
            try {
                TimeOfDay t = new TimeOfDay(0);
                System.out.println(t);
                t = new TimeOfDay(77777);
                System.out.println(t);
                t = new TimeOfDay(99999);
                System.out.println(t);
                
            // TO DO no 4
            } catch(IllegalArgumentException e){

            

            // ....

            System.out.println("Input tidak valid");

            // TO DO no 5
            // ....
            } 
        }
    }
