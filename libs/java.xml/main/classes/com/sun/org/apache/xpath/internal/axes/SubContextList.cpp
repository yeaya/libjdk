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

$MethodInfo _SubContextList_MethodInfo_[] = {
	{"getLastPos", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SubContextList, getLastPos, int32_t, $XPathContext*)},
	{"getProximityPosition", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SubContextList, getProximityPosition, int32_t, $XPathContext*)},
	{}
};

$ClassInfo _SubContextList_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xpath.internal.axes.SubContextList",
	nullptr,
	nullptr,
	nullptr,
	_SubContextList_MethodInfo_
};

$Object* allocate$SubContextList($Class* clazz) {
	return $of($alloc(SubContextList));
}

$Class* SubContextList::load$($String* name, bool initialize) {
	$loadClass(SubContextList, name, initialize, &_SubContextList_ClassInfo_, allocate$SubContextList);
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