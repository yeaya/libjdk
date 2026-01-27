#include <com/sun/org/apache/xerces/internal/xs/datatypes/XSQName.h>

#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <javax/xml/namespace/QName.h>
#include <jcpp.h>

using $1QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $QName = ::javax::xml::namespace$::QName;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							namespace datatypes {

$MethodInfo _XSQName_MethodInfo_[] = {
	{"getJAXPQName", "()Ljavax/xml/namespace/QName;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSQName, getJAXPQName, $QName*)},
	{"getXNIQName", "()Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSQName, getXNIQName, $1QName*)},
	{}
};

$ClassInfo _XSQName_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.datatypes.XSQName",
	nullptr,
	nullptr,
	nullptr,
	_XSQName_MethodInfo_
};

$Object* allocate$XSQName($Class* clazz) {
	return $of($alloc(XSQName));
}

$Class* XSQName::load$($String* name, bool initialize) {
	$loadClass(XSQName, name, initialize, &_XSQName_ClassInfo_, allocate$XSQName);
	return class$;
}

$Class* XSQName::class$ = nullptr;

							} // datatypes
						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com