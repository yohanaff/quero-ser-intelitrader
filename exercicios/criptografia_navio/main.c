#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Função para inverter os dois últimos bits
unsigned char invertLastTwoBits(unsigned char byte)
{
    // Inverte o penúltimo e o último bit
    byte ^= (1 << 0); // Inverte o último bit
    byte ^= (1 << 1); // Inverte o penúltimo bit
    return byte;
}

// Função para trocar os 4 primeiros bits com os 4 últimos bits
unsigned char exchange4Bits(unsigned char byte)
{
    // Troca os 4 bits mais significativos com os 4 menos significativos
    unsigned char highNibble = (byte >> 4) & 0x0F; // Pega os 4 bits mais significativos
    unsigned char lowNibble = (byte & 0x0F) << 4;  // Pega os 4 bits menos significativos
    return highNibble | lowNibble;
}

// Função para converter uma string de bits em um byte
unsigned char convertToByte(const char *bitString)
{
    return (unsigned char)strtol(bitString, NULL, 2);
}

int main()
{
    // Mensagem criptografada em formato de string de bits
    const char *message = "10010110 11110111 01010110 00000001 00010111 00100110 01010111 00000001 "
                          "00010111 01110110 01010111 00110110 11110111 11010111 01010111 00000011";

    char byteStr[9];   // Para armazenar cada byte de 8 bits como string
    byteStr[8] = '\0'; // Null terminator para a string
    unsigned char byte;

    // Percorre a mensagem
    for (int i = 0, j = 0; i < strlen(message); i++)
    {
        // Pega 8 bits (ignora espaços)
        if (message[i] != ' ')
        {
            byteStr[j++] = message[i];
            if (j == 8)
            {
                j = 0;
                // Converte a string de bits para um byte
                byte = convertToByte(byteStr);

                // Inverte os dois últimos bits
                byte = invertLastTwoBits(byte);

                // Troca os 4 primeiros bits com os 4 últimos
                byte = exchange4Bits(byte);

                // Imprime o caractere ASCII correspondente
                printf("%c", byte);
            }
        }
    }

    printf("\n");
    return 0;
}