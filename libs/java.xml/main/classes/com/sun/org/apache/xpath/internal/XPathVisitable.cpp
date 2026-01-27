#include <com/sun/org/apache/xpath/internal/XPathVisitable.h>

#include <com/sun/org/apache/xpath/internal/ExpressionOwner.h>
#include <com/sun/org/apache/xpath/internal/XPathVisitor.h>
#include <jcpp.h>

using $ExpressionOwner = ::com::sun::org::apache::xpath::internal::ExpressionOwner;
using $XPathVisitor = ::com::sun::org::apache::xpath::internal::XPathVisitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {

$MethodInfo _XPathVisitable_MethodInfo_[] = {
	{"callVisitors", "(Lcom/sun/org/apache/xpath/internal/ExpressionOwner;Lcom/sun/org/apache/xpath/internal/XPathVisitor;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPathVisitable, callVisitors, void, $ExpressionOwner*, $XPathVisitor*)},
	{}
};

$ClassInfo _XPathVisitable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xpath.internal.XPathVisitable",
	nullptr,
	nullptr,
	nullptr,
	_XPathVisitable_MethodInfo_
};

$Object* allocate$XPathVisitable($Class* clazz) {
	return $of($alloc(XPathVisitable));
}

$Class* XPathVisitable::load$($String* name, bool initialize) {
	$loadClass(XPathVisitable, name, initialize, &_XPathVisitable_ClassInfo_, allocate$XPathVisitable);
	return class$;
}

$Class* XPathVisitable::class$ = nullptr;

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com