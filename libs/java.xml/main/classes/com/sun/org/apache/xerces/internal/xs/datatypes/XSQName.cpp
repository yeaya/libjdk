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

$Class* XSQName::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getJAXPQName", "()Ljavax/xml/namespace/QName;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSQName, getJAXPQName, $QName*)},
		{"getXNIQName", "()Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSQName, getXNIQName, $1QName*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.xs.datatypes.XSQName",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XSQName, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XSQName);
	});
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