#include <iostream>
#include <thread>
#include <chrono>
#include <sstream>
#include <locale>
using namespace std;

string getAnswer(string action) {
    return "\nSTATUS: Anda memutuskan untuk " + action + "\n\n";
}
std::string formatNumber(int number) {
    stringstream ss;
    ss.imbue(std::locale(""));
    ss << number;
    return ss.str();
}
int main() {
    int choice;

    cout << "--- PROGRAM MEMBELI SEPATU ---\n\n";

    cout << "Apakah anda ingin pergi ke toko sepatu? (1 [Yes] / 0 [No]): ";
    cin >> choice;
    cout << getAnswer(choice == 1 ? "ingin pergi ke toko sepatu" : "tidak ingin kemana mana");

    if (choice == 1) {
        cout << "Anda ingin menggunakan apa ke toko sepatu? (1 [Grab] / 0 [Jalan Kaki]): ";
        cin >> choice;
        cout << getAnswer(choice == 1 ? "memakai Grab" : "jalan kaki");

        cout << "Kapan anda ingin pergi? (1 [Sekarang] / 0 [Nanti]): ";
        cin >> choice;
        cout << getAnswer(choice == 1 ? "pergi sekarang" : "pergi nanti");

        cout << "Ke toko sepatu yang mana? (1 [Dekat] / 0 [Jauh]): ";
        cin >> choice;
        cout << getAnswer(choice == 1 ? "pergi ke toko yang dekat" : "pergi ke toko yang jauh");

        cout << "Berapa anggaran yang anda bawa? ";
        cin >> choice;
        cout << "Anda memustuskan membawa uang sebesar Rp." << formatNumber(choice) << endl;

        cout << "\nSTATUS: Memilih Sepatu di Toko Tersebut. est 2 sec.\n\n";
        this_thread::sleep_for(chrono::seconds(2));

        cout << "Apakah anda ingin membeli sepatu? (1 [Yes] / 0 [No]): ";
        cin >> choice;
        cout << getAnswer(choice == 1 ? "membeli sepatu" : "tidak membeli sepatu");

        if (choice == 1) {
            cout << "Jasa pengiriman apa yang anda pilih apakah JNE atau JNT? (1 [JNE] / 0 [JNT]): ";
            cin >> choice;
            cout << getAnswer(choice == 1 ? "menggunakan JNE untuk jasa pengiriman" : "menggunakan JNT untuk jasa pengiriman");

            cout << "\nSTATUS: Pembungkusan Sepatu. est 3 sec.\n\n";
            this_thread::sleep_for(chrono::seconds(3));
            cout << "\nSTATUS: Pengiriman Sepatu. est 5 sec.\n\n";
            this_thread::sleep_for(chrono::seconds(5));
            cout << "\nSTATUS: Pengiriman sepatu berhasil, sepatu sampai ke penerima.\n\n";
        }
    }
    cout << "--- PROGRAM SELESAI ---" << endl;
    return 0;
}
