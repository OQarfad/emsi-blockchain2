#include "hblk_crypto.h"


/*
this function must creates a new EC key pair.

    Prototype: EC_KEY *ec_create(void);
    Your function must return a pointer to an EC_KEY structure, containing both the public and private keys, or NULL upon failure
    Both the private and the public keys must be generated
    You have to use the secp256k1 elliptic curve to create the new pair

*/

EC_KEY *ec_create(void){


	
	EC_KEY *my_ec_k;

	/*
	int secp=NULL;	
	secp= OBJ_txt2nid("secp521r1");*/
	

	my_ec_k = EC_KEY_new_by_curve_name(EC_CURVE);
	
	if((!EC_KEY_generate_key(my_ec_k))||(!my_ec_k))
		return NULL;
		
	return (my_ec_k);
}
