#include "main.h"
#include <unistd.h> /* Pour write(), close()*/
#include <stdio.h> /* Pour perror*/
#include <sys/stat.h> /* Pour les permissions*/
#include <fcntl.h> /*/ Pour open */
#include <string.h>


int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written; /* Déclaration pout=r la taille de l'écriture */

	if (filename == NULL)
	{
		return (-1);
	}
/* Ouvre le fichier avec les options suivantes : */
/* O_CREAT : Crée le fichier s'il n'existe pas */
/* O_WRONLY : Ouvre en écriture seulement */
/* O_TRUNC : Tronque (vide) le fichier s'il existe déjà */
/* 0600 : Permissions rw------- */

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
	perror("Erreur lors de l'ouverture du fichier");
	return (-1); /* Erreur d'ouverture du fichier */
	}

/* Si text_content n'est pas NULL, écris le contenu dans le fichier */
	if (text_content != NULL)
	{
		size_t length = strlen(text_content);

		bytes_written = write(fd, text_content, length);
		if (bytes_written == -1)
		{
		perror("Erreur lors de l'écriture dans le fichier");
		close(fd);
		return (-1); /* Erreur d'écriture */
		}
	}
	/* Ferme le fichier */
	if (close(fd) == -1)
	{
		perror("Erreur lors de la fermeture du fichier");
		return (-1); /* Erreur de fermeture */
	}
	return (1); /* Succès */
}

