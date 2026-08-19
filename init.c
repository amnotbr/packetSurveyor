
#include "include/init.h"



int getLocalIp(string_view *localIp)
{
  struct ifaddrs *info = { 0 };

  int status = 0;
  status = getifaddrs(&info);

  if (status == -1)
  {
    fprintf(stderr, "Error getting local ip address: %s\n", strerror(errno));
    return -1;
  }


  return 0;
}
