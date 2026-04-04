#include <com/sun/org/apache/xerces/internal/impl/XMLNSDocumentScannerImpl$NSContentDriver.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$Driver.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl$ContentDriver.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLNSDocumentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLScanner.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidatorFilter.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource.h>
#include <jcpp.h>

using $XMLDocumentScannerImpl$ContentDriver = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl$ContentDriver;
using $XMLNSDocumentScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLNSDocumentScannerImpl;
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

void XMLNSDocumentScannerImpl$NSContentDriver::init$($XMLNSDocumentScannerImpl* this$0) {
	$set(this, this$0, this$0);
	$XMLDocumentScannerImpl$ContentDriver::init$(this$0);
}

bool XMLNSDocumentScannerImpl$NSContentDriver::scanRootElementHook() {
	reconfigurePipeline();
	if (this->this$0->scanStartElement()) {
		this->this$0->setScannerState(44);
		this->this$0->setDriver(this->this$0->fTrailingMiscDriver);
		return true;
	}
	return false;
}

void XMLNSDocumentScannerImpl$NSContentDriver::reconfigurePipeline() {
	$useLocalObjectStack();
	if (this->this$0->fNamespaces && this->this$0->fDTDValidator == nullptr) {
		this->this$0->fBindNamespaces = true;
	} else if (this->this$0->fNamespaces && !$nc(this->this$0->fDTDValidator)->hasGrammar()) {
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

XMLNSDocumentScannerImpl$NSContentDriver::XMLNSDocumentScannerImpl$NSContentDriver() {
}

$Class* XMLNSDocumentScannerImpl$NSContentDriver::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xerces/internal/impl/XMLNSDocumentScannerImpl;", nullptr, $FINAL | $SYNTHETIC, $field(XMLNSDocumentScannerImpl$NSContentDriver, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/XMLNSDocumentScannerImpl;)V", nullptr, $PROTECTED, $method(XMLNSDocumentScannerImpl$NSContentDriver, init$, void, $XMLNSDocumentScannerImpl*)},
		{"reconfigurePipeline", "()V", nullptr, $PRIVATE, $method(XMLNSDocumentScannerImpl$NSContentDriver, reconfigurePipeline, void)},
		{"scanRootElementHook", "()Z", nullptr, $PROTECTED, $virtualMethod(XMLNSDocumentScannerImpl$NSContentDriver, scanRootElementHook, bool), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.impl.XMLNSDocumentScannerImpl$NSContentDriver", "com.sun.org.apache.xerces.internal.impl.XMLNSDocumentScannerImpl", "NSContentDriver", $PROTECTED | $FINAL},
		{"com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl$ContentDriver", "com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl", "ContentDriver", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.XMLNSDocumentScannerImpl$NSContentDriver",
		"com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl$ContentDriver",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.impl.XMLNSDocumentScannerImpl"
	};
	$loadClass(XMLNSDocumentScannerImpl$NSContentDriver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLNSDocumentScannerImpl$NSContentDriver);
	});
	return class$;
}

$Class* XMLNSDocumentScannerImpl$NSContentDriver::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com