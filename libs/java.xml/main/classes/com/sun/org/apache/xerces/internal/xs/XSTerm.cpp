#include <com/sun/org/apache/xerces/internal/xs/XSTerm.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

$Class* XSTerm::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.xs.XSTerm",
		nullptr,
		"com.sun.org.apache.xerces.internal.xs.XSObject"
	};
	$loadClass(XSTerm, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XSTerm);
	});
	return class$;
}

$Class* XSTerm::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com