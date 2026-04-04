#include <javax/security/sasl/SaslClient.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace security {
		namespace sasl {

$Class* SaslClient::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
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
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.security.sasl.SaslClient",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SaslClient, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SaslClient);
	});
	return class$;
}

$Class* SaslClient::class$ = nullptr;

		} // sasl
	} // security
} // javax