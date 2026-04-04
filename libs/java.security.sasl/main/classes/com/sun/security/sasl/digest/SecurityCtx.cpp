#include <com/sun/security/sasl/digest/SecurityCtx.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {
				namespace digest {

$Class* SecurityCtx::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"unwrap", "([BII)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SecurityCtx, unwrap, $bytes*, $bytes*, int32_t, int32_t), "javax.security.sasl.SaslException"},
		{"wrap", "([BII)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SecurityCtx, wrap, $bytes*, $bytes*, int32_t, int32_t), "javax.security.sasl.SaslException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"com.sun.security.sasl.digest.SecurityCtx",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SecurityCtx, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SecurityCtx);
	});
	return class$;
}

$Class* SecurityCtx::class$ = nullptr;

				} // digest
			} // sasl
		} // security
	} // sun
} // com