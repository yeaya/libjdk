#include <org/xml/sax/ext/Locator2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace xml {
		namespace sax {
			namespace ext {

$Class* Locator2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Locator2, getEncoding, $String*)},
		{"getXMLVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Locator2, getXMLVersion, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.xml.sax.ext.Locator2",
		nullptr,
		"org.xml.sax.Locator",
		nullptr,
		methodInfos$$
	};
	$loadClass(Locator2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Locator2);
	});
	return class$;
}

$Class* Locator2::class$ = nullptr;

			} // ext
		} // sax
	} // xml
} // org