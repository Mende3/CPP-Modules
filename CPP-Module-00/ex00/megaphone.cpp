/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefranci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 08:15:51 by mefranci          #+#    #+#             */
/*   Updated: 2025/04/11 08:15:55 by mefranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main (int ac, char **av)
{
    int i;
    int j;

    if (ac == 1)
    {
        std::cout <<  "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    }
    else
    {       
        i = 1;
        while (av[i])
        {
            j = 0;
            while (av[i][j])
            {
                std::cout << (char)toupper(av[i][j]);
                j++;
            }
            i++;
        }
        std::cout << std::endl;
    }
    return 0;

}
