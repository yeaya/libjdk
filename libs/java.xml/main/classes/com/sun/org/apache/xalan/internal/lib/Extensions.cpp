#include <com/sun/org/apache/xalan/internal/lib/Extensions.h>

#include <com/sun/org/apache/xalan/internal/extensions/ExpressionContext.h>
#include <com/sun/org/apache/xalan/internal/lib/ExsltDynamic.h>
#include <com/sun/org/apache/xalan/internal/lib/ExsltSets.h>
#include <com/sun/org/apache/xpath/internal/NodeSet.h>
#include <com/sun/org/apache/xpath/internal/objects/XBoolean.h>
#include <com/sun/org/apache/xpath/internal/objects/XNumber.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <java/util/StringTokenizer.h>
#include <jdk/xml/internal/JdkXmlUtils.h>
#include <org/w3c/dom/CharacterData.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/DocumentFragment.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/Text.h>
#include <org/w3c/dom/traversal/NodeIterator.h>
#include <jcpp.h>

using $ExpressionContext = ::com::sun::org::apache::xalan::internal::extensions::ExpressionContext;
using $ExsltDynamic = ::com::sun::org::apache::xalan::internal::lib::ExsltDynamic;
using $ExsltSets = ::com::sun::org::apache::xalan::internal::lib::ExsltSets;
using $NodeSet = ::com::sun::org::apache::xpath::internal::NodeSet;
using $XBoolean = ::com::sun::org::apache::xpath::internal::objects::XBoolean;
using $XNumber = ::com::sun::org::apache::xpath::internal::objects::XNumber;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringTokenizer = ::java::util::StringTokenizer;
using $JdkXmlUtils = ::jdk::xml::internal::JdkXmlUtils;
using $CharacterData = ::org::w3c::dom::CharacterData;
using $Document = ::org::w3c::dom::Document;
using $DocumentFragment = ::org::w3c::dom::DocumentFragment;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;
using $Text = ::org::w3c::dom::Text;
using $NodeIterator = ::org::w3c::dom::traversal::NodeIterator;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace lib {

$MethodInfo _Extensions_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(Extensions, init$, void)},
	{"difference", "(Lorg/w3c/dom/NodeList;Lorg/w3c/dom/NodeList;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $STATIC, $staticMethod(Extensions, difference, $NodeList*, $NodeList*, $NodeList*)},
	{"distinct", "(Lorg/w3c/dom/NodeList;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $STATIC, $staticMethod(Extensions, distinct, $NodeList*, $NodeList*)},
	{"evaluate", "(Lcom/sun/org/apache/xalan/internal/extensions/ExpressionContext;Ljava/lang/String;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC | $STATIC, $staticMethod(Extensions, evaluate, $XObject*, $ExpressionContext*, $String*), "org.xml.sax.SAXNotSupportedException"},
	{"hasSameNodes", "(Lorg/w3c/dom/NodeList;Lorg/w3c/dom/NodeList;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Extensions, hasSameNodes, bool, $NodeList*, $NodeList*)},
	{"intersection", "(Lorg/w3c/dom/NodeList;Lorg/w3c/dom/NodeList;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $STATIC, $staticMethod(Extensions, intersection, $NodeList*, $NodeList*, $NodeList*)},
	{"nodeset", "(Lcom/sun/org/apache/xalan/internal/extensions/ExpressionContext;Ljava/lang/Object;)Lcom/sun/org/apache/xpath/internal/NodeSet;", nullptr, $PUBLIC | $STATIC, $staticMethod(Extensions, nodeset, $NodeSet*, $ExpressionContext*, Object$*)},
	{"tokenize", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $STATIC, $staticMethod(Extensions, tokenize, $NodeList*, $String*, $String*)},
	{"tokenize", "(Ljava/lang/String;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $STATIC, $staticMethod(Extensions, tokenize, $NodeList*, $String*)},
	{}
};

$ClassInfo _Extensions_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.lib.Extensions",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Extensions_MethodInfo_
};

$Object* allocate$Extensions($Class* clazz) {
	return $of($alloc(Extensions));
}

void Extensions::init$() {
}

$NodeSet* Extensions::nodeset($ExpressionContext* myProcessor, Object$* rtf) {
	$useLocalCurrentObjectStackCache();
	$var($String, textNodeValue, nullptr);
	if ($instanceOf($NodeIterator, rtf)) {
		return $new($NodeSet, $cast($NodeIterator, rtf));
	} else {
		if ($instanceOf($String, rtf)) {
			$assign(textNodeValue, $cast($String, rtf));
		} else if ($instanceOf($Boolean, rtf)) {
			$assign(textNodeValue, $$new($XBoolean, $nc(($cast($Boolean, rtf)))->booleanValue())->str());
		} else if ($instanceOf($Double, rtf)) {
			$assign(textNodeValue, $$new($XNumber, $nc(($cast($Double, rtf)))->doubleValue())->str());
		} else {
			$assign(textNodeValue, $nc($of(rtf))->toString());
		}
		$var($Document, myDoc, $JdkXmlUtils::getDOMDocument());
		$var($Text, textNode, $nc(myDoc)->createTextNode(textNodeValue));
		$var($DocumentFragment, docFrag, myDoc->createDocumentFragment());
		$nc(docFrag)->appendChild(textNode);
		return $new($NodeSet, static_cast<$Node*>(docFrag));
	}
}

$NodeList* Extensions::intersection($NodeList* nl1, $NodeList* nl2) {
	return $ExsltSets::intersection(nl1, nl2);
}

$NodeList* Extensions::difference($NodeList* nl1, $NodeList* nl2) {
	return $ExsltSets::difference(nl1, nl2);
}

$NodeList* Extensions::distinct($NodeList* nl) {
	return $ExsltSets::distinct(nl);
}

bool Extensions::hasSameNodes($NodeList* nl1, $NodeList* nl2) {
	$useLocalCurrentObjectStackCache();
	$var($NodeSet, ns1, $new($NodeSet, nl1));
	$var($NodeSet, ns2, $new($NodeSet, nl2));
	int32_t var$0 = ns1->getLength();
	if (var$0 != ns2->getLength()) {
		return false;
	}
	for (int32_t i = 0; i < ns1->getLength(); ++i) {
		$var($Node, n, ns1->elementAt(i));
		if (!ns2->contains(n)) {
			return false;
		}
	}
	return true;
}

$XObject* Extensions::evaluate($ExpressionContext* myContext, $String* xpathExpr) {
	return $ExsltDynamic::evaluate(myContext, xpathExpr);
}

$NodeList* Extensions::tokenize($String* toTokenize, $String* delims) {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, $JdkXmlUtils::getDOMDocument());
	$var($StringTokenizer, lTokenizer, $new($StringTokenizer, toTokenize, delims));
	$var($NodeSet, resultSet, $new($NodeSet));
	$synchronized(doc) {
		while (lTokenizer->hasMoreTokens()) {
			resultSet->addNode($($nc(doc)->createTextNode($(lTokenizer->nextToken()))));
		}
	}
	return resultSet;
}

$NodeList* Extensions::tokenize($String* toTokenize) {
	return tokenize(toTokenize, " \t\n\r"_s);
}

Extensions::Extensions() {
}

$Class* Extensions::load$($String* name, bool initialize) {
	$loadClass(Extensions, name, initialize, &_Extensions_ClassInfo_, allocate$Extensions);
	return class$;
}

$Class* Extensions::class$ = nullptr;

						} // lib
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com