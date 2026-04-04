#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$Driver.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

$Class* XMLDocumentFragmentScannerImpl$Driver::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"next", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDocumentFragmentScannerImpl$Driver, next, int32_t), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$Driver", "com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl", "Driver", $PROTECTED | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$Driver",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl"
	};
	$loadClass(XMLDocumentFragmentScannerImpl$Driver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLDocumentFragmentScannerImpl$Driver);
	});
	return class$;
}

$Class* XMLDocumentFragmentScannerImpl$Driver::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com