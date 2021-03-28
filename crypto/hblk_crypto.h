#include <openssl/sha.h>
#include <stdint.h>
#include <openssl/ec.h>
#include <openssl/obj_mac.h>

#define EC_CURVE NID_secp256k1

/* EC_KEY public key octet string length (using 256-bit curve) */
#define EC_PUB_LEN 65
/* Maximum signature octet string length (using 256-bit curve) */
#define SIG_MAX_LEN 72

#define PRI_FILENAME "key.pem"
#define PUB_FILENAME "key_pub.pem"


typedef struct sig_s
{
    uint8_t sig[SIG_MAX_LEN];
    uint8_t len;
} sig_t;

uint8_t *sha256(int8_t const *s, size_t len, uint8_t digest[SHA256_DIGEST_LENGTH]);

void _print_hex_buffer(uint8_t const *buf, size_t len);
