#include <javax/xml/transform/URIResolver.h>
#include <javax/xml/transform/Source.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Source = ::javax::xml::transform::Source;

namespace javax {
	namespace xml {
		namespace transform {

$Class* URIResolver::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"resolve", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/transform/Source;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(URIResolver, resolve, $Source*, $String*, $String*), "javax.xml.transform.TransformerException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.transform.URIResolver",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(URIResolver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(URIResolver);
	});
	return class$;
}

$Class* URIResolver::class$ = nullptr;

		} // transform
	} // xml
} // javax