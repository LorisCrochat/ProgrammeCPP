#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


#define LED_PIN RPI_GPIO_P1_18 // GPIO pin 18

int main() {
    // Initialiser la bibliothèque BCM2835
    if (!bcm2835_init()) {
        return 1;
    }

    // Configurer la broche GPIO comme sortie
    bcm2835_gpio_fsel(LED_PIN, BCM2835_GPIO_FSEL_OUTP);

    // Allumer la LED
    bcm2835_gpio_set(LED_PIN);

    // Laisser la LED allumée pendant 5 secondes
    sleep(5);

    // Éteindre la LED
    bcm2835_gpio_clr(LED_PIN);

    // Terminer la bibliothèque BCM2835
    bcm2835_close();

    return 0;
}