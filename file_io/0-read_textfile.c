#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>


/**
 * read_textfile - Reads a text file and prints it to
 * the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters it should read and print.
 *
 * Return: The actual number of letters it could read and print,
 * or 0 if the file cannot be opened or read, if filename is NULL,
 * or if write fails or does not write the expected amount of bytes.
 */

	ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* Descripteur de fichier */
	ssize_t bytes_read, bytes_written; /* Nombre de caractère lus et écrits */
	char *buffer; /* Buffer pour stocker les caractères lus */

	if (filename == NULL)
	return (0);

	fd = open(filename, O_RDONLY); /* Ouvre le fichier en mode lecture */
	if (fd == -1) /* Vérifie si l'ouverture du fichier a échoué */
		return (0);

	/* Alloue de la mémoire au buffer */
	buffer = (char *)malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd); /* Ferme le fichier */
		return (0);
	}

	bytes_read = read(fd, buffer, letters); /* Lit les caractères du fichier */
	if (bytes_read == -1) /* Vérifie si la lecture échoue */
	{
		free(buffer); /* Libère la mémoire allouée */
		close(fd); /* Ferme le fichier */
		return (0);
	}
	/* Affiche les caractères lus */
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	free(buffer);
	close(fd);

	/* Vérifie si l'écriture échoue*/
	if (bytes_written == -1 || bytes_written != bytes_read)
		return (0);

	 /* Retourne le nombre de caractères lus et affichés */
	return (bytes_written);
}
