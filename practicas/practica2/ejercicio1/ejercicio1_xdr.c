/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "ejercicio1.h"

bool_t
xdr_operandos (XDR *xdrs, operandos *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->a))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->b))
		 return FALSE;
	return TRUE;
}
