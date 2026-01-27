#include <com/sun/org/apache/xerces/internal/impl/XML11NSDocumentScannerImpl$NS11ContentDriver.h>

#include <com/sun/org/apache/xerces/internal/impl/ExternalSubsetResolver.h>
#include <com/sun/org/apache/xerces/internal/impl/XML11DocumentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XML11NSDocumentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$Driver.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl$ContentDriver.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLScanner.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidatorFilter.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource.h>
#include <jcpp.h>

using $XML11DocumentScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XML11DocumentScannerImpl;
using $XML11NSDocumentScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XML11NSDocumentScannerImpl;
using $XMLDocumentScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl;
using $XMLDocumentScannerImpl$ContentDriver = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl$ContentDriver;
using $XMLDTDValidatorFilter = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDValidatorFilter;
using $XMLDocumentHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler;
using $XMLDocumentSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

$FieldInfo _XML11NSDocumentScannerImpl$NS11ContentDriver_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/impl/XML11NSDocumentScannerImpl;", nullptr, $FINAL | $SYNTHETIC, $field(XML11NSDocumentScannerImpl$NS11ContentDriver, this$0)},
	{}
};

$MethodInfo _XML11NSDocumentScannerImpl$NS11ContentDriver_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/XML11NSDocumentScannerImpl;)V", nullptr, $PROTECTED, $method(XML11NSDocumentScannerImpl$NS11ContentDriver, init$, void, $XML11NSDocumentScannerImpl*)},
	{"reconfigurePipeline", "()V", nullptr, $PRIVATE, $method(XML11NSDocumentScannerImpl$NS11ContentDriver, reconfigurePipeline, void)},
	{"scanRootElementHook", "()Z", nullptr, $PROTECTED, $virtualMethod(XML11NSDocumentScannerImpl$NS11ContentDriver, scanRootElementHook, bool), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$InnerClassInfo _XML11NSDocumentScannerImpl$NS11ContentDriver_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.XML11NSDocumentScannerImpl$NS11ContentDriver", "com.sun.org.apache.xerces.internal.impl.XML11NSDocumentScannerImpl", "NS11ContentDriver", $PROTECTED | $FINAL},
	{"com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl$ContentDriver", "com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl", "ContentDriver", $PROTECTED},
	{}
};

$ClassInfo _XML11NSDocumentScannerImpl$NS11ContentDriver_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.XML11NSDocumentScannerImpl$NS11ContentDriver",
	"com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl$ContentDriver",
	nullptr,
	_XML11NSDocumentScannerImpl$NS11ContentDriver_FieldInfo_,
	_XML11NSDocumentScannerImpl$NS11ContentDriver_MethodInfo_,
	nullptr,
	nullptr,
	_XML11NSDocumentScannerImpl$NS11ContentDriver_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.XML11NSDocumentScannerImpl"
};

$Object* allocate$XML11NSDocumentScannerImpl$NS11ContentDriver($Class* clazz) {
	return $of($alloc(XML11NSDocumentScannerImpl$NS11ContentDriver));
}

void XML11NSDocumentScannerImpl$NS11ContentDriver::init$($XML11NSDocumentScannerImpl* this$0) {
	$set(this, this$0, this$0);
	$XMLDocumentScannerImpl$ContentDriver::init$(this$0);
}

bool XML11NSDocumentScannerImpl$NS11ContentDriver::scanRootElementHook() {
	if (this->this$0->fExternalSubsetResolver != nullptr && !this->this$0->fSeenDoctypeDecl && !this->this$0->fDisallowDoctype && (this->this$0->fValidation || this->this$0->fLoadExternalDTD)) {
		this->this$0->scanStartElementName();
		resolveExternalSubsetAndRead();
		reconfigurePipeline();
		if (this->this$0->scanStartElementAfterName()) {
			this->this$0->setScannerState(44);
			this->this$0->setDriver(this->this$0->fTrailingMiscDriver);
			return true;
		}
	} else {
		reconfigurePipeline();
		if (this->this$0->scanStartElement()) {
			this->this$0->setScannerState(44);
			this->this$0->setDriver(this->this$0->fTrailingMiscDriver);
			return true;
		}
	}
	return false;
}

void XML11NSDocumentScannerImpl$NS11ContentDriver::reconfigurePipeline() {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->fDTDValidator == nullptr) {
		this->this$0->fBindNamespaces = true;
	} else if (!$nc(this->this$0->fDTDValidator)->hasGrammar()) {
		this->this$0->fBindNamespaces = true;
		this->this$0->fPerformValidation = $nc(this->this$0->fDTDValidator)->validate();
		$var($XMLDocumentSource, source, $nc(this->this$0->fDTDValidator)->getDocumentSource());
		$var($XMLDocumentHandler, handler, $nc(this->this$0->fDTDValidator)->getDocumentHandler());
		$nc(source)->setDocumentHandler(handler);
		if (handler != nullptr) {
			handler->setDocumentSource(source);
		}
		$nc(this->this$0->fDTDValidator)->setDocumentSource(nullptr);
		$nc(this->this$0->fDTDValidator)->setDocumentHandler(nullptr);
	}
}

XML11NSDocumentScannerImpl$NS11ContentDriver::XML11NSDocumentScannerImpl$NS11ContentDriver() {
}

$Class* XML11NSDocumentScannerImpl$NS11ContentDriver::load$($String* name, bool initialize) {
	$loadClass(XML11NSDocumentScannerImpl$NS11ContentDriver, name, initialize, &_XML11NSDocumentScannerImpl$NS11ContentDriver_ClassInfo_, allocate$XML11NSDocumentScannerImpl$NS11ContentDriver);
	return class$;
}

$Class* XML11NSDocumentScannerImpl$NS11ContentDriver::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com