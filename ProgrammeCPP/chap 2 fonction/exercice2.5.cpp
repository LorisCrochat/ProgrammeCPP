#include <iostream>

unsigned long ChangerLuminosite(unsigned long pixel, int pourcentage) {
    unsigned char rouge, vert, bleu;

    // Isoler les 8 bits de rouge, vert et bleu
    rouge = (pixel & 0x00FF0000) >> 16;
    vert = (pixel & 0x0000FF00) >> 8;
    bleu = pixel & 0x000000FF;

    // Modifier les niveaux de rouge, vert et bleu en fonction du pourcentage
    if (pourcentage < 0) {
        // Assombrir
        rouge = std::max((int)rouge - (pourcentage * 255 / 100), 0);
        vert = std::max((int)vert - (pourcentage * 255 / 100), 0);
        bleu = std::max((int)bleu - (pourcentage * 255 / 100), 0);
    } else {
        // Eclaircir
        rouge = std::min((int)rouge + (pourcentage * 255 / 100), 255);
        vert = std::min((int)vert + (pourcentage * 255 / 100), 255);
        bleu = std::min((int)bleu + (pourcentage * 255 / 100), 255);
    }

    // Reconstruire le pixel avec les nouvelles valeurs de rouge, vert et bleu
    pixel = (pixel & 0xFF000000) | (rouge << 16) | (vert << 8) | bleu;

    return pixel;
}

int main() {
    unsigned long pixel = 0xFF00FF00; // Rouge: 255, Vert: 0, Bleu: 255
    int pourcentage = 50;

    std::cout << "Pixel initial : " << std::hex << pixel << std::endl;
    pixel = ChangerLuminosite(pixel, pourcentage);
    std::cout << "Pixel après modification : " << std::hex << pixel << std::endl;

    return 0;
}