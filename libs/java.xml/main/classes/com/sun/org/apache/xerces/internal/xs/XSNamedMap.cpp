#include <com/sun/org/apache/xerces/internal/xs/XSNamedMap.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <jcpp.h>

using $XSObject = ::com::sun::org::apache::xerces::internal::xs::XSObject;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

$Class* XSNamedMap::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSNamedMap, getLength, int32_t)},
		{"item", "(I)Lcom/sun/org/apache/xerces/internal/xs/XSObject;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSNamedMap, item, $XSObject*, int32_t)},
		{"itemByName", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSObject;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSNamedMap, itemByName, $XSObject*, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.xs.XSNamedMap",
		nullptr,
		"java.util.Map",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Map<Ljavax/xml/namespace/QName;Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;"
	};
	$loadClass(XSNamedMap, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XSNamedMap);
	});
	return class$;
}

$Class* XSNamedMap::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com