# Misi B: Beban Gelombang Struktur Jembatan (Metode Regula Falsi)

Repositori ini berisi program implementasi Metode Regula Falsi dalam Bahasa C++ untuk menyelesaikan **Misi B: Beban Gelombang Struktur Jembatan** pada Studi Kasus Metode Numerik.

---

## 📌 Deskripsi Studi Kasus

Sistem pemantau beban gelombang struktur jembatan memiliki persamaan defleksi:

$$f(x) = x^3 - 2x - 2 = 0$$

Di mana:
* **$x$**: Perpindahan struktur ($\text{cm}$).
* **Interval**: $[1, 2]$
* **Tujuan**: Menentukan nilai perpindahan $x$ pada interval $[1, 2]$ agar struktur jembatan tetap aman.

---

## 🛠️ Spesifikasi Pengerjaan

Sesuai instruksi untuk **Kelompok Genap (Metode Regula Falsi)**:
* **Jumlah Iterasi**: 4 Iterasi.
* **Tugas Presenter 1**: Cek $f(1) \cdot f(2) < 0$ & Iterasi 1–2.
* **Tugas Presenter 2**: Melanjutkan Iterasi 3–4 & Menentukan nilai $c_4$.
* **Tabel Rekap**: Menampilkan data $[a, b, c, f(a), f(b), f(c)]$.

---

## 📐 Rumus Utama

1. **Persamaan Posisi Titik $c$**:
   $$c = x_a - \frac{f(x_a) \cdot (x_b - x_a)}{f(x_b) - f(x_a)}$$

2. **Pembaruan Interval**:
   * Jika $f(a) \cdot f(c) < 0$, maka $b = c$
   * Jika $f(a) \cdot f(c) > 0$, maka $a = c$

---

## 💻 Cara Menjalankan Program

### Prasyarat
* C++ Compiler (GCC / g++)

### Langkah Kompilasi & Eksekusi

```bash
# 1. Clone repositori ini
git clone [https://github.com/USERNAME/NAMA-REPO.git](https://github.com/USERNAME/NAMA-REPO.git)

# 2. Masuk ke direktori
cd NAMA-REPO

# 3. Kompilasi program
g++ -o regula_falsi main.cpp

# 4. Jalankan program
./regula_falsi
