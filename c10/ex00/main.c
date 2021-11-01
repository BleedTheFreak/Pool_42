/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 08:22:58 by ytaya             #+#    #+#             */
/*   Updated: 2021/10/12 09:01:22 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>  
#include <unistd.h>

int main(int argc, char **argv)
{
	int fd_to_file = open("taya.txt", O_CREAT | O_WRONLY, 0644);
	if (fd_to_file != -1)
		write(fd_to_file, "Taya Yassine!\n", 15);
	close(fd_to_file);

	fd_to_file = open("taya.txt", O_RDONLY);
	char tab[15];
	read(fd_to_file , tab, 15);
	tab[14] = '\0';
	close(fd_to_file);
	int i = 0;
	while (tab[i])
		write(1, &tab[i++], 1);
	return (0);
}
