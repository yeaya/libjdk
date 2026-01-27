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

$MethodInfo _PathComponent_MethodInfo_[] = {
	{"getAnalysisBits", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PathComponent, getAnalysisBits, int32_t)},
	{}
};

$ClassInfo _PathComponent_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xpath.internal.axes.PathComponent",
	nullptr,
	nullptr,
	nullptr,
	_PathComponent_MethodInfo_
};

$Object* allocate$PathComponent($Class* clazz) {
	return $of($alloc(PathComponent));
}

$Class* PathComponent::load$($String* name, bool initialize) {
	$loadClass(PathComponent, name, initialize, &_PathComponent_ClassInfo_, allocate$PathComponent);
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