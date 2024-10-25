void inMenu();
int chonMenu(int soMenu);
void xuLyMenu(int chon, MaTran a);


void inMenu()
{
    cout << "0. thoat khoi chuong trinh\n"
        << "1. tao bai min\n";
}

int chonMenu(int soMenu)
{
    int chon;
    do{
        inMenu();
        cout << "nhap chon: ";
        cin >> chon;
        if(chon >= 0 && chon <= soMenu)
            break;
    }while(true);
}


void xuLyMenu(int chon, MaTran a)
{
    int n, m, soMin;
    switch(chon){
        case 0:
            cout << "\n thoat khoi ct";
        break;

        case 1:
            cout << "\ntao bai min";
            cout << "nhap chieu dai cua hang: ";
            cin >> n;
            cout << "nhap chieu dai cua cot: ";
            cin >> m;
            cout << "nhap so min co trong mang(so min < n*m): ";
            cin >> soMin;
            baiMin(a, n, m, soMin);
            xuatMang(a, n, m);
        break;

        default:
        break;
    }
    _getch();
}

void chayChuongTrinh(){
    int soMenu = 2, chon;
    MaTran a;

    do{
        system("cls");
        chon = chonMenu(soMenu);

        xuLyMenu(chon, a);
    }while (chon != 0);
    
    
}