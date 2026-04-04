#include <com/sun/org/apache/xerces/internal/xs/datatypes/XSFloat.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							namespace datatypes {

$Class* XSFloat::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getValue", "()F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSFloat, getValue, float)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.xs.datatypes.XSFloat",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XSFloat, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XSFloat);
	});
	return class$;
}

$Class* XSFloat::class$ = nullptr;

							} // datatypes
						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com