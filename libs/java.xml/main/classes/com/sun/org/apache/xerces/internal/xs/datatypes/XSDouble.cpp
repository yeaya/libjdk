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

$MethodInfo _XSDouble_MethodInfo_[] = {
	{"getValue", "()D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSDouble, getValue, double)},
	{}
};

$ClassInfo _XSDouble_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.datatypes.XSDouble",
	nullptr,
	nullptr,
	nullptr,
	_XSDouble_MethodInfo_
};

$Object* allocate$XSDouble($Class* clazz) {
	return $of($alloc(XSDouble));
}

$Class* XSDouble::load$($String* name, bool initialize) {
	$loadClass(XSDouble, name, initialize, &_XSDouble_ClassInfo_, allocate$XSDouble);
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