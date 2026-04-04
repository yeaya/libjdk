#include <javax/security/sasl/SaslClientFactory.h>
#include <java/util/Map.h>
#include <javax/security/auth/callback/CallbackHandler.h>
#include <javax/security/sasl/SaslClient.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $CallbackHandler = ::javax::security::auth::callback::CallbackHandler;
using $SaslClient = ::javax::security::sasl::SaslClient;

namespace javax {
	namespace security {
		namespace sasl {

$Class* SaslClientFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"createSaslClient", "([Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljavax/security/auth/callback/CallbackHandler;)Ljavax/security/sasl/SaslClient;", "([Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;*>;Ljavax/security/auth/callback/CallbackHandler;)Ljavax/security/sasl/SaslClient;", $PUBLIC | $ABSTRACT, $virtualMethod(SaslClientFactory, createSaslClient, $SaslClient*, $StringArray*, $String*, $String*, $String*, $Map*, $CallbackHandler*), "javax.security.sasl.SaslException"},
		{"getMechanismNames", "(Ljava/util/Map;)[Ljava/lang/String;", "(Ljava/util/Map<Ljava/lang/String;*>;)[Ljava/lang/String;", $PUBLIC | $ABSTRACT, $virtualMethod(SaslClientFactory, getMechanismNames, $StringArray*, $Map*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.security.sasl.SaslClientFactory",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SaslClientFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SaslClientFactory);
	});
	return class$;
}

$Class* SaslClientFactory::class$ = nullptr;

		} // sasl
	} // security
} // javax