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

$Class* XSObject::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSObject, getName, $String*)},
		{"getNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSObject, getNamespace, $String*)},
		{"getNamespaceItem", "()Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSObject, getNamespaceItem, $XSNamespaceItem*)},
		{"getType", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSObject, getType, int16_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.xs.XSObject",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XSObject, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XSObject);
	});
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