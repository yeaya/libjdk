#include <javax/security/sasl/SaslClient.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace security {
		namespace sasl {

$MethodInfo _SaslClient_MethodInfo_[] = {
	{"dispose", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SaslClient, dispose, void), "javax.security.sasl.SaslException"},
	{"evaluateChallenge", "([B)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SaslClient, evaluateChallenge, $bytes*, $bytes*), "javax.security.sasl.SaslException"},
	{"getMechanismName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SaslClient, getMechanismName, $String*)},
	{"getNegotiatedProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SaslClient, getNegotiatedProperty, $Object*, $String*)},
	{"hasInitialResponse", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SaslClient, hasInitialResponse, bool)},
	{"isComplete", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SaslClient, isComplete, bool)},
	{"unwrap", "([BII)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SaslClient, unwrap, $bytes*, $bytes*, int32_t, int32_t), "javax.security.sasl.SaslException"},
	{"wrap", "([BII)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SaslClient, wrap, $bytes*, $bytes*, int32_t, int32_t), "javax.security.sasl.SaslException"},
	{}
};

$ClassInfo _SaslClient_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.security.sasl.SaslClient",
	nullptr,
	nullptr,
	nullptr,
	_SaslClient_MethodInfo_
};

$Object* allocate$SaslClient($Class* clazz) {
	return $of($alloc(SaslClient));
}

$Class* SaslClient::load$($String* name, bool initialize) {
	$loadClass(SaslClient, name, initialize, &_SaslClient_ClassInfo_, allocate$SaslClient);
	return class$;
}

$Class* SaslClient::class$ = nullptr;

		} // sasl
	} // security
} // javax