
void input(){       //procedur untuk input
    while (true) {
        cout << "Masukkan banyaknya elemen pada array : ";  //output ke layar
        cin >> n;       //input dari pengguna
        if (n <= 20)    //jika n kurang dari atau sama dengan 20
            break;      //keluar dari loop
        else {          //jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen. \n";   //output ke layar 
        }

    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan elemen array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i <n; i++){
        cout << "Data ke-" << (i+1) << ";";
        cin >> arr[i];
    }
}