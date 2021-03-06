/**
 * Author......: See docs/credits.txt
 * License.....: MIT
 */

DECLSPEC void sha512_transform (const u32 *w0, const u32 *w1, const u32 *w2, const u32 *w3, const u32 *w4, const u32 *w5, const u32 *w6, const u32 *w7, u64 *digest);
DECLSPEC void sha512_init (sha512_ctx_t *ctx);
DECLSPEC void sha512_update_128 (sha512_ctx_t *ctx, u32 *w0, u32 *w1, u32 *w2, u32 *w3, u32 *w4, u32 *w5, u32 *w6, u32 *w7, const int len);
DECLSPEC void sha512_update (sha512_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void sha512_update_swap (sha512_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void sha512_update_utf16le (sha512_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void sha512_update_utf16le_swap (sha512_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void sha512_update_global (sha512_ctx_t *ctx, const GLOBAL_AS u32 *w, const int len);
DECLSPEC void sha512_update_global_swap (sha512_ctx_t *ctx, const GLOBAL_AS u32 *w, const int len);
DECLSPEC void sha512_update_global_utf16le (sha512_ctx_t *ctx, const GLOBAL_AS u32 *w, const int len);
DECLSPEC void sha512_update_global_utf16le_swap (sha512_ctx_t *ctx, const GLOBAL_AS u32 *w, const int len);
DECLSPEC void sha512_final (sha512_ctx_t *ctx);
DECLSPEC void sha512_hmac_init_128 (sha512_hmac_ctx_t *ctx, const u32 *w0, const u32 *w1, const u32 *w2, const u32 *w3, const u32 *w4, const u32 *w5, const u32 *w6, const u32 *w7);
DECLSPEC void sha512_hmac_init (sha512_hmac_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void sha512_hmac_init_swap (sha512_hmac_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void sha512_hmac_init_global (sha512_hmac_ctx_t *ctx, GLOBAL_AS const u32 *w, const int len);
DECLSPEC void sha512_hmac_init_global_swap (sha512_hmac_ctx_t *ctx, GLOBAL_AS const u32 *w, const int len);
DECLSPEC void sha512_hmac_update_128 (sha512_hmac_ctx_t *ctx, u32 *w0, u32 *w1, u32 *w2, u32 *w3, u32 *w4, u32 *w5, u32 *w6, u32 *w7, const int len);
DECLSPEC void sha512_hmac_update (sha512_hmac_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void sha512_hmac_update_swap (sha512_hmac_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void sha512_hmac_update_utf16le (sha512_hmac_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void sha512_hmac_update_utf16le_swap (sha512_hmac_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void sha512_hmac_update_global (sha512_hmac_ctx_t *ctx, const GLOBAL_AS u32 *w, const int len);
DECLSPEC void sha512_hmac_update_global_swap (sha512_hmac_ctx_t *ctx, const GLOBAL_AS u32 *w, const int len);
DECLSPEC void sha512_hmac_update_global_utf16le (sha512_hmac_ctx_t *ctx, const GLOBAL_AS u32 *w, const int len);
DECLSPEC void sha512_hmac_update_global_utf16le_swap (sha512_hmac_ctx_t *ctx, const GLOBAL_AS u32 *w, const int len);
DECLSPEC void sha512_hmac_final (sha512_hmac_ctx_t *ctx);
DECLSPEC void sha512_transform_vector (const u32x *w0, const u32x *w1, const u32x *w2, const u32x *w3, const u32x *w4, const u32x *w5, const u32x *w6, const u32x *w7, u64x *digest);
DECLSPEC void sha512_init_vector (sha512_ctx_vector_t *ctx);
DECLSPEC void sha512_init_vector_from_scalar (sha512_ctx_vector_t *ctx, sha512_ctx_t *ctx0);
DECLSPEC void sha512_update_vector_128 (sha512_ctx_vector_t *ctx, u32x *w0, u32x *w1, u32x *w2, u32x *w3, u32x *w4, u32x *w5, u32x *w6, u32x *w7, const int len);
DECLSPEC void sha512_update_vector (sha512_ctx_vector_t *ctx, const u32x *w, const int len);
DECLSPEC void sha512_update_vector_swap (sha512_ctx_vector_t *ctx, const u32x *w, const int len);
DECLSPEC void sha512_update_vector_utf16le (sha512_ctx_vector_t *ctx, const u32x *w, const int len);
DECLSPEC void sha512_update_vector_utf16le_swap (sha512_ctx_vector_t *ctx, const u32x *w, const int len);
DECLSPEC void sha512_update_vector_utf16beN (sha512_ctx_vector_t *ctx, const u32x *w, const int len);
DECLSPEC void sha512_final_vector (sha512_ctx_vector_t *ctx);
DECLSPEC void sha512_hmac_init_vector_128 (sha512_hmac_ctx_vector_t *ctx, const u32x *w0, const u32x *w1, const u32x *w2, const u32x *w3, const u32x *w4, const u32x *w5, const u32x *w6, const u32x *w7);
DECLSPEC void sha512_hmac_init_vector (sha512_hmac_ctx_vector_t *ctx, const u32x *w, const int len);
DECLSPEC void sha512_hmac_update_vector_128 (sha512_hmac_ctx_vector_t *ctx, u32x *w0, u32x *w1, u32x *w2, u32x *w3, u32x *w4, u32x *w5, u32x *w6, u32x *w7, const int len);
DECLSPEC void sha512_hmac_update_vector (sha512_hmac_ctx_vector_t *ctx, const u32x *w, const int len);
DECLSPEC void sha512_hmac_final_vector (sha512_hmac_ctx_vector_t *ctx);
