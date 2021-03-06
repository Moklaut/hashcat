/**
 * Author......: See docs/credits.txt
 * License.....: MIT
 */

DECLSPEC void sha384_transform (const u32 *w0, const u32 *w1, const u32 *w2, const u32 *w3, const u32 *w4, const u32 *w5, const u32 *w6, const u32 *w7, u64 *digest);
DECLSPEC void sha384_init (sha384_ctx_t *ctx);
DECLSPEC void sha384_update_128 (sha384_ctx_t *ctx, u32 *w0, u32 *w1, u32 *w2, u32 *w3, u32 *w4, u32 *w5, u32 *w6, u32 *w7, const int len);
DECLSPEC void sha384_update (sha384_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void sha384_update_swap (sha384_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void sha384_update_utf16le (sha384_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void sha384_update_utf16le_swap (sha384_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void sha384_update_global (sha384_ctx_t *ctx, const GLOBAL_AS u32 *w, const int len);
DECLSPEC void sha384_update_global_swap (sha384_ctx_t *ctx, const GLOBAL_AS u32 *w, const int len);
DECLSPEC void sha384_update_global_utf16le (sha384_ctx_t *ctx, const GLOBAL_AS u32 *w, const int len);
DECLSPEC void sha384_update_global_utf16le_swap (sha384_ctx_t *ctx, const GLOBAL_AS u32 *w, const int len);
DECLSPEC void sha384_final (sha384_ctx_t *ctx);
DECLSPEC void sha384_hmac_init_128 (sha384_hmac_ctx_t *ctx, const u32 *w0, const u32 *w1, const u32 *w2, const u32 *w3, const u32 *w4, const u32 *w5, const u32 *w6, const u32 *w7);
DECLSPEC void sha384_hmac_init (sha384_hmac_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void sha384_hmac_init_swap (sha384_hmac_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void sha384_hmac_init_global (sha384_hmac_ctx_t *ctx, GLOBAL_AS const u32 *w, const int len);
DECLSPEC void sha384_hmac_init_global_swap (sha384_hmac_ctx_t *ctx, GLOBAL_AS const u32 *w, const int len);
DECLSPEC void sha384_hmac_update_128 (sha384_hmac_ctx_t *ctx, u32 *w0, u32 *w1, u32 *w2, u32 *w3, u32 *w4, u32 *w5, u32 *w6, u32 *w7, const int len);
DECLSPEC void sha384_hmac_update (sha384_hmac_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void sha384_hmac_update_swap (sha384_hmac_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void sha384_hmac_update_utf16le (sha384_hmac_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void sha384_hmac_update_utf16le_swap (sha384_hmac_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void sha384_hmac_update_global (sha384_hmac_ctx_t *ctx, const GLOBAL_AS u32 *w, const int len);
DECLSPEC void sha384_hmac_update_global_swap (sha384_hmac_ctx_t *ctx, const GLOBAL_AS u32 *w, const int len);
DECLSPEC void sha384_hmac_update_global_utf16le (sha384_hmac_ctx_t *ctx, const GLOBAL_AS u32 *w, const int len);
DECLSPEC void sha384_hmac_update_global_utf16le_swap (sha384_hmac_ctx_t *ctx, const GLOBAL_AS u32 *w, const int len);
DECLSPEC void sha384_hmac_final (sha384_hmac_ctx_t *ctx);
DECLSPEC void sha384_transform_vector (const u32x *w0, const u32x *w1, const u32x *w2, const u32x *w3, const u32x *w4, const u32x *w5, const u32x *w6, const u32x *w7, u64x *digest);
DECLSPEC void sha384_init_vector (sha384_ctx_vector_t *ctx);
DECLSPEC void sha384_init_vector_from_scalar (sha384_ctx_vector_t *ctx, sha384_ctx_t *ctx0);
DECLSPEC void sha384_update_vector_128 (sha384_ctx_vector_t *ctx, u32x *w0, u32x *w1, u32x *w2, u32x *w3, u32x *w4, u32x *w5, u32x *w6, u32x *w7, const int len);
DECLSPEC void sha384_update_vector (sha384_ctx_vector_t *ctx, const u32x *w, const int len);
DECLSPEC void sha384_update_vector_swap (sha384_ctx_vector_t *ctx, const u32x *w, const int len);
DECLSPEC void sha384_update_vector_utf16le (sha384_ctx_vector_t *ctx, const u32x *w, const int len);
DECLSPEC void sha384_update_vector_utf16le_swap (sha384_ctx_vector_t *ctx, const u32x *w, const int len);
DECLSPEC void sha384_update_vector_utf16beN (sha384_ctx_vector_t *ctx, const u32x *w, const int len);
DECLSPEC void sha384_final_vector (sha384_ctx_vector_t *ctx);
DECLSPEC void sha384_hmac_init_vector_128 (sha384_hmac_ctx_vector_t *ctx, const u32x *w0, const u32x *w1, const u32x *w2, const u32x *w3, const u32x *w4, const u32x *w5, const u32x *w6, const u32x *w7);
DECLSPEC void sha384_hmac_init_vector (sha384_hmac_ctx_vector_t *ctx, const u32x *w, const int len);
DECLSPEC void sha384_hmac_update_vector_128 (sha384_hmac_ctx_vector_t *ctx, u32x *w0, u32x *w1, u32x *w2, u32x *w3, u32x *w4, u32x *w5, u32x *w6, u32x *w7, const int len);
DECLSPEC void sha384_hmac_update_vector (sha384_hmac_ctx_vector_t *ctx, const u32x *w, const int len);
DECLSPEC void sha384_hmac_final_vector (sha384_hmac_ctx_vector_t *ctx);
