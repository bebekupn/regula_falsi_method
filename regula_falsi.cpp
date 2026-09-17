#include<iostream>
using namespace std;

double a, b;

double fungsi_f(double x){
    return (x*x*x)-2*x-2;
}

double regula(double (*f)(double), double x_a, double x_b){
    double f_x_a = f(x_a);
    double f_x_b = f(x_b);

    double c = x_a - (f(x_a)*(x_b - x_a)) / (f(x_b) - f(x_a));
    return c;

}

double fungsi_a;
double fungsi_b;
double batas_atas = 0;
double batas_bawah = 0;


void check_batas(){
        if(fungsi_a > 0){
            batas_atas = fungsi_a;
            batas_bawah = fungsi_b;
        }else{
            batas_atas = fungsi_b;
            batas_bawah = fungsi_a;
        }
}


int main(){
    cout << "masukkan nilai interval [a,b] dari persamaan (x^3) - 2x - 2 :" << endl;
    cout << "masukkan nilai a :";
    cin >> a;
    cout << "masukkan nilai b :";
    cin >> b;
    
    fungsi_a = fungsi_f(a);
    fungsi_b = fungsi_f(b);

    if(fungsi_a * fungsi_b >= 0) {
        cout << "Interval tidak valid! f(a) dan f(b) harus memiliki tanda yang berbeda." << endl;
        return 0;
    }
    
    double hasil_c;
    double fungsi_c;
    int i = 0;

    do{
        
        hasil_c = regula(fungsi_f, a, b );
        fungsi_c = fungsi_f(hasil_c);

        cout << "iterasi ke-" << i+1 << endl;
        cout << "nilai dari a: " << a << endl;
        cout << "nilai dari b: " << b << endl;
        cout << "nilai dari c: " << hasil_c << endl;
        cout << "nilai dari f(a): " << fungsi_a << endl;
        cout << "nilai dari f(b): " << fungsi_b << endl;
        cout << "nilai dari f(c): " << fungsi_c << endl;
        

        if((fungsi_c > 0 && fungsi_a > 0) || (fungsi_c < 0 && fungsi_a < 0)){
            a = hasil_c;
            fungsi_a = fungsi_c;
        } else {
            b = hasil_c;
            fungsi_b = fungsi_c;
        }

        cout << "interval: [" << a << "; " << b << "]" << endl << endl;

        i++;
    }while(fungsi_c < -0.0001);

    check_batas();
    cout << "maka rentang fungsinya adalah " << batas_bawah << " -- " << batas_atas << endl;


    return 0;
}