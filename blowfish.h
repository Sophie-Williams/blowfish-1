#ifndef __BLOWFISH_H__
#define __BLOWFISH_H__

#include "inttypes.h"

typedef struct {
	u32 p[18];
	u32 s[4][256];
} bf_context;

void bf_init(bf_context *bf, byte *key, size_t len);

void bf_encrypt(bf_context *bf, byte *data, size_t len);
void bf_decrypt(bf_context *bf, byte *data, size_t len);

#endif // __BLOWFISH_H__