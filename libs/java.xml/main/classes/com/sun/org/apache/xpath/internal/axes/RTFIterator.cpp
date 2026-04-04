#include <com/sun/org/apache/xpath/internal/axes/RTFIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <com/sun/org/apache/xpath/internal/NodeSetDTM.h>
#include <jcpp.h>

using $DTMManager = ::com::sun::org::apache::xml::internal::dtm::DTMManager;
using $NodeSetDTM = ::com::sun::org::apache::xpath::internal::NodeSetDTM;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace axes {

void RTFIterator::init$(int32_t root, $DTMManager* manager) {
	$NodeSetDTM::init$(root, manager);
}

RTFIterator::RTFIterator() {
}

$Class* RTFIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(RTFIterator, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILcom/sun/org/apache/xml/internal/dtm/DTMManager;)V", nullptr, $PUBLIC, $method(RTFIterator, init$, void, int32_t, $DTMManager*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xpath.internal.axes.RTFIterator",
		"com.sun.org.apache.xpath.internal.NodeSetDTM",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RTFIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(RTFIterator));
	});
	return class$;
}

$Class* RTFIterator::class$ = nullptr;

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com