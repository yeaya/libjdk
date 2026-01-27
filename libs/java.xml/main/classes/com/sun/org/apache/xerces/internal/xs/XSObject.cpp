#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>

#include <com/sun/org/apache/xerces/internal/xs/XSNamespaceItem.h>
#include <jcpp.h>

using $XSNamespaceItem = ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

$MethodInfo _XSObject_MethodInfo_[] = {
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSObject, getName, $String*)},
	{"getNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSObject, getNamespace, $String*)},
	{"getNamespaceItem", "()Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSObject, getNamespaceItem, $XSNamespaceItem*)},
	{"getType", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSObject, getType, int16_t)},
	{}
};

$ClassInfo _XSObject_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.XSObject",
	nullptr,
	nullptr,
	nullptr,
	_XSObject_MethodInfo_
};

$Object* allocate$XSObject($Class* clazz) {
	return $of($alloc(XSObject));
}

$Class* XSObject::load$($String* name, bool initialize) {
	$loadClass(XSObject, name, initialize, &_XSObject_ClassInfo_, allocate$XSObject);
	return class$;
}

$Class* XSObject::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com