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

$MethodInfo _XMLDocumentFragmentScannerImpl$Driver_MethodInfo_[] = {
	{"next", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDocumentFragmentScannerImpl$Driver, next, int32_t), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$InnerClassInfo _XMLDocumentFragmentScannerImpl$Driver_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$Driver", "com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl", "Driver", $PROTECTED | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _XMLDocumentFragmentScannerImpl$Driver_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$Driver",
	nullptr,
	nullptr,
	nullptr,
	_XMLDocumentFragmentScannerImpl$Driver_MethodInfo_,
	nullptr,
	nullptr,
	_XMLDocumentFragmentScannerImpl$Driver_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl"
};

$Object* allocate$XMLDocumentFragmentScannerImpl$Driver($Class* clazz) {
	return $of($alloc(XMLDocumentFragmentScannerImpl$Driver));
}

$Class* XMLDocumentFragmentScannerImpl$Driver::load$($String* name, bool initialize) {
	$loadClass(XMLDocumentFragmentScannerImpl$Driver, name, initialize, &_XMLDocumentFragmentScannerImpl$Driver_ClassInfo_, allocate$XMLDocumentFragmentScannerImpl$Driver);
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