#include <sun/security/krb5/KdcComm$KdcCommunication.h>
#include <java/net/SocketTimeoutException.h>
#include <sun/security/krb5/KdcComm.h>
#include <sun/security/krb5/internal/NetClient.h>
#include <jcpp.h>

#undef DEBUG

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketTimeoutException = ::java::net::SocketTimeoutException;
using $KdcComm = ::sun::security::krb5::KdcComm;
using $NetClient = ::sun::security::krb5::internal::NetClient;

namespace sun {
	namespace security {
		namespace krb5 {

void KdcComm$KdcCommunication::init$($String* kdc, int32_t port, bool useTCP, int32_t timeout, int32_t retries, $bytes* obuf) {
	$set(this, kdc, kdc);
	this->port = port;
	this->useTCP = useTCP;
	this->timeout = timeout;
	this->retries = retries;
	$set(this, obuf, obuf);
}

$Object* KdcComm$KdcCommunication::run() {
	$useLocalObjectStack();
	$var($bytes, ibuf, nullptr);
	for (int32_t i = 1; i <= this->retries; ++i) {
		$var($String, proto, this->useTCP ? "TCP"_s : "UDP"_s);
		$init($KdcComm);
		if ($KdcComm::DEBUG) {
			$nc($System::out)->println($$str({">>> KDCCommunication: kdc="_s, this->kdc, " "_s, proto, ":"_s, $$str(this->port), ", timeout="_s, $$str(this->timeout), ",Attempt ="_s, $$str(i), ", #bytes="_s, $$str($nc(this->obuf)->length)}));
		}
		try {
			$var($NetClient, kdcClient, $NetClient::getInstance(proto, this->kdc, this->port, this->timeout));
			$var($Throwable, var$0, nullptr);
			bool break$1 = false;
			try {
				try {
					$nc(kdcClient)->send(this->obuf);
					$assign(ibuf, kdcClient->receive());
					// break;
					break$1 = true;
					goto $finally;
				} catch ($Throwable& t$) {
					if (kdcClient != nullptr) {
						try {
							kdcClient->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$2) {
				$assign(var$0, var$2);
			} $finally: {
				if (kdcClient != nullptr) {
					kdcClient->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (break$1) {
				break;
			}
		} catch ($SocketTimeoutException& se) {
			if ($KdcComm::DEBUG) {
				$nc($System::out)->println($$str({"SocketTimeOutException with attempt: "_s, $$str(i)}));
			}
			if (i == this->retries) {
				$assign(ibuf, nullptr);
				$throw(se);
			}
		}
	}
	return ibuf;
}

KdcComm$KdcCommunication::KdcComm$KdcCommunication() {
}

$Class* KdcComm$KdcCommunication::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"kdc", "Ljava/lang/String;", nullptr, $PRIVATE, $field(KdcComm$KdcCommunication, kdc)},
		{"port", "I", nullptr, $PRIVATE, $field(KdcComm$KdcCommunication, port)},
		{"useTCP", "Z", nullptr, $PRIVATE, $field(KdcComm$KdcCommunication, useTCP)},
		{"timeout", "I", nullptr, $PRIVATE, $field(KdcComm$KdcCommunication, timeout)},
		{"retries", "I", nullptr, $PRIVATE, $field(KdcComm$KdcCommunication, retries)},
		{"obuf", "[B", nullptr, $PRIVATE, $field(KdcComm$KdcCommunication, obuf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;IZII[B)V", nullptr, $PUBLIC, $method(KdcComm$KdcCommunication, init$, void, $String*, int32_t, bool, int32_t, int32_t, $bytes*)},
		{"run", "()[B", nullptr, $PUBLIC, $virtualMethod(KdcComm$KdcCommunication, run, $Object*), "java.io.IOException,sun.security.krb5.KrbException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.krb5.KdcComm$KdcCommunication", "sun.security.krb5.KdcComm", "KdcCommunication", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.krb5.KdcComm$KdcCommunication",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<[B>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.krb5.KdcComm"
	};
	$loadClass(KdcComm$KdcCommunication, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KdcComm$KdcCommunication);
	});
	return class$;
}

$Class* KdcComm$KdcCommunication::class$ = nullptr;

		} // krb5
	} // security
} // sun