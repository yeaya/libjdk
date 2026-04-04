#include <com/sun/org/apache/xerces/internal/xs/PSVIProvider.h>
#include <com/sun/org/apache/xerces/internal/xs/AttributePSVI.h>
#include <com/sun/org/apache/xerces/internal/xs/ElementPSVI.h>
#include <jcpp.h>

using $AttributePSVI = ::com::sun::org::apache::xerces::internal::xs::AttributePSVI;
using $ElementPSVI = ::com::sun::org::apache::xerces::internal::xs::ElementPSVI;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

$Class* PSVIProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAttributePSVI", "(I)Lcom/sun/org/apache/xerces/internal/xs/AttributePSVI;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PSVIProvider, getAttributePSVI, $AttributePSVI*, int32_t)},
		{"getAttributePSVIByName", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/AttributePSVI;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PSVIProvider, getAttributePSVIByName, $AttributePSVI*, $String*, $String*)},
		{"getElementPSVI", "()Lcom/sun/org/apache/xerces/internal/xs/ElementPSVI;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PSVIProvider, getElementPSVI, $ElementPSVI*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.xs.PSVIProvider",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PSVIProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PSVIProvider);
	});
	return class$;
}

$Class* PSVIProvider::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com