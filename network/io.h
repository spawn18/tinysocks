
#ifndef ACE_IO_H
#define ACE_IO_H

#include "misc/defs.h"

#include <stddef.h>

bool recv_all(sock_t, char*, size_t);
bool send_all(sock_t, const char*, size_t);
void handle_io(sock_t, sock_t);

#endif
