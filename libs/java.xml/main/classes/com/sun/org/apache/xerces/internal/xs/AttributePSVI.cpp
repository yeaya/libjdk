#include <com/sun/org/apache/xerces/internal/xs/AttributePSVI.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAttributeDeclaration.h>
#include <jcpp.h>

using $XSAttributeDeclaration = ::com::sun::org::apache::xerces::internal::xs::XSAttributeDeclaration;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

$Class* AttributePSVI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAttributeDeclaration", "()Lcom/sun/org/apache/xerces/internal/xs/XSAttributeDeclaration;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AttributePSVI, getAttributeDeclaration, $XSAttributeDeclaration*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.xs.AttributePSVI",
		nullptr,
		"com.sun.org.apache.xerces.internal.xs.ItemPSVI",
		nullptr,
		methodInfos$$
	};
	$loadClass(AttributePSVI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AttributePSVI);
	});
	return class$;
}

$Class* AttributePSVI::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com