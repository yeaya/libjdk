#include <com/sun/org/apache/xpath/internal/WhitespaceStrippingElementMatcher.h>

#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::org::w3c::dom::Element;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {

$MethodInfo _WhitespaceStrippingElementMatcher_MethodInfo_[] = {
	{"canStripWhiteSpace", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WhitespaceStrippingElementMatcher, canStripWhiteSpace, bool)},
	{"shouldStripWhiteSpace", "(Lcom/sun/org/apache/xpath/internal/XPathContext;Lorg/w3c/dom/Element;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WhitespaceStrippingElementMatcher, shouldStripWhiteSpace, bool, $XPathContext*, $Element*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _WhitespaceStrippingElementMatcher_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xpath.internal.WhitespaceStrippingElementMatcher",
	nullptr,
	nullptr,
	nullptr,
	_WhitespaceStrippingElementMatcher_MethodInfo_
};

$Object* allocate$WhitespaceStrippingElementMatcher($Class* clazz) {
	return $of($alloc(WhitespaceStrippingElementMatcher));
}

$Class* WhitespaceStrippingElementMatcher::load$($String* name, bool initialize) {
	$loadClass(WhitespaceStrippingElementMatcher, name, initialize, &_WhitespaceStrippingElementMatcher_ClassInfo_, allocate$WhitespaceStrippingElementMatcher);
	return class$;
}

$Class* WhitespaceStrippingElementMatcher::class$ = nullptr;

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com