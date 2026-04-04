#include <javax/security/sasl/SaslServerFactory.h>
#include <java/util/Map.h>
#include <javax/security/auth/callback/CallbackHandler.h>
#include <javax/security/sasl/SaslServer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $CallbackHandler = ::javax::security::auth::callback::CallbackHandler;
using $SaslServer = ::javax::security::sasl::SaslServer;

namespace javax {
	namespace security {
		namespace sasl {

$Class* SaslServerFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"createSaslServer", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljavax/security/auth/callback/CallbackHandler;)Ljavax/security/sasl/SaslServer;", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;*>;Ljavax/security/auth/callback/CallbackHandler;)Ljavax/security/sasl/SaslServer;", $PUBLIC | $ABSTRACT, $virtualMethod(SaslServerFactory, createSaslServer, $SaslServer*, $String*, $String*, $String*, $Map*, $CallbackHandler*), "javax.security.sasl.SaslException"},
		{"getMechanismNames", "(Ljava/util/Map;)[Ljava/lang/String;", "(Ljava/util/Map<Ljava/lang/String;*>;)[Ljava/lang/String;", $PUBLIC | $ABSTRACT, $virtualMethod(SaslServerFactory, getMechanismNames, $StringArray*, $Map*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.security.sasl.SaslServerFactory",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SaslServerFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SaslServerFactory);
	});
	return class$;
}

$Class* SaslServerFactory::class$ = nullptr;

		} // sasl
	} // security
} // javax