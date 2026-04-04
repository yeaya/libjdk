#include <com/sun/org/apache/xerces/internal/xs/XSImplementation.h>
#include <com/sun/org/apache/xerces/internal/xs/StringList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSLoader.h>
#include <jcpp.h>

using $StringList = ::com::sun::org::apache::xerces::internal::xs::StringList;
using $XSLoader = ::com::sun::org::apache::xerces::internal::xs::XSLoader;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

$Class* XSImplementation::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"createXSLoader", "(Lcom/sun/org/apache/xerces/internal/xs/StringList;)Lcom/sun/org/apache/xerces/internal/xs/XSLoader;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSImplementation, createXSLoader, $XSLoader*, $StringList*), "com.sun.org.apache.xerces.internal.xs.XSException"},
		{"getRecognizedVersions", "()Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSImplementation, getRecognizedVersions, $StringList*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.xs.XSImplementation",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XSImplementation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XSImplementation);
	});
	return class$;
}

$Class* XSImplementation::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com