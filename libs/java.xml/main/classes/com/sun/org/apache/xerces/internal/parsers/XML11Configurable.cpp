#include <com/sun/org/apache/xerces/internal/parsers/XML11Configurable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace parsers {

$Class* XML11Configurable::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.parsers.XML11Configurable"
	};
	$loadClass(XML11Configurable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XML11Configurable);
	});
	return class$;
}

$Class* XML11Configurable::class$ = nullptr;

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com