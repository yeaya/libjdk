#include <com/sun/org/apache/xpath/internal/axes/PathComponent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace axes {

$Class* PathComponent::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAnalysisBits", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PathComponent, getAnalysisBits, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xpath.internal.axes.PathComponent",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PathComponent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PathComponent);
	});
	return class$;
}

$Class* PathComponent::class$ = nullptr;

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com