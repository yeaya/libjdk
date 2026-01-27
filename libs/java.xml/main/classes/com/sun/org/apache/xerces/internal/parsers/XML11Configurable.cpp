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

$ClassInfo _XML11Configurable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.parsers.XML11Configurable"
};

$Object* allocate$XML11Configurable($Class* clazz) {
	return $of($alloc(XML11Configurable));
}

$Class* XML11Configurable::load$($String* name, bool initialize) {
	$loadClass(XML11Configurable, name, initialize, &_XML11Configurable_ClassInfo_, allocate$XML11Configurable);
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