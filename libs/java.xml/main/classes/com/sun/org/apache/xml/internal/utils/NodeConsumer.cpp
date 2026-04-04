#include <com/sun/org/apache/xml/internal/utils/NodeConsumer.h>
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

$Class* NodeConsumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"setOriginatingNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NodeConsumer, setOriginatingNode, void, $Node*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xml.internal.utils.NodeConsumer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NodeConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NodeConsumer);
	});
	return class$;
}

$Class* NodeConsumer::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com