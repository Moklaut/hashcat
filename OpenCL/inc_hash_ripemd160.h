/**
 * Author......: See docs/credits.txt
 * License.....: MIT
 */

DECLSPEC void ripemd160_transform (const u32 *w0, const u32 *w1, const u32 *w2, const u32 *w3, u32 *digest);
DECLSPEC void ripemd160_init (ripemd160_ctx_t *ctx);
DECLSPEC void ripemd160_update_64 (ripemd160_ctx_t *ctx, u32 *w0, u32 *w1, u32 *w2, u32 *w3, const int len);
DECLSPEC void ripemd160_update (ripemd160_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void ripemd160_update_swap (ripemd160_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void ripemd160_update_utf16le (ripemd160_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void ripemd160_update_utf16le_swap (ripemd160_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void ripemd160_update_global (ripemd160_ctx_t *ctx, const GLOBAL_AS u32 *w, const int len);
DECLSPEC void ripemd160_update_global_swap (ripemd160_ctx_t *ctx, const GLOBAL_AS u32 *w, const int len);
DECLSPEC void ripemd160_update_global_utf16le (ripemd160_ctx_t *ctx, const GLOBAL_AS u32 *w, const int len);
DECLSPEC void ripemd160_update_global_utf16le_swap (ripemd160_ctx_t *ctx, const GLOBAL_AS u32 *w, const int len);
DECLSPEC void ripemd160_final (ripemd160_ctx_t *ctx);
DECLSPEC void ripemd160_hmac_init_64 (ripemd160_hmac_ctx_t *ctx, const u32 *w0, const u32 *w1, const u32 *w2, const u32 *w3);
DECLSPEC void ripemd160_hmac_init (ripemd160_hmac_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void ripemd160_hmac_init_swap (ripemd160_hmac_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void ripemd160_hmac_init_global (ripemd160_hmac_ctx_t *ctx, GLOBAL_AS const u32 *w, const int len);
DECLSPEC void ripemd160_hmac_init_global_swap (ripemd160_hmac_ctx_t *ctx, GLOBAL_AS const u32 *w, const int len);
DECLSPEC void ripemd160_hmac_update_64 (ripemd160_hmac_ctx_t *ctx, u32 *w0, u32 *w1, u32 *w2, u32 *w3, const int len);
DECLSPEC void ripemd160_hmac_update (ripemd160_hmac_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void ripemd160_hmac_update_swap (ripemd160_hmac_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void ripemd160_hmac_update_utf16le (ripemd160_hmac_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void ripemd160_hmac_update_utf16le_swap (ripemd160_hmac_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void ripemd160_hmac_update_global (ripemd160_hmac_ctx_t *ctx, const GLOBAL_AS u32 *w, const int len);
DECLSPEC void ripemd160_hmac_update_global_swap (ripemd160_hmac_ctx_t *ctx, const GLOBAL_AS u32 *w, const int len);
DECLSPEC void ripemd160_hmac_update_global_utf16le (ripemd160_hmac_ctx_t *ctx, const GLOBAL_AS u32 *w, const int len);
DECLSPEC void ripemd160_hmac_update_global_utf16le_swap (ripemd160_hmac_ctx_t *ctx, const GLOBAL_AS u32 *w, const int len);
DECLSPEC void ripemd160_hmac_final (ripemd160_hmac_ctx_t *ctx);
DECLSPEC void ripemd160_transform_vector (const u32x *w0, const u32x *w1, const u32x *w2, const u32x *w3, u32x *digest);
DECLSPEC void ripemd160_init_vector (ripemd160_ctx_vector_t *ctx);
DECLSPEC void ripemd160_init_vector_from_scalar (ripemd160_ctx_vector_t *ctx, ripemd160_ctx_t *ctx0);
DECLSPEC void ripemd160_update_vector_64 (ripemd160_ctx_vector_t *ctx, u32x *w0, u32x *w1, u32x *w2, u32x *w3, const int len);
DECLSPEC void ripemd160_update_vector (ripemd160_ctx_vector_t *ctx, const u32x *w, const int len);
DECLSPEC void ripemd160_update_vector_swap (ripemd160_ctx_vector_t *ctx, const u32x *w, const int len);
DECLSPEC void ripemd160_update_vector_utf16le (ripemd160_ctx_vector_t *ctx, const u32x *w, const int len);
DECLSPEC void ripemd160_update_vector_utf16le_swap (ripemd160_ctx_vector_t *ctx, const u32x *w, const int len);
DECLSPEC void ripemd160_final_vector (ripemd160_ctx_vector_t *ctx);
DECLSPEC void ripemd160_hmac_init_vector_64 (ripemd160_hmac_ctx_vector_t *ctx, const u32x *w0, const u32x *w1, const u32x *w2, const u32x *w3);
DECLSPEC void ripemd160_hmac_init_vector (ripemd160_hmac_ctx_vector_t *ctx, const u32x *w, const int len);
DECLSPEC void ripemd160_hmac_update_vector_64 (ripemd160_hmac_ctx_vector_t *ctx, u32x *w0, u32x *w1, u32x *w2, u32x *w3, const int len);
DECLSPEC void ripemd160_hmac_update_vector (ripemd160_hmac_ctx_vector_t *ctx, const u32x *w, const int len);
DECLSPEC void ripemd160_hmac_final_vector (ripemd160_hmac_ctx_vector_t *ctx);
