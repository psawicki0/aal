/*
 * Implementacja generatora przypadków testowych
 * Autorzy: Piotr Sawicki, Paweł Wieczorek
 */

#include "gen.h"

void generate(int amount, double min, double max, std::ostream &stream) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(min, max);
    stream << amount << "\n";
    for (int i = 0; i < amount; ++i)
        stream << dis(gen) << " " << dis(gen) << " " << dis(gen) << "\n";
}