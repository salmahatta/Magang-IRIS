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
-----------------------

3. Pointer & Function 

**Fungsi (Function)** adalah sebuah struktur, Pengelompokan yang mengandung sekelompok pernyataan yang akan dilaksanakan oleh CPU jika nama function tersebut dipanggil untuk dieksekusi. Fungsi dapat menerima parameter sebagai input. Penggunaan-penggunaan parameter fungsi selama ini sebenarnya menggunakan konsep pass by value. 

**Pass by Value** berarti saat kita memasukkan (passing) argumen pada fungsi, nilai dari argumen tersebut akan disalin ke variabel yang berada pada parameter fungsi. Karena hanya nilainya saja yang diterima oleh fungsi, perubahan yang terjadi pada variabel parameter fungsi tidak akan berpengaruh terhadap variabel asalnya.

**Pass by Address/Reference** berarti argumen yang dimasukkan (passing) ke parameter fungsi adalah alamat memori variabel. Segala perubahan yang terjadi pada variabel tersebut, juga mempengaruhi langsung ke variabel asalnya. Hal ini terjadi karena argumennya adalah langsung berupa alamat memorinya. Dan karena parameternya menerima alamat memori, maka variabel parameternya harus berupa pointer.

***Perbedaan Pass by Value & Pass by Address***

Pass by Address |
------------ |

```ruby
int main()
{
    int x = 10, y = 6;
    change(&x, &y);
    printf("%d %d\n", x, y);

    return 0;
}
```

Pass by Value |
------------ |
```ruby
int main()
{
    int x = 10, y = 6;
    change(&x, &y);
    printf("%d %d\n", x, y);

    return 0;
}
```

