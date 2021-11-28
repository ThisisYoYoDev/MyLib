/*
** EPITECH PROJECT, 2020
** my_find_prime_sup
** File description:
** Write a function that returns the smallest
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    for (int n_get = nb; n_get >= nb; n_get++)
        if (my_is_prime(n_get))
            return (n_get);
    return (nb);
}
