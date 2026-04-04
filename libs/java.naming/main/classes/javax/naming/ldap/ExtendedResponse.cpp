#include <javax/naming/ldap/ExtendedResponse.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace naming {
		namespace ldap {

$Class* ExtendedResponse::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getEncodedValue", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExtendedResponse, getEncodedValue, $bytes*)},
		{"getID", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExtendedResponse, getID, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.naming.ldap.ExtendedResponse",
		nullptr,
		"java.io.Serializable",
		nullptr,
		methodInfos$$
	};
	$loadClass(ExtendedResponse, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExtendedResponse);
	});
	return class$;
}

$Class* ExtendedResponse::class$ = nullptr;

		} // ldap
	} // naming
} // javax