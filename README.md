# Pointer and Struct
Penugasan Magang IRIS 2021

**Pointer** adalah sebuah variabel atau object yang menunjuk ke variabel atau objek lainnya. Dengan pointer kita dimungkinkan untuk menunjuk suatu memori, mendapatkan isi dari memori dan mengubah isi dari memori yang ditunjuk.
- Deklarasi variabel pointer menggunakan operator *ptr
- Operator dereference menggunakan simbol yang sama dengan simbol operator perkalian, yakni * (simbol asterisk). Namun, fungsinya sangat berbeda. Operator dereference digunakan untuk mengakses nilai yang ditunjuk (pointed) dari sebuah variabel pointer.
---------------------------------------

1. Double pointer (pointer to pointer)

Double pointer (pointer to pointer) adalah pointer yang dapat menunjuk variabel pointer lainnya. Kegunaan paling umum dari variabel double pointer adalah untuk membuat array dua dimensi secara dinamis.
- Untuk mendeklarasikan variabel double pointer, digunakan dua simbol * dan dbPtr (**dbPtr).  
--------------------------------------

2. Pointer & Array 

Array adalah kumpulan data yang disusun secara sekuensial. Karena disusun secara sekuensial, alamat-alamat memori tiap elemen array juga tersusun secara berurutan. Jika kita ingin mengetahui alamat memori dari array bisa dilakukan dengan metode pointer. Dan nama array akan menunjuk ke elemen pertama dari array tersebut.

- Operatornya adalah *arr (*arr = arr[0], atau nilai dari elemen pertama dapat diakses dengan *arr atau *(arr + 0))
-----------------------_
