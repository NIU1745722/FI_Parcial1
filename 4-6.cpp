///Escriure a partir d aqui la funcio incrementaHora
int incrementaHora(int& hh, int& mm, int& ss) {
    ss++;
    if (ss >= 60) {
        mm++;
        ss = 0;
    }
    if (mm >= 60) {
        hh++;
        mm = 0;
    }
    if (hh >= 24) {
        hh = 0;
    }
    return 0;
}