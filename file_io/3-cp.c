#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#define BUFFER_SIZE 1024
/**
 * print_error_and_exit - Affiche un message d'erreur et quitte le programme
 * @message: Le message d'erreur à afficher
 * @code: Le code de sortie à utiliser
 */
void print_error_and_exit(const char *message, int code)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}
/**
 * main - Copie le contenu d'un fichier vers un autre
 * @argc: Le nombre d'arguments de la ligne de commande
 * @argv: Le tableau des arguments de la ligne de commande
 *
 * Description: Ce programme copie le contenu d'un fichier vers un autre.
 * Si le nombre d'arguments est incorrect ou si une erreur survient,
 * un message d'erreur approprié est affiché et le programme quitte
 * avec le code d'erreur correspondant.
 *
 * Return: 0 en cas de succès, ou un code d'erreur approprié en cas d'échec
 * Codes d'erreur:
 * - 97: Nombre incorrect d'arguments
 * - 98: Erreur lors de la lecture du fichier source
 * - 99: Erreur lors de l'écriture dans le fichier de destination
 * - 100: Erreur lors de la fermeture des descripteurs de fichiers
 */
int main(int argc, char *argv[])
	{
	int fd_from, fd_to;
	ssize_t n_read, n_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{		print_error_and_exit("Usage: cp file_from file_to", 97); }
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)

	{		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
				exit(98); }
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)

	{		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				close(fd_from);
					exit(99); }
	while ((n_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{ n_written = write(fd_to, buffer, n_read);

	if (n_written != n_read)
	{		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				close(fd_from);
				close(fd_to);
					exit(99); }
	}
	if (n_read == -1)
	{		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
				close(fd_from);
				close(fd_to);
					exit(98); }
	if (close(fd_from) == -1)
	{		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
				close(fd_to);
					exit(100); }
	if (close(fd_to) == -1)
	{		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
				exit(100); }
	return (0);
}
