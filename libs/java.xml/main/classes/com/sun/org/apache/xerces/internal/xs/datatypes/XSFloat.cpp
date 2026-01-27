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

$MethodInfo _XSFloat_MethodInfo_[] = {
	{"getValue", "()F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSFloat, getValue, float)},
	{}
};

$ClassInfo _XSFloat_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.datatypes.XSFloat",
	nullptr,
	nullptr,
	nullptr,
	_XSFloat_MethodInfo_
};

$Object* allocate$XSFloat($Class* clazz) {
	return $of($alloc(XSFloat));
}

$Class* XSFloat::load$($String* name, bool initialize) {
	$loadClass(XSFloat, name, initialize, &_XSFloat_ClassInfo_, allocate$XSFloat);
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