//
// Created by Roman Kutashenko on 2/13/18.
//

#ifndef NOISESOCKET_ENCODING_H
#define NOISESOCKET_ENCODING_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif

ns_result_t
ns_encoding_new(ns_encoding_t **ctx,
                void *recv_cipher,
                void *send_cipher);

ns_result_t
ns_encoding_free(ns_encoding_t *ctx);

ns_result_t
ns_encoding_encrypt(ns_encoding_t *ctx, uint8_t *data, size_t data_sz, size_t buf_sz, size_t *res_sz);

ns_result_t
ns_encoding_decrypt(ns_encoding_t *ctx, uint8_t *data, size_t data_sz, size_t *res_sz);

size_t
ns_encoding_required_buf_sz(size_t data_sz);

#ifdef __cplusplus
}
#endif

#endif //NOISESOCKET_NOISESOCKET_H
