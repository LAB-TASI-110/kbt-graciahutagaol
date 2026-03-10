#include <stdio.h>
#include <string.h> // Untuk fungsi strcpy dan strlen

// Maksimal panjang string untuk setiap data
#define MAX_NAMA 50
#define MAX_ALAMAT 100
#define MAX_ASAL 30
#define MAX_TUJUAN 30
#define MAX_HARITGL 30
#define MAX_WAKTU 20
#define MAX_TEMPATKUMPUL 50

int main() {
    // Deklarasi variabel untuk menyimpan data penumpang
    char nama_penumpang[MAX_NAMA];
    char alamat[MAX_ALAMAT];
    char asal[MAX_ASAL];
    char tujuan[MAX_TUJUAN];
    int nomor_kursi;
    char no_bus[20]; // Misalnya, No. Bus bisa berupa kombinasi huruf dan angka
    float tarif;
    char hari_tanggal[MAX_HARITGL];
    char waktu_berangkat[MAX_WAKTU];
    char waktu_kumpul[MAX_WAKTU];
    char tempat_kumpul[MAX_TEMPATKUMPUL];

    // Input Data Penumpang
    printf("==============================================\n");
    printf("   Sistem Ticketing Koperasi Bintang Tapanuli\n");
    printf("             (Transportasi Darat)\n");
    printf("==============================================\n\n");

    printf("Masukkan Nama Penumpang: ");
    fgets(nama_penumpang, MAX_NAMA, stdin);
    nama_penumpang[strcspn(nama_penumpang, "\n")] = 0; // Menghilangkan newline character

    printf("Masukkan Alamat: ");
    fgets(alamat, MAX_ALAMAT, stdin);
    alamat[strcspn(alamat, "\n")] = 0;

    printf("Masukkan Asal: ");
    fgets(asal, MAX_ASAL, stdin);
    asal[strcspn(asal, "\n")] = 0;

    printf("Masukkan Tujuan: ");
    fgets(tujuan, MAX_TUJUAN, stdin);
    tujuan[strcspn(tujuan, "\n")] = 0;

    printf("Masukkan Nomor Kursi: ");
    scanf("%d", &nomor_kursi);
    getchar(); // Membersihkan buffer setelah scanf

    printf("Masukkan Nomor Bus: ");
    fgets(no_bus, sizeof(no_bus), stdin);
    no_bus[strcspn(no_bus, "\n")] = 0;

    printf("Masukkan Tarif (contoh: 150000.00): ");
    scanf("%f", &tarif);
    getchar(); // Membersihkan buffer setelah scanf

    printf("Masukkan Hari dan Tanggal (contoh: Senin, 24 April 2023): ");
    fgets(hari_tanggal, MAX_HARITGL, stdin);
    hari_tanggal[strcspn(hari_tanggal, "\n")] = 0;

    printf("Masukkan Waktu Berangkat (contoh: 08:00 WIB): ");
    fgets(waktu_berangkat, MAX_WAKTU, stdin);
    waktu_berangkat[strcspn(waktu_berangkat, "\n")] = 0;

    printf("Masukkan Waktu Kumpul (contoh: 07:30 WIB): ");
    fgets(waktu_kumpul, MAX_WAKTU, stdin);
    waktu_kumpul[strcspn(waktu_kumpul, "\n")] = 0;

    printf("Masukkan Tempat Kumpul: ");
    fgets(tempat_kumpul, MAX_TEMPATKUMPUL, stdin);
    tempat_kumpul[strcspn(tempat_kumpul, "\n")] = 0;

    // Menampilkan Hasil Ticketing dalam Format Tabel
    printf("\n\n=========================================================================\n");
    printf("                     TIKET TRANSPORTASI KBT (ANGKATAN DARAT)\n");
    printf("=========================================================================\n");
    printf("| %-20s | %-45s |\n", "Item", "Detail");
    printf("=========================================================================\n");
    printf("| %-20s | %-45s |\n", "Nama Penumpang", nama_penumpang);
    printf("| %-20s | %-45s |\n", "Alamat", alamat);
    printf("| %-20s | %-45s |\n", "Asal", asal);
    printf("| %-20s | %-45s |\n", "Tujuan", tujuan);
    printf("| %-20s | %-45d |\n", "Nomor Kursi", nomor_kursi);
    printf("| %-20s | %-45s |\n", "No. Bus", no_bus);
    printf("| %-20s | Rp %-42.2f |\n", "Tarif", tarif);
    printf("| %-20s | %-45s |\n", "Hari & Tanggal", hari_tanggal);
    printf("| %-20s | %-45s |\n", "Waktu Berangkat", waktu_berangkat);
    printf("| %-20s | %-45s |\n", "Waktu Kumpul", waktu_kumpul);
    printf("| %-20s | %-45s |\n", "Tempat Kumpul", tempat_kumpul);
    printf("=========================================================================\n");

    return 0;
}
