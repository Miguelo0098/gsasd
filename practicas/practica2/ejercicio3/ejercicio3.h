/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _EJERCICIO3_H_RPCGEN
#define _EJERCICIO3_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct operandos {
	int a;
	int b;
};
typedef struct operandos operandos;

#define SUMA_PROG 0x20000001
#define SUMA_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define SUMA 1
extern  int * suma_1(operandos *, CLIENT *);
extern  int * suma_1_svc(operandos *, struct svc_req *);
extern int suma_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define SUMA 1
extern  int * suma_1();
extern  int * suma_1_svc();
extern int suma_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_operandos (XDR *, operandos*);

#else /* K&R C */
extern bool_t xdr_operandos ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_EJERCICIO3_H_RPCGEN */
