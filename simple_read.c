#include <unistd.h>

int main()
{
	char buffer[120];
	int nread;

	nread = read(0, buffer, 120);

	if (nread == -1)
		write(2, "A read error has occurred\n", 27);

	if ((write(1, buffer, nread)) != nread)
		write(2, "A write error has occurred\n", 28);

	//  exit(0);
	return 0;
}
