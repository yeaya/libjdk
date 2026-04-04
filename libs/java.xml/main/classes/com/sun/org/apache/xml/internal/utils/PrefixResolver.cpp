#include <com/sun/org/apache/xml/internal/utils/PrefixResolver.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$Class* PrefixResolver::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getBaseIdentifier", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PrefixResolver, getBaseIdentifier, $String*)},
		{"getNamespaceForPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PrefixResolver, getNamespaceForPrefix, $String*, $String*)},
		{"getNamespaceForPrefix", "(Ljava/lang/String;Lorg/w3c/dom/Node;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PrefixResolver, getNamespaceForPrefix, $String*, $String*, $Node*)},
		{"handlesNullPrefixes", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PrefixResolver, handlesNullPrefixes, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xml.internal.utils.PrefixResolver",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PrefixResolver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrefixResolver);
	});
	return class$;
}

$Class* PrefixResolver::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com