/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class net_java_sip_communicator_impl_dns_UnboundApi */

#ifndef _Included_net_java_sip_communicator_impl_dns_UnboundApi
#define _Included_net_java_sip_communicator_impl_dns_UnboundApi
#ifdef __cplusplus
extern "C" {
#endif

/*
 * Class:     net_java_sip_communicator_impl_dns_UnboundApi
 * Method:    setDebugLevel
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_net_java_sip_communicator_impl_dns_UnboundApi_setDebugLevel
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     net_java_sip_communicator_impl_dns_UnboundApi
 * Method:    createContext
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_net_java_sip_communicator_impl_dns_UnboundApi_createContext
  (JNIEnv *, jclass);

/*
 * Class:     net_java_sip_communicator_impl_dns_UnboundApi
 * Method:    deleteContext
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_net_java_sip_communicator_impl_dns_UnboundApi_deleteContext
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_dns_UnboundApi
 * Method:    setForwarder
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_java_sip_communicator_impl_dns_UnboundApi_setForwarder
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     net_java_sip_communicator_impl_dns_UnboundApi
 * Method:    addTrustAnchor
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_java_sip_communicator_impl_dns_UnboundApi_addTrustAnchor
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     net_java_sip_communicator_impl_dns_UnboundApi
 * Method:    resolve
 * Signature: (JLjava/lang/String;II)Lnet/java/sip/communicator/impl/dns/UnboundResult;
 */
JNIEXPORT jobject JNICALL Java_net_java_sip_communicator_impl_dns_UnboundApi_resolve
  (JNIEnv *, jclass, jlong, jstring, jint, jint);

/*
 * Class:     net_java_sip_communicator_impl_dns_UnboundApi
 * Method:    resolveAsync
 * Signature: (JLjava/lang/String;IILjava/lang/Object;Lnet/java/sip/communicator/impl/dns/UnboundApi/UnboundCallback;)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_dns_UnboundApi_resolveAsync
  (JNIEnv *, jclass, jlong, jstring, jint, jint, jobject, jobject);

/*
 * Class:     net_java_sip_communicator_impl_dns_UnboundApi
 * Method:    cancelAsync
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_net_java_sip_communicator_impl_dns_UnboundApi_cancelAsync
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     net_java_sip_communicator_impl_dns_UnboundApi
 * Method:    errorCodeToString
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_java_sip_communicator_impl_dns_UnboundApi_errorCodeToString
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_java_sip_communicator_impl_dns_UnboundApi
 * Method:    processAsync
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_net_java_sip_communicator_impl_dns_UnboundApi_processAsync
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
