#include <com/sun/org/apache/xpath/internal/axes/SubContextList.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <jcpp.h>

using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace axes {

$Class* SubContextList::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getLastPos", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SubContextList, getLastPos, int32_t, $XPathContext*)},
		{"getProximityPosition", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SubContextList, getProximityPosition, int32_t, $XPathContext*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xpath.internal.axes.SubContextList",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SubContextList, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SubContextList);
	});
	return class$;
}

$Class* SubContextList::class$ = nullptr;

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com