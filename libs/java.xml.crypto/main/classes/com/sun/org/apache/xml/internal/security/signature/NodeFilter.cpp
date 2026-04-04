#include <com/sun/org/apache/xml/internal/security/signature/NodeFilter.h>
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
						namespace security {
							namespace signature {

$Class* NodeFilter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"isNodeInclude", "(Lorg/w3c/dom/Node;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NodeFilter, isNodeInclude, int32_t, $Node*)},
		{"isNodeIncludeDO", "(Lorg/w3c/dom/Node;I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NodeFilter, isNodeIncludeDO, int32_t, $Node*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xml.internal.security.signature.NodeFilter",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NodeFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NodeFilter);
	});
	return class$;
}

$Class* NodeFilter::class$ = nullptr;

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com