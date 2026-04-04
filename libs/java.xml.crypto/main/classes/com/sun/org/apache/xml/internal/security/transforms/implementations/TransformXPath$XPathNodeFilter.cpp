#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformXPath$XPathNodeFilter.h>
#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityRuntimeException.h>
#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformXPath.h>
#include <com/sun/org/apache/xml/internal/security/utils/XPathAPI.h>
#include <javax/xml/transform/TransformerException.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $XMLSecurityRuntimeException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityRuntimeException;
using $XPathAPI = ::com::sun::org::apache::xml::internal::security::utils::XPathAPI;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $TransformerException = ::javax::xml::transform::TransformerException;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace transforms {
								namespace implementations {

void TransformXPath$XPathNodeFilter::init$($Element* xpathElement, $Node* xpathnode, $String* str, $XPathAPI* xPathAPI) {
	$set(this, xpathnode, xpathnode);
	$set(this, str, str);
	$set(this, xpathElement, xpathElement);
	$set(this, xPathAPI, xPathAPI);
}

int32_t TransformXPath$XPathNodeFilter::isNodeInclude($Node* currentNode) {
	$useLocalObjectStack();
	try {
		bool include = $nc(this->xPathAPI)->evaluate(currentNode, this->xpathnode, this->str, this->xpathElement);
		if (include) {
			return 1;
		}
		return 0;
	} catch ($TransformerException& e) {
		$var($ObjectArray, eArgs, $new($ObjectArray, {currentNode}));
		$throwNew($XMLSecurityRuntimeException, "signature.Transform.node"_s, eArgs, e);
	} catch ($Exception& e) {
		$var($ObjectArray, eArgs, $new($ObjectArray, {
			currentNode,
			$($Short::valueOf($nc(currentNode)->getNodeType()))
		}));
		$throwNew($XMLSecurityRuntimeException, "signature.Transform.nodeAndType"_s, eArgs, e);
	}
	$shouldNotReachHere();
}

int32_t TransformXPath$XPathNodeFilter::isNodeIncludeDO($Node* n, int32_t level) {
	return isNodeInclude(n);
}

TransformXPath$XPathNodeFilter::TransformXPath$XPathNodeFilter() {
}

$Class* TransformXPath$XPathNodeFilter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"xPathAPI", "Lcom/sun/org/apache/xml/internal/security/utils/XPathAPI;", nullptr, $PRIVATE | $FINAL, $field(TransformXPath$XPathNodeFilter, xPathAPI)},
		{"xpathnode", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE | $FINAL, $field(TransformXPath$XPathNodeFilter, xpathnode)},
		{"xpathElement", "Lorg/w3c/dom/Element;", nullptr, $PRIVATE | $FINAL, $field(TransformXPath$XPathNodeFilter, xpathElement)},
		{"str", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(TransformXPath$XPathNodeFilter, str)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lorg/w3c/dom/Element;Lorg/w3c/dom/Node;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/utils/XPathAPI;)V", nullptr, 0, $method(TransformXPath$XPathNodeFilter, init$, void, $Element*, $Node*, $String*, $XPathAPI*)},
		{"isNodeInclude", "(Lorg/w3c/dom/Node;)I", nullptr, $PUBLIC, $virtualMethod(TransformXPath$XPathNodeFilter, isNodeInclude, int32_t, $Node*)},
		{"isNodeIncludeDO", "(Lorg/w3c/dom/Node;I)I", nullptr, $PUBLIC, $virtualMethod(TransformXPath$XPathNodeFilter, isNodeIncludeDO, int32_t, $Node*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.security.transforms.implementations.TransformXPath$XPathNodeFilter", "com.sun.org.apache.xml.internal.security.transforms.implementations.TransformXPath", "XPathNodeFilter", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.transforms.implementations.TransformXPath$XPathNodeFilter",
		"java.lang.Object",
		"com.sun.org.apache.xml.internal.security.signature.NodeFilter",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xml.internal.security.transforms.implementations.TransformXPath"
	};
	$loadClass(TransformXPath$XPathNodeFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TransformXPath$XPathNodeFilter);
	});
	return class$;
}

$Class* TransformXPath$XPathNodeFilter::class$ = nullptr;

								} // implementations
							} // transforms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com