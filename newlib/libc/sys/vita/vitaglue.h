/*

Copyright (C) 2016, David "Davee" Morgan

Permission is hereby granted, free of charge, to any person obtaining a
copy of this software and associated documentation files (the "Software"),
to deal in the Software without restriction, including without limitation
the rights to use, copy, modify, merge, publish, distribute, sublicense,
and/or sell copies of the Software, and to permit persons to whom the
Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
DEALINGS IN THE SOFTWARE.

*/

#ifndef _VITAGLUE_H_
#define _VITAGLUE_H_

#include <psp2/types.h>

extern int __attribute__((weak)) __vita_glue_socket_close(SceUID scefd);
extern int __attribute__((weak)) __vita_glue_socket_recv(SceUID scefd, void *buf, size_t len, int flags);
extern int __attribute__((weak)) __vita_glue_socket_send(SceUID scefd, const void *buf, size_t len, int flags);

void _init_vita_heap();
void _init_vita_reent();
void _init_vita_malloc();
void _init_vita_io();

void _free_vita_io();
void _free_vita_malloc();
void _free_vita_reent();
void _free_vita_heap();

void _free_vita_newlib();
#endif // _VITAGLUE_H_
