gcc main.c log.c init.c -O2 -fsanitize=address -Wall -Wextra -DHAVE_PCAP -o main

./valgrind main

./main
