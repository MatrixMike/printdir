#include <unistd.h>

int main()
{
	if ((write(1, "Here is some data\n", 18)) != 18)
		write(2, "A write error has occurred on file decriptor 1\n",
		      47);

	//  exit(0);
	return 0;
}
