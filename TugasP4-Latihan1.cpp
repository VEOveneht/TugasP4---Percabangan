#include <iostream>
using namespace std;

int main()
{
    // Tugas 1 == Menghitung Honor Karyawan
    // Latihan 1
    // Nomor 1

    // Jam Kerja dan Lembur
    int jamNormal = 48;
    int jamKerja = {};
    int jamLembur = jamNormal - jamKerja;

    // cout << "Berapa Jam Kamu Bekerja: ";
    // cin >> jamKerja;

    // Upah Kerja dan Lembur
    int upahKRJA1Jam = 5000;
    int upahLMBR1Jam = 3000;

    // Total Upah Kerja dna Lembur
    int totalKerja = jamKerja * upahKRJA1Jam;
    int totalLembur = jamLembur * upahLMBR1Jam;
    int totalKerjaDanLembur = totalKerja + totalLembur;

    // cout << totalKerja << endl;
    // cout << totalLembur << endl;
    // cout << totalKerjaDanLembur << endl;

    // if (jamKerja > jamNormal)
    // {
    //     cout << "Upah Kamu Sebesar: " << totalKerja << endl;
    //     cout << "Karena Lembur Kamu Mendapat Tambahan Sebesar: " << totalLembur << endl;
    //     cout << "Maka Upah Kamu Sebesar: " << totalKerjaDanLembur << endl;
    // }
    // else
    // {
    //     cout << "Upah Kamu Sebesar: " << totalKerja << endl;
    //     cout << "Kamu Tidak Berhak mendapat Upah Tambahan" << endl;
    // };

    // Nomor 2 == Menghitung Honor Karyawan
    char gol = {};

    cout << "Pilih Golongan A, B, atau C :";
    cin >> gol;
    cout << "Berapa Jam Kerja: ";
    cin >> jamKerja;

    if (gol == 'A')
    {
        if (jamKerja <= jamNormal)
        {
            cout << "Upah Karyawan Gol A Tanpa Lembur: " << totalKerja << endl;
        }
        else
        {
            cout << "Upah Karyawan Gol A dengan Lembur: " << totalKerjaDanLembur << endl;
        }
    }
    else if (gol == 'B')
    {
        if (jamKerja <= jamNormal)
        {
            upahKRJA1Jam = 7000;
            upahLMBR1Jam = 5000;
            totalKerja = jamKerja * upahKRJA1Jam;

            cout << "Upah Karyawan Gol B Tanpa Lembur: " << totalKerja << endl;
            cout << totalKerja;
        }
        else
        {
            totalLembur = jamLembur * upahLMBR1Jam;
            totalKerjaDanLembur = totalKerja + totalLembur;
            cout << "Upah Karyawan Gol B dengan Lembur: " << totalKerjaDanLembur << endl;
        }
    }

    else if (gol == 'C')
    {
        if (jamKerja <= jamNormal)
        {
            upahKRJA1Jam = 10000;
            upahLMBR1Jam = 7000;
            totalKerja = jamKerja * upahKRJA1Jam;

            cout << "Upah Karyawan Gol C Tanpa Lembur: " << totalKerja << endl;
            cout << totalKerja;
        }
        else
        {
            totalLembur = jamLembur * upahLMBR1Jam;
            totalKerjaDanLembur = totalKerja + totalLembur;
            cout << "Upah Karyawan Gol C dengan Lembur: " << totalKerjaDanLembur << endl;
        }
    }

    return 0;
}