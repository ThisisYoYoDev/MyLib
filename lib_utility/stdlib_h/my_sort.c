/*
** EPITECH PROJECT, 2021
** my_sort
** File description:
** base on pigeonhole sort update with bead sort
*/

#include "lib_prototype.h"

void my_sort(int *arr, int size)
{
    int min = arr[0];
    int max = arr[0];
    int nbofhole;
    int index = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    nbofhole = max - min + 1;
    PHOLE_SIZE(nbofhole);
    for (int i = 0; i < nbofhole; i++)
        phole[i] = 0;
    for (int i = 0; i < size; i++)
        phole[arr[i] - min]++;
    for (int i = 0; i < nbofhole; i++)
        for (; phole[i]-- > 0; arr[index++] = i + min);
}