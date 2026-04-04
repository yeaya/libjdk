#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformXPath.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInput.h>
#include <com/sun/org/apache/xml/internal/security/transforms/TransformSpi.h>
#include <com/sun/org/apache/xml/internal/security/transforms/TransformationException.h>
#include <com/sun/org/apache/xml/internal/security/transforms/Transforms.h>
#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformXPath$XPathNodeFilter.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <com/sun/org/apache/xml/internal/security/utils/XPathAPI.h>
#include <com/sun/org/apache/xml/internal/security/utils/XPathFactory.h>
#include <java/io/OutputStream.h>
#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef HIERARCHY_REQUEST_ERR
#undef TRANSFORM_XPATH
#undef _TAG_XPATH

using $XMLSignatureInput = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput;
using $TransformSpi = ::com::sun::org::apache::xml::internal::security::transforms::TransformSpi;
using $TransformationException = ::com::sun::org::apache::xml::internal::security::transforms::TransformationException;
using $Transforms = ::com::sun::org::apache::xml::internal::security::transforms::Transforms;
using $TransformXPath$XPathNodeFilter = ::com::sun::org::apache::xml::internal::security::transforms::implementations::TransformXPath$XPathNodeFilter;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $XPathAPI = ::com::sun::org::apache::xml::internal::security::utils::XPathAPI;
using $XPathFactory = ::com::sun::org::apache::xml::internal::security::utils::XPathFactory;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMException = ::org::w3c::dom::DOMException;
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

void TransformXPath::init$() {
	$TransformSpi::init$();
}

$String* TransformXPath::engineGetURI() {
	$init($Transforms);
	return $Transforms::TRANSFORM_XPATH;
}

$XMLSignatureInput* TransformXPath::enginePerformTransform($XMLSignatureInput* input, $OutputStream* os, $Element* transformElement, $String* baseURI, bool secureValidation) {
	$useLocalObjectStack();
	try {
		$init($Constants);
		$var($Element, xpathElement, $XMLUtils::selectDsNode($($nc(transformElement)->getFirstChild()), $Constants::_TAG_XPATH, 0));
		if (xpathElement == nullptr) {
			$var($ObjectArray, exArgs, $new($ObjectArray, {
				"ds:XPath"_s,
				"Transform"_s
			}));
			$throwNew($TransformationException, "xml.WrongContent"_s, exArgs);
		}
		$var($Node, xpathnode, $nc(xpathElement)->getFirstChild());
		if (xpathnode == nullptr) {
			$throwNew($DOMException, $DOMException::HIERARCHY_REQUEST_ERR, "Text must be in ds:Xpath"_s);
		}
		$var($String, str, $XMLUtils::getStrFromNode(xpathnode));
		$nc(input)->setNeedsToBeExpanded(needsCircumvent(str));
		$var($XPathFactory, xpathFactory, getXPathFactory());
		$var($XPathAPI, xpathAPIInstance, $nc(xpathFactory)->newXPathAPI());
		input->addNodeFilter($$new($TransformXPath$XPathNodeFilter, xpathElement, xpathnode, str, xpathAPIInstance));
		input->setNodeSet(true);
		return input;
	} catch ($DOMException& ex) {
		$throwNew($TransformationException, ex);
	}
	$shouldNotReachHere();
}

$XPathFactory* TransformXPath::getXPathFactory() {
	return $XPathFactory::newInstance();
}

bool TransformXPath::needsCircumvent($String* str) {
	bool var$0 = $nc(str)->indexOf("namespace"_s) != -1;
	return var$0 || str->indexOf("name()"_s) != -1;
}

TransformXPath::TransformXPath() {
}

$Class* TransformXPath::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TransformXPath, init$, void)},
		{"engineGetURI", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(TransformXPath, engineGetURI, $String*)},
		{"enginePerformTransform", "(Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;Ljava/io/OutputStream;Lorg/w3c/dom/Element;Ljava/lang/String;Z)Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", nullptr, $PROTECTED, $virtualMethod(TransformXPath, enginePerformTransform, $XMLSignatureInput*, $XMLSignatureInput*, $OutputStream*, $Element*, $String*, bool), "com.sun.org.apache.xml.internal.security.transforms.TransformationException"},
		{"getXPathFactory", "()Lcom/sun/org/apache/xml/internal/security/utils/XPathFactory;", nullptr, $PROTECTED, $virtualMethod(TransformXPath, getXPathFactory, $XPathFactory*)},
		{"needsCircumvent", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(TransformXPath, needsCircumvent, bool, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.security.transforms.implementations.TransformXPath$XPathNodeFilter", "com.sun.org.apache.xml.internal.security.transforms.implementations.TransformXPath", "XPathNodeFilter", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.transforms.implementations.TransformXPath",
		"com.sun.org.apache.xml.internal.security.transforms.TransformSpi",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.org.apache.xml.internal.security.transforms.implementations.TransformXPath$XPathNodeFilter"
	};
	$loadClass(TransformXPath, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TransformXPath);
	});
	return class$;
}

$Class* TransformXPath::class$ = nullptr;

								} // implementations
							} // transforms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com