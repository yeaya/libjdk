#include <sun/security/krb5/internal/NetClient.h>

#include <sun/security/krb5/internal/TCPClient.h>
#include <sun/security/krb5/internal/UDPClient.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TCPClient = ::sun::security::krb5::internal::TCPClient;
using $UDPClient = ::sun::security::krb5::internal::UDPClient;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {

$MethodInfo _NetClient_MethodInfo_[] = {
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "()V", nullptr, $PUBLIC, $method(NetClient, init$, void)},
	{"getInstance", "(Ljava/lang/String;Ljava/lang/String;II)Lsun/security/krb5/internal/NetClient;", nullptr, $PUBLIC | $STATIC, $staticMethod(NetClient, getInstance, NetClient*, $String*, $String*, int32_t, int32_t), "java.io.IOException"},
	{"receive", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NetClient, receive, $bytes*), "java.io.IOException"},
	{"send", "([B)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NetClient, send, void, $bytes*), "java.io.IOException"},
	{}
};

$ClassInfo _NetClient_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.security.krb5.internal.NetClient",
	"java.lang.Object",
	"java.lang.AutoCloseable",
	nullptr,
	_NetClient_MethodInfo_
};

$Object* allocate$NetClient($Class* clazz) {
	return $of($alloc(NetClient));
}

void NetClient::init$() {
}

NetClient* NetClient::getInstance($String* protocol, $String* hostname, int32_t port, int32_t timeout) {
	$init(NetClient);
	if ($nc(protocol)->equals("TCP"_s)) {
		return $new($TCPClient, hostname, port, timeout);
	} else {
		return $new($UDPClient, hostname, port, timeout);
	}
}

NetClient::NetClient() {
}

$Class* NetClient::load$($String* name, bool initialize) {
	$loadClass(NetClient, name, initialize, &_NetClient_ClassInfo_, allocate$NetClient);
	return class$;
}

$Class* NetClient::class$ = nullptr;

			} // internal
		} // krb5
	} // security
} // sun