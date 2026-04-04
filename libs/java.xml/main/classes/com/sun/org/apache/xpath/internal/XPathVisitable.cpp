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

$Class* XPathVisitable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"callVisitors", "(Lcom/sun/org/apache/xpath/internal/ExpressionOwner;Lcom/sun/org/apache/xpath/internal/XPathVisitor;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPathVisitable, callVisitors, void, $ExpressionOwner*, $XPathVisitor*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xpath.internal.XPathVisitable",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XPathVisitable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XPathVisitable);
	});
	return class$;
}

$Class* XPathVisitable::class$ = nullptr;

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com