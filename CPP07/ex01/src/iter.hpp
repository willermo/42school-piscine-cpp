/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:09:52 by doriani           #+#    #+#             */
/*   Updated: 2024/03/20 13:13:51 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void
iter(T *arr, int len, void (*f)(T &)) {
    for (int i = 0; i < len; i++)
        f(arr[i]);
}