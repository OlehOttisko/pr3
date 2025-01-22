#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Функція для перевірки, чи є символ приголосною буквою
int is_consonant(char c) {
    // Перетворення символу на нижній регістр
    c = tolower(c);

    // Перевірка на приголосну букву
    if ((c >= 'a' && c <= 'z') && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) {
        return 1; // Символ є приголосною
    }
    return 0; // Символ не є приголосною
}

int main() {
    char input[256];
    int consonant_count = 0;

    // Введення строки від користувача
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Видалення символу нового рядка (\n), якщо він присутній
    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    // Підрахунок приголосних букв
    for (int i = 0; input[i] != '\0'; i++) {
        if (is_consonant(input[i])) {
            consonant_count++;
        }
    }

    // Виведення результату
    printf("Number of consonants: %d\n", consonant_count);

    return 0;
}
