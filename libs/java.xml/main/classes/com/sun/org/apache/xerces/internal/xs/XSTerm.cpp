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

$ClassInfo _XSTerm_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.XSTerm",
	nullptr,
	"com.sun.org.apache.xerces.internal.xs.XSObject"
};

$Object* allocate$XSTerm($Class* clazz) {
	return $of($alloc(XSTerm));
}

$Class* XSTerm::load$($String* name, bool initialize) {
	$loadClass(XSTerm, name, initialize, &_XSTerm_ClassInfo_, allocate$XSTerm);
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