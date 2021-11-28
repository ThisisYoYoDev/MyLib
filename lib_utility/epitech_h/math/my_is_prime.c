/*
** EPITECH PROJECT, 2020
** my_is_prime
** File description:
** returns 1 if the number is prime and 0 if not
*/

int my_is_prime(int nb)
{
    if (nb <= 1)
        return (0);
    for (int n_get = 2; n_get <= nb / n_get; n_get++)
        if (nb % n_get == 0)
            return (0);
    return (1);
}
