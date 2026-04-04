#include <javax/naming/ldap/ExtendedRequest.h>
#include <javax/naming/ldap/ExtendedResponse.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExtendedResponse = ::javax::naming::ldap::ExtendedResponse;

namespace javax {
	namespace naming {
		namespace ldap {

$Class* ExtendedRequest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"createExtendedResponse", "(Ljava/lang/String;[BII)Ljavax/naming/ldap/ExtendedResponse;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExtendedRequest, createExtendedResponse, $ExtendedResponse*, $String*, $bytes*, int32_t, int32_t), "javax.naming.NamingException"},
		{"getEncodedValue", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExtendedRequest, getEncodedValue, $bytes*)},
		{"getID", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExtendedRequest, getID, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.naming.ldap.ExtendedRequest",
		nullptr,
		"java.io.Serializable",
		nullptr,
		methodInfos$$
	};
	$loadClass(ExtendedRequest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExtendedRequest);
	});
	return class$;
}

$Class* ExtendedRequest::class$ = nullptr;

		} // ldap
	} // naming
} // javax