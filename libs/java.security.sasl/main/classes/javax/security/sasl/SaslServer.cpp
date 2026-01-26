#include <javax/security/sasl/SaslServer.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace security {
		namespace sasl {

$MethodInfo _SaslServer_MethodInfo_[] = {
	{"dispose", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SaslServer, dispose, void), "javax.security.sasl.SaslException"},
	{"evaluateResponse", "([B)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SaslServer, evaluateResponse, $bytes*, $bytes*), "javax.security.sasl.SaslException"},
	{"getAuthorizationID", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SaslServer, getAuthorizationID, $String*)},
	{"getMechanismName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SaslServer, getMechanismName, $String*)},
	{"getNegotiatedProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SaslServer, getNegotiatedProperty, $Object*, $String*)},
	{"isComplete", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SaslServer, isComplete, bool)},
	{"unwrap", "([BII)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SaslServer, unwrap, $bytes*, $bytes*, int32_t, int32_t), "javax.security.sasl.SaslException"},
	{"wrap", "([BII)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SaslServer, wrap, $bytes*, $bytes*, int32_t, int32_t), "javax.security.sasl.SaslException"},
	{}
};

$ClassInfo _SaslServer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.security.sasl.SaslServer",
	nullptr,
	nullptr,
	nullptr,
	_SaslServer_MethodInfo_
};

$Object* allocate$SaslServer($Class* clazz) {
	return $of($alloc(SaslServer));
}

$Class* SaslServer::load$($String* name, bool initialize) {
	$loadClass(SaslServer, name, initialize, &_SaslServer_ClassInfo_, allocate$SaslServer);
	return class$;
}

$Class* SaslServer::class$ = nullptr;

		} // sasl
	} // security
} // javax