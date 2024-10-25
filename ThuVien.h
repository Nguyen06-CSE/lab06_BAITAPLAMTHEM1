#define MAX 100
#define TAB '\t'

typedef int MaTran [MAX][MAX];


void xuatMang(MaTran a,int n,int m);
void baiMin(MaTran a, int n, int m, int soMin);


void xuatMang(MaTran a, int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == -1)
                cout << "*" << TAB;
            else
                cout << a[i][j] << TAB;
        }
        cout << endl << endl;
    }
}

void baiMin(MaTran a, int n, int m, int soMin) {
    srand(time(0));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            a[i][j] = 0;
        }
    }
    while (soMin > 0) {
        int hang = rand() % n;
        int cot = rand() % m;
        if (a[hang][cot] != -1) {
            a[hang][cot] = -1;  
            --soMin;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] != -1) { 
                int dem = 0;
                for (int k = -1; k <= 1; k++) {
                    for (int l = -1; l <= 1; l++) {
                        int hang = i + k;
                        int cot = j + l;
                        if (hang >= 0 && hang < n && cot >= 0 && cot < m && a[hang][cot] == -1) {
                            ++dem;
                        }
                    }
                }
                a[i][j] = dem; 
            }
        }
    }
}

