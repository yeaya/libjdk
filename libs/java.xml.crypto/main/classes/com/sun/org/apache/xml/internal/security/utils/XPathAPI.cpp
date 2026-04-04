#include <com/sun/org/apache/xml/internal/security/utils/XPathAPI.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {

$Class* XPathAPI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"clear", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPathAPI, clear, void)},
		{"evaluate", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;Ljava/lang/String;Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPathAPI, evaluate, bool, $Node*, $Node*, $String*, $Node*), "javax.xml.transform.TransformerException"},
		{"selectNodeList", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;Ljava/lang/String;Lorg/w3c/dom/Node;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPathAPI, selectNodeList, $NodeList*, $Node*, $Node*, $String*, $Node*), "javax.xml.transform.TransformerException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xml.internal.security.utils.XPathAPI",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XPathAPI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XPathAPI);
	});
	return class$;
}

$Class* XPathAPI::class$ = nullptr;

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com