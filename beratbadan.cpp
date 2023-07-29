/* RUMUS BROCA
laki-laki ideal (kg) = (TB - 100) - [(TB - 100) * 10%]
perempuan ideal (kg) = (TB - 100) - [(TB - 100) * 15%]
TB = tinggi baaan (cm)

dik: laki-laki memiliki:
- tinggi badan = 160 cm
- berat badan = 60 kg

dit: apakah laki-laki tsb gemuk/ideal/kurus?
*/

#include <iostream>
#include <string>
using namespace  std;

int  main() {
    string gender;
    float tb, bb, bb_ideal;

    cout << "gender (L/P) \t\t : "; cin >> gender;
    cout << "tinggi badan (cm) \t : "; cin >> tb;
    cout << "berat badan (kg) \t : "; cin >> bb;

    if (gender == "L" || gender == "l")
    {
        bb_ideal = (tb - 100) - ((tb - 100) * 0.1);
    } else if (gender == "P" || gender == "p") {
        bb_ideal = (tb - 100) - ((tb - 100) * 0.15);
    } else
    {
        cout << "GENDER SALAH" << endl;
        bb_ideal = 0;
    }
    if (bb_ideal != 0 || tb != 0 || bb != 0) {
        if (bb_ideal > bb) {
            cout << "kamu kurus, tambah berat badanmu!";
        } else if (bb_ideal < bb) {
            cout << "kamu gendut, kurangi berat badanmu!";
        } else if (bb_ideal == bb){
            cout << "berat bedanmu ideal, pertahankan!";
        } else {
            cout << "input salah, ulang!";
        }
    }
    cout << endl;
    cout << "berat badan ideal \t : " << bb_ideal << " kg"<< endl;
}