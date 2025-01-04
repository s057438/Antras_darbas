#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>


using namespace std;

bool balse(char raide) {
    char balses[] = {'a', 'e', 'i', 'o', 'u', 'y', 'A', 'E', 'I', 'O', 'U', 'Y'};
    for (int i = 0; i < 12; i++) {
        if (raide == balses[i]) {
            return true;
        }
    }
    return false;
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
            default:
                cout << "Tokio pasirinkimo nera" << endl;
    }
    return 0;
}
