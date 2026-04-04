#include <javax/xml/namespace/NamespaceContext.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace javax {
	namespace xml {
		namespace namespace$ {

$Class* NamespaceContext::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NamespaceContext, getNamespaceURI, $String*, $String*)},
		{"getPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NamespaceContext, getPrefix, $String*, $String*)},
		{"getPrefixes", "(Ljava/lang/String;)Ljava/util/Iterator;", "(Ljava/lang/String;)Ljava/util/Iterator<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, $virtualMethod(NamespaceContext, getPrefixes, $Iterator*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.namespace.NamespaceContext",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NamespaceContext, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NamespaceContext);
	});
	return class$;
}

$Class* NamespaceContext::class$ = nullptr;

		} // namespace$
	} // xml
} // javax