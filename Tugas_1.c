// TUGAS 1 PMC
// NAMA: Kadhan Dalilurahman
// NIM : 13220001

#include <stdio.h>
#include <stdlib.h>

main()
{
    int A, B = 0;
    int A1, B1 = 0;
    int input_user = 0;
    latbel();  // PRINT PESAN AWAL GAMES

    while(B != 4)
    {
        instruksi();  // PRINT INSTRUKSI GAMES
        scanf("%d", &input_user);  //INPUT USER

        // PENGOLAHAN INPUT USER
        if(input_user == 1){
            A = 3;
        }
        else if (input_user == 2){
            B = 5;
        }
        else if (input_user == 3) {
            A1 = max(A+B-5, 0);
            B = min(5, A+B);
            A = A1;
        }
        else if (input_user == 4){
            B1 = max((A+B-3), 0);
            A = min(3, (A+B));
            B = B1;
        }
        else if (input_user == 5){
            A = 0;
        }
        else if (input_user == 6){
            B = 0;
        }
        printf("\nNilai A: %d  Nila B: %d", A, B);  // PRINT HASIL PENGOLAHAN
    };

    //PRINT ENDGAME
    printf("\n");
    printf("\nSELAMAT! ANDA BERHASIL");
    printf("\n");
}



//PESAN LATAR BELAKANG
latbel(){
    printf("! S E L A M A T  D A T A N G !");
    printf("\nAnda memiliki dua ember, A dan B.");
    printf("\nEmber A berkapasitas 3 liter dan");
    printf("\nEmber B berkapasitas 5 liter.");
    printf("\nGunakanlah opsi langkah dibawah");
    printf("\nAgar ember B berisikan air");
    printf("\nSebanyak 4 liter.");
    printf("\nSelamat mencoba!");
    printf("\n");
}

// PESAN INSTRUKSI
instruksi(){
    printf("\n=========================");
    printf("\nOpsi pilihan langkah: ");
    printf("\n1. Mengisi penuh A");
    printf("\n2. Mengisi penuh B");
    printf("\n3. Menuangkan isi A ke B");
    printf("\n4. Menuangkan isi B ke A");
    printf("\n5. Mengosongkan A");
    printf("\n6. Mengosongkan B");
    printf("\n");
    printf("\nLangkah yang kamu pilih: ");
}

//FUNGSI MAX
max(a,b){
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}

//FUNGSI MIN
min(a,b){
    if (a < b){
        return a;
    }
    else{
        return b;
    }
}
