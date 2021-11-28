/*
** EPITECH PROJECT, 2020
** my_compute_square_root
** File description:
** Function that returns the square root
*/

int my_compute_square_root(int nb)
{
    long n_get = 1;

    if (nb == 0)
        return (0);
    else if (nb == 1)
        return (1);
    while (n_get * n_get < nb)
        n_get++;
    if (n_get * n_get == nb)
        return (n_get);
    else
        return (0);
}
