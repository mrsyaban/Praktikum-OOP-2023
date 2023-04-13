import java.io.*;
import java.util.*;

public class Zoo {
    private ArrayList<Enclosure<? extends Animal>> enclosures;
    private float ticketPrice;

    public Zoo() {
        // Inisialisasi this.enclosures dan this.ticketPrice
        this.enclosures = new ArrayList<Enclosure<? extends Animal>>();
    }

    public void addEnclosure(Enclosure<? extends Animal> enc) {
        // Menambahkan Enclosure enc ke dalam this.enclosures apabila enc tidak kosong
        if (!enc.isEmpty()){
            this.enclosures.add(enc);
        }
    }

    public void updateTicketPrice() {
        // Melakukan update terhadap this.ticketPrice dengan rumus sebagai berikut
        // harga tiket baru = 0
        // Untuk setiap Enclosure dalam this.enclosures:
            // Apabila Enclosure bersifat safeForPetting:
            //     harga tiket baru += 1.5 * jumlah animal dalam enclosure
            // else:
            //     harga tiket baru += 1 * jumlah animal dalam enclosure 
        this.ticketPrice = 0;
        for (int i=0; i<enclosures.size(); i++){
            if (enclosures.get(i).safeForPetting()){
                this.ticketPrice += 1.5 * enclosures.get(i).getAnimalCount();
            } else {
                this.ticketPrice += enclosures.get(i).getAnimalCount();
            }
        }
    }

    public float getTicketPrice() {
        // getter untuk this.ticketPrice
        return this.ticketPrice;
    }

    public int getTotalAnimalCount() {
        // Mengembalikan jumlah total semua hewan yang ada pada semua enclosure dalam this.enclosures
        int count = 0;
        for (int i=0; i < enclosures.size(); i++){
            count += enclosures.get(i).getAnimalCount();
        }
        return count;
    }

    public int getEnclosureCount() {
        // Mengembalikan jumlah enclosures dalam this.enclosures
        return this.enclosures.size();
    }
}