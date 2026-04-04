#include <javax/xml/crypto/KeySelectorResult.h>
#include <java/security/Key.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Key = ::java::security::Key;

namespace javax {
	namespace xml {
		namespace crypto {

$Class* KeySelectorResult::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getKey", "()Ljava/security/Key;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(KeySelectorResult, getKey, $Key*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.crypto.KeySelectorResult",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(KeySelectorResult, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeySelectorResult);
	});
	return class$;
}

$Class* KeySelectorResult::class$ = nullptr;

		} // crypto
	} // xml
} // javax