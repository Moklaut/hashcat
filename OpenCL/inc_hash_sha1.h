/**
 * Author......: See docs/credits.txt
 * License.....: MIT
 */

DECLSPEC void sha1_transform (const u32 *w0, const u32 *w1, const u32 *w2, const u32 *w3, u32 *digest);
DECLSPEC void sha1_init (sha1_ctx_t *ctx);
DECLSPEC void sha1_update_64 (sha1_ctx_t *ctx, u32 *w0, u32 *w1, u32 *w2, u32 *w3, const int len);
DECLSPEC void sha1_update (sha1_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void sha1_update_swap (sha1_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void sha1_update_utf16le (sha1_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void sha1_update_utf16le_swap (sha1_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void sha1_update_utf16be (sha1_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void sha1_update_utf16be_swap (sha1_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void sha1_update_global (sha1_ctx_t *ctx, const GLOBAL_AS u32 *w, const int len);
DECLSPEC void sha1_update_global_swap (sha1_ctx_t *ctx, const GLOBAL_AS u32 *w, const int len);
DECLSPEC void sha1_update_global_utf16le (sha1_ctx_t *ctx, const GLOBAL_AS u32 *w, const int len);
DECLSPEC void sha1_update_global_utf16le_swap (sha1_ctx_t *ctx, const GLOBAL_AS u32 *w, const int len);
DECLSPEC void sha1_update_global_utf16be (sha1_ctx_t *ctx, const GLOBAL_AS u32 *w, const int len);
DECLSPEC void sha1_update_global_utf16be_swap (sha1_ctx_t *ctx, const GLOBAL_AS u32 *w, const int len);
DECLSPEC void sha1_final (sha1_ctx_t *ctx);
DECLSPEC void sha1_hmac_init_64 (sha1_hmac_ctx_t *ctx, const u32 *w0, const u32 *w1, const u32 *w2, const u32 *w3);
DECLSPEC void sha1_hmac_init (sha1_hmac_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void sha1_hmac_init_swap (sha1_hmac_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void sha1_hmac_init_global (sha1_hmac_ctx_t *ctx, GLOBAL_AS const u32 *w, const int len);
DECLSPEC void sha1_hmac_init_global_swap (sha1_hmac_ctx_t *ctx, GLOBAL_AS const u32 *w, const int len);
DECLSPEC void sha1_hmac_update_64 (sha1_hmac_ctx_t *ctx, u32 *w0, u32 *w1, u32 *w2, u32 *w3, const int len);
DECLSPEC void sha1_hmac_update (sha1_hmac_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void sha1_hmac_update_swap (sha1_hmac_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void sha1_hmac_update_utf16le (sha1_hmac_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void sha1_hmac_update_utf16le_swap (sha1_hmac_ctx_t *ctx, const u32 *w, const int len);
DECLSPEC void sha1_hmac_update_global (sha1_hmac_ctx_t *ctx, const GLOBAL_AS u32 *w, const int len);
DECLSPEC void sha1_hmac_update_global_swap (sha1_hmac_ctx_t *ctx, const GLOBAL_AS u32 *w, const int len);
DECLSPEC void sha1_hmac_update_global_utf16le (sha1_hmac_ctx_t *ctx, const GLOBAL_AS u32 *w, const int len);
DECLSPEC void sha1_hmac_update_global_utf16le_swap (sha1_hmac_ctx_t *ctx, const GLOBAL_AS u32 *w, const int len);
DECLSPEC void sha1_hmac_final (sha1_hmac_ctx_t *ctx);
DECLSPEC void sha1_transform_vector (const u32x *w0, const u32x *w1, const u32x *w2, const u32x *w3, u32x *digest);
DECLSPEC void sha1_init_vector (sha1_ctx_vector_t *ctx);
DECLSPEC void sha1_init_vector_from_scalar (sha1_ctx_vector_t *ctx, sha1_ctx_t *ctx0);
DECLSPEC void sha1_update_vector_64 (sha1_ctx_vector_t *ctx, u32x *w0, u32x *w1, u32x *w2, u32x *w3, const int len);
DECLSPEC void sha1_update_vector (sha1_ctx_vector_t *ctx, const u32x *w, const int len);
DECLSPEC void sha1_update_vector_swap (sha1_ctx_vector_t *ctx, const u32x *w, const int len);
DECLSPEC void sha1_update_vector_utf16le (sha1_ctx_vector_t *ctx, const u32x *w, const int len);
DECLSPEC void sha1_update_vector_utf16le_swap (sha1_ctx_vector_t *ctx, const u32x *w, const int len);
DECLSPEC void sha1_update_vector_utf16leN (sha1_ctx_vector_t *ctx, const u32x *w, const int len);
DECLSPEC void sha1_update_vector_utf16beN (sha1_ctx_vector_t *ctx, const u32x *w, const int len);
DECLSPEC void sha1_final_vector (sha1_ctx_vector_t *ctx);
DECLSPEC void sha1_hmac_init_vector_64 (sha1_hmac_ctx_vector_t *ctx, const u32x *w0, const u32x *w1, const u32x *w2, const u32x *w3);
DECLSPEC void sha1_hmac_init_vector (sha1_hmac_ctx_vector_t *ctx, const u32x *w, const int len);
DECLSPEC void sha1_hmac_update_vector_64 (sha1_hmac_ctx_vector_t *ctx, u32x *w0, u32x *w1, u32x *w2, u32x *w3, const int len);
DECLSPEC void sha1_hmac_update_vector (sha1_hmac_ctx_vector_t *ctx, const u32x *w, const int len);
DECLSPEC void sha1_hmac_final_vector (sha1_hmac_ctx_vector_t *ctx);
