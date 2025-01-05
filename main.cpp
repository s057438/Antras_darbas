#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>


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

// Zaidimas
void zaidimas() {
    srand(time(0));
    int atsitiktinis = rand() % 100 + 1;
    int spejimas;

    cout << "Atspekite skaiciu nuo 1 iki 100" << endl;

    while(true) {
        cout << "Iveskite savo spejima" << endl;
        cin >> spejimas;

        if (spejimas > atsitiktinis) {
            cout << "Jusu ivestas skaicius yra per didelis." << endl;
        }
        else if (spejimas < atsitiktinis) {
            cout << "Jusu ivestas skaicius yra per mazas" << endl;
        }
        else {
            cout << "Jus atspejote skaiciu" << endl;
        }
        break;
    }
}
// Fizzbuzz
void fizzbuzz(int n) {
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz" << endl;
        } else if (i % 3 == 0) {
            cout << "Fizz" << endl;
        } else if (i % 5 == 0) {
            cout << "Buzz" << endl;
        }
        else {
            cout << i << endl;
        }
    }
}

int main() {
    int veiksmas = 0;
    while (veiksmas != 5) {
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
            }
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
            case 3:
                zaidimas();
            break;
            case 4:
                int n;
            cout << "Iveskite teigiama sveikaji skaiciu" << endl;
            cin >> n;

            if (n>0) {
                fizzbuzz(n);
            } else {
                cout << "Iveskite teigiama sveikaji skaiciu" << endl;
            }
            break;
            default:
                cout << "Tokio pasirinkimo nera" << endl;
        }
    }
        return 0;
}
