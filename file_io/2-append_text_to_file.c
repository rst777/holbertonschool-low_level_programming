#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>
/**
 * append_text_to_file - Ajoute du texte à la fin d'un fichier.
 * @filename: Le nom du fichier.
 * @text_content: La chaîne de caractères terminée par NULL
 * à ajouter à la fin du fichier.
 * Description: Cette fonction ajoute une chaîne de texte donnée
 * à la fin d'un fichier.
 * Si le fichier n'existe pas, ou s'il n'est pas possible d'ouvrir
 * le fichier en écriture, la fonction renverra -1.
 *  Si le nom du fichier est NULL, la fonction
 * renverra également -1. Si text_content est NULL,
 * rien n'est ajouté au fichier,
 * mais la fonction renverra 1 si le fichier existe.
 * Return: 1 en cas de succès, -1 en cas d'échec.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written;

/* Vérifier le filename est NULL */
	if (filename == NULL)
	{
		return (-1);
	}

/* Ouvrir le fichier en mode ajout */
		fd = open(filename, O_WRONLY | O_APPEND);

/* Si le fichier n'existe pas ou une erreur d'ouverture */
		if (fd == -1)
	{
		return (-1);
	}
/* Si text_content est NULL, fermer le fichier et retourner 1 */
		if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
/* Ecrire le texte à la fin du fichier */
	written = write(fd, text_content, strlen(text_content));

/* Ferme le fichier */
		close(fd);

/* Vérifier si l'écriture a réussi */
		if (written == -1)
		{
		return(-1);
		}
	return (1);
}
