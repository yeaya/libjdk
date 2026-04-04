#include <com/sun/org/apache/xerces/internal/xs/datatypes/XSDouble.h>
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

$Class* XSDouble::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getValue", "()D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSDouble, getValue, double)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.xs.datatypes.XSDouble",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XSDouble, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XSDouble);
	});
	return class$;
}

$Class* XSDouble::class$ = nullptr;

							} // datatypes
						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com