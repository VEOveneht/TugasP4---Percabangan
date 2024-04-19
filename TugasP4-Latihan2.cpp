#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Destinasi dan Harga
    string destinasi[] = {"Surabaya", "Jakarta", "Yogyakarta"};
    int harga[] = {500000, 300000, 400000};

    // Input pilihan Destinasi

    cout << "|====| KAI Bandung |====|\n";
    cout << "Pilih destinasi:\n";
    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << ". " << destinasi[i] << " Rp." << harga[i] << endl;
    }
    cout << "|=======================|\n";
    int choice;
    cout << "Masukkan nomor destinasi (1-3): ";
    cin >> choice;

    // Validasi pilihan destinasi
    if (choice < 1 || choice > 3)
    {
        cout << "Pilihan tidak valid.\n";
        return (1);
    }

    // Input tanggal keberangkatan
    int tanggal;

    cout << "Masukkan tanggal keberangkatan: ";
    cin >> tanggal;

    if (tanggal < 1 || tanggal > 31)
    {
        cout << "Pilihan tidak valid.\n";
        return (1);
    }

    // Input jumlah tiket
    int tiket;
    cout << "Masukkan jumlah tiket: ";
    cin >> tiket;

    // Hitung total biaya tiket
    int totalCost = harga[choice - 1] * tiket;

    // Cetak pesan konfirmasi
    cout << "\n|=======|Pesanan Tiket Kereta Api|=======|\n";
    cout << "Destinasi: " << destinasi[choice - 1] << endl;
    cout << "Tanggal Keberangkatan: " << tanggal << endl;
    cout << "Jumlah Tiket: " << tiket << endl;
    cout << "Harga per Tiket: Rp " << harga[choice - 1] << endl;
    cout << "Total Biaya: Rp. " << totalCost << endl;
    cout << "Terima kasih telah melakukan pemesanan!\n";
    cout << "\n|========================================|\n";

    return (0);
}