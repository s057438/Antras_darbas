#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>


using namespace std;

// Ar raide yra balsis?
bool balse(char raide) {
    char balses[] = {'a', 'e', 'i', 'o', 'u', 'y', 'A', 'E', 'I', 'O', 'U', 'Y'};
    for (int i = 0; i < 12; i++) {
        if (raide == balses[i]) {
            return true;
        }
    }
    return false;
}

// Didziausias bendras daliklis
int didziausias(int skaicius1, int skaicius2) {
    if (skaicius2 != 0) {
        int laik = skaicius2;
        skaicius2 = skaicius1 % skaicius2;
        skaicius1 = laik;
    }
    return skaicius1;
}


int main() {

    int veiksmas = 0;
    while (veiksmas != 6) {
        cout << "Pasirinkite koki veiksma norite atlikti:" << endl;
        cout << "1. Patikrinti ar ivesta raide yra balse" << endl;
        cout << "2. Rasti dvieju skaiciu didziausia bendra dalikli" << endl;
        cout << "3. Zaidimas atspeti skaiciu 1-100" << endl;
        cout << "4. Sveikojo skaiciaus n dalyba" << endl;
        cout << "5. Iseiti is programos" << endl;
        cin >> veiksmas;
        switch (veiksmas) {
            case 1:
                char raide;
            cout << "Iveskite raide, kuria norite patikrinti" << endl;
            cin >> raide;

            if (balse(raide)) {
                cout << "True" << endl;
            } else {
                cout << "False" << endl;
            break;
            case 2:
                int skaicius1, skaicius2;
                cout << "Iveskite pirma skaiciu:" << endl;
                cin >> skaicius1;

                cout << "Iveskite antra skaiciu:" << endl;
                cin >> skaicius2;

                int daliklis = didziausias(skaicius1, skaicius2 );
                cout << "Didziausias bendras daliklis tarp skaiciu " << skaicius1 << "ir " << skaicius2 << "yra " << daliklis << endl;
            break;

            default:
                cout << "Tokio pasirinkimo nera" << endl;
    }
    return 0;
}
