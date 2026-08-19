#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <ifaddrs.h>
#include <string.h>
#include <errno.h>

typedef struct {
  char *str;
  size_t str_size;
} string_view;

int getLocalIp(string_view *localIp);
