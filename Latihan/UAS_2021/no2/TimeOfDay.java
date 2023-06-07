package Latihan.UAS_2021.no2;

public class TimeOfDay {
    int h, m, s;

    public TimeOfDay(int seconds) throws IllegalArgumentException {
        // TO DO no 1
        assert (0<=seconds && seconds<=86399);

        h = seconds/3600;
        int rem = seconds % 3600;
        m = rem/60;
        s = rem % 60;

        // TO DO no2
        assert (0<=h && h<=23 && 0<=m && m<=59 && h*3600 + m*60 + s == seconds);
    }

    @Override
    public String toString(){
        return String.format("%02d:%02d:%02d", h, m, s);
    }
}


