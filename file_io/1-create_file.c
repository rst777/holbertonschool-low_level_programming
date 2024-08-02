#include "main.h"
#include <unistd.h> /* Pour write(), close()*/
#include <sys/stat.h> /* Pour les permissions*/
#include <fcntl.h> /*/ Pour open */
#include <string.h>
/**
 * create_file - Crée un fichier et écrit du contenu dans celui-ci.
 * @filename: Le nom du fichier à créer.
 * @text_content: Le contenu à écrire dans le fichier. Peut être NULL.
 *
 * Return: 1 en cas de succès, -1 en cas d'échec.
 */

int create_file(const char *filename, char *text_content)
{
		int fd;
		ssize_t written;
		ssize_t len;

	if (filename == NULL)
		return (-1);
/*
* Ouvre le fichier en mode écriture, crée-le s'il n'existe pas,
* et le tronque s'il existe déjà avec permission
*/
		fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
		if (fd == -1)
	{
		return (-1);
	}
/* Si text_content est NULL, ne rien écrire (fichier vide) */
		if (text_content != NULL)
	{
		len = strlen(text_content);
		written = write(fd, text_content, len);
		if (written != len)
		{
		close(fd);
		return (-1); /* Erreur d'écriture */
		}
	}
	/* Ferme le fichier */
	if (close(fd) == -1)
	{
		return (-1); /* Erreur de fermeture */
	}
	return (1); /* Succès */
}

