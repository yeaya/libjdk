#include <org/xml/sax/ext/Attributes2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace xml {
		namespace sax {
			namespace ext {

$Class* Attributes2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"isDeclared", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attributes2, isDeclared, bool, int32_t)},
		{"isDeclared", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attributes2, isDeclared, bool, $String*)},
		{"isDeclared", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attributes2, isDeclared, bool, $String*, $String*)},
		{"isSpecified", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attributes2, isSpecified, bool, int32_t)},
		{"isSpecified", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attributes2, isSpecified, bool, $String*, $String*)},
		{"isSpecified", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attributes2, isSpecified, bool, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.xml.sax.ext.Attributes2",
		nullptr,
		"org.xml.sax.Attributes",
		nullptr,
		methodInfos$$
	};
	$loadClass(Attributes2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Attributes2);
	});
	return class$;
}

$Class* Attributes2::class$ = nullptr;

			} // ext
		} // sax
	} // xml
} // org