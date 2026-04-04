#include <com/sun/jndi/ldap/Connection$HandshakeListener.h>
#include <com/sun/jndi/ldap/Connection.h>
#include <java/io/IOException.h>
#include <java/security/cert/Certificate.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <javax/naming/CommunicationException.h>
#include <javax/net/ssl/HandshakeCompletedEvent.h>
#include <javax/net/ssl/SSLPeerUnverifiedException.h>
#include <javax/net/ssl/SSLSocket.h>
#include <jcpp.h>

using $CertificateArray = $Array<::java::security::cert::Certificate>;
using $Connection = ::com::sun::jndi::ldap::Connection;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $CommunicationException = ::javax::naming::CommunicationException;
using $HandshakeCompletedEvent = ::javax::net::ssl::HandshakeCompletedEvent;
using $SSLPeerUnverifiedException = ::javax::net::ssl::SSLPeerUnverifiedException;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

void Connection$HandshakeListener::init$($Connection* this$0) {
	$set(this, this$0, this$0);
	$set(this, tlsHandshakeCompleted, $new($CompletableFuture));
}

void Connection$HandshakeListener::handshakeCompleted($HandshakeCompletedEvent* event) {
	$useLocalObjectStack();
	try {
		$var($X509Certificate, tlsServerCert, nullptr);
		$var($CertificateArray, certs, nullptr);
		if ($$nc($nc(event)->getSocket())->getUseClientMode()) {
			$assign(certs, event->getPeerCertificates());
		} else {
			$assign(certs, event->getLocalCertificates());
		}
		if (certs != nullptr && certs->length > 0 && $instanceOf($X509Certificate, certs->get(0))) {
			$assign(tlsServerCert, $cast($X509Certificate, certs->get(0)));
		}
		this->tlsHandshakeCompleted->complete(tlsServerCert);
	} catch ($SSLPeerUnverifiedException& ex) {
		$var($CommunicationException, ce, $new($CommunicationException));
		ce->setRootCause(this->this$0->closureReason);
		this->tlsHandshakeCompleted->completeExceptionally(ex);
	}
}

Connection$HandshakeListener::Connection$HandshakeListener() {
}

$Class* Connection$HandshakeListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/jndi/ldap/Connection;", nullptr, $FINAL | $SYNTHETIC, $field(Connection$HandshakeListener, this$0)},
		{"tlsHandshakeCompleted", "Ljava/util/concurrent/CompletableFuture;", "Ljava/util/concurrent/CompletableFuture<Ljava/security/cert/X509Certificate;>;", $PRIVATE | $FINAL, $field(Connection$HandshakeListener, tlsHandshakeCompleted)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/jndi/ldap/Connection;)V", nullptr, $PRIVATE, $method(Connection$HandshakeListener, init$, void, $Connection*)},
		{"handshakeCompleted", "(Ljavax/net/ssl/HandshakeCompletedEvent;)V", nullptr, $PUBLIC, $virtualMethod(Connection$HandshakeListener, handshakeCompleted, void, $HandshakeCompletedEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jndi.ldap.Connection$HandshakeListener", "com.sun.jndi.ldap.Connection", "HandshakeListener", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jndi.ldap.Connection$HandshakeListener",
		"java.lang.Object",
		"javax.net.ssl.HandshakeCompletedListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jndi.ldap.Connection"
	};
	$loadClass(Connection$HandshakeListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Connection$HandshakeListener);
	});
	return class$;
}

$Class* Connection$HandshakeListener::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com