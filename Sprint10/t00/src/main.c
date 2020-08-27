#include "header.h"

int main(int argc, char *argv[]) {
	int counter;
	char buffer;

	if (argc != 2) {
		mx_printerr("usage: ./read_file [file_path]\n");
		return -1;
	}
	counter = open(argv[1], O_RDONLY);
	if (counter == -1) {
		mx_printerr("error\n");
		return -1;
	}
	while (read(counter, &buffer, 1))
			write(1, &buffer, 1);
	close (counter);
	return 0;
}
