/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_otool.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvallee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 22:56:56 by tvallee           #+#    #+#             */
/*   Updated: 2018/01/02 23:11:27 by tvallee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void		usage(const char *name)
{
   ft_putstr_fd("usage: ", 2);
   ft_putstr_fd(name, 2);
   ft_putendl_fd(" [-t] file...", 2);
}

int main()
{
	write(1, "otool\n", 6);
}
