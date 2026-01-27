#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl$ContentDriver.h>

#include <com/sun/org/apache/xerces/internal/impl/ExternalSubsetResolver.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$Driver.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$FragmentContentDriver.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityScanner.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDDescription.h>
#include <com/sun/org/apache/xerces/internal/util/XMLResourceIdentifierImpl.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLDTDDescription.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDScanner.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <java/io/EOFException.h>
#include <jcpp.h>

#undef DOCTYPE

using $ExternalSubsetResolver = ::com::sun::org::apache::xerces::internal::impl::ExternalSubsetResolver;
using $XMLDocumentFragmentScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl;
using $XMLDocumentFragmentScannerImpl$FragmentContentDriver = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl$FragmentContentDriver;
using $XMLDocumentScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl;
using $XMLEntityHandler = ::com::sun::org::apache::xerces::internal::impl::XMLEntityHandler;
using $XMLEntityManager = ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager;
using $XMLEntityScanner = ::com::sun::org::apache::xerces::internal::impl::XMLEntityScanner;
using $XMLDTDDescription = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDDescription;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $XMLDocumentHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler;
using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $1XMLDTDDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLDTDDescription;
using $XMLDTDScanner = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDScanner;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $EOFException = ::java::io::EOFException;
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

$FieldInfo _XMLDocumentScannerImpl$ContentDriver_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl;", nullptr, $FINAL | $SYNTHETIC, $field(XMLDocumentScannerImpl$ContentDriver, this$0)},
	{}
};

$MethodInfo _XMLDocumentScannerImpl$ContentDriver_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl;)V", nullptr, $PROTECTED, $method(XMLDocumentScannerImpl$ContentDriver, init$, void, $XMLDocumentScannerImpl*)},
	{"elementDepthIsZeroHook", "()Z", nullptr, $PROTECTED, $virtualMethod(XMLDocumentScannerImpl$ContentDriver, elementDepthIsZeroHook, bool), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endOfFileHook", "(Ljava/io/EOFException;)V", nullptr, $PROTECTED, $virtualMethod(XMLDocumentScannerImpl$ContentDriver, endOfFileHook, void, $EOFException*), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"resolveExternalSubsetAndRead", "()V", nullptr, $PROTECTED, $virtualMethod(XMLDocumentScannerImpl$ContentDriver, resolveExternalSubsetAndRead, void), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanForDoctypeHook", "()Z", nullptr, $PROTECTED, $virtualMethod(XMLDocumentScannerImpl$ContentDriver, scanForDoctypeHook, bool), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanRootElementHook", "()Z", nullptr, $PROTECTED, $virtualMethod(XMLDocumentScannerImpl$ContentDriver, scanRootElementHook, bool), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$InnerClassInfo _XMLDocumentScannerImpl$ContentDriver_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl$ContentDriver", "com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl", "ContentDriver", $PROTECTED},
	{"com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$FragmentContentDriver", "com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl", "FragmentContentDriver", $PROTECTED},
	{}
};

$ClassInfo _XMLDocumentScannerImpl$ContentDriver_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl$ContentDriver",
	"com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$FragmentContentDriver",
	nullptr,
	_XMLDocumentScannerImpl$ContentDriver_FieldInfo_,
	_XMLDocumentScannerImpl$ContentDriver_MethodInfo_,
	nullptr,
	nullptr,
	_XMLDocumentScannerImpl$ContentDriver_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl"
};

$Object* allocate$XMLDocumentScannerImpl$ContentDriver($Class* clazz) {
	return $of($alloc(XMLDocumentScannerImpl$ContentDriver));
}

void XMLDocumentScannerImpl$ContentDriver::init$($XMLDocumentScannerImpl* this$0) {
	$set(this, this$0, this$0);
	$XMLDocumentFragmentScannerImpl$FragmentContentDriver::init$(this$0);
}

bool XMLDocumentScannerImpl$ContentDriver::scanForDoctypeHook() {
	$init($XMLDocumentScannerImpl);
	if ($nc(this->this$0->fEntityScanner)->skipString($XMLDocumentScannerImpl::DOCTYPE)) {
		this->this$0->setScannerState(24);
		return true;
	}
	return false;
}

bool XMLDocumentScannerImpl$ContentDriver::elementDepthIsZeroHook() {
	this->this$0->setScannerState(44);
	this->this$0->setDriver(this->this$0->fTrailingMiscDriver);
	return true;
}

bool XMLDocumentScannerImpl$ContentDriver::scanRootElementHook() {
	if (this->this$0->scanStartElement()) {
		this->this$0->setScannerState(44);
		this->this$0->setDriver(this->this$0->fTrailingMiscDriver);
		return true;
	}
	return false;
}

void XMLDocumentScannerImpl$ContentDriver::endOfFileHook($EOFException* e) {
	this->this$0->reportFatalError("PrematureEOF"_s, nullptr);
}

void XMLDocumentScannerImpl$ContentDriver::resolveExternalSubsetAndRead() {
	$useLocalCurrentObjectStackCache();
	$nc(this->this$0->fDTDDescription)->setValues(nullptr, nullptr, $($nc($($nc(this->this$0->fEntityManager)->getCurrentResourceIdentifier()))->getExpandedSystemId()), nullptr);
	$nc(this->this$0->fDTDDescription)->setRootName($nc(this->this$0->fElementQName)->rawname);
	$var($XMLInputSource, src, $nc(this->this$0->fExternalSubsetResolver)->getExternalSubset(this->this$0->fDTDDescription));
	if (src != nullptr) {
		$set(this->this$0, fDoctypeName, $nc(this->this$0->fElementQName)->rawname);
		$set(this->this$0, fDoctypePublicId, src->getPublicId());
		$set(this->this$0, fDoctypeSystemId, src->getSystemId());
		if (this->this$0->fDocumentHandler != nullptr) {
			$nc(this->this$0->fDocumentHandler)->doctypeDecl(this->this$0->fDoctypeName, this->this$0->fDoctypePublicId, this->this$0->fDoctypeSystemId, nullptr);
		}
		{
			$var($Throwable, var$0, nullptr);
			try {
				$nc(this->this$0->fDTDScanner)->setInputSource(src);
				while ($nc(this->this$0->fDTDScanner)->scanDTDExternalSubset(true)) {
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$nc(this->this$0->fEntityManager)->setEntityHandler(this->this$0);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

XMLDocumentScannerImpl$ContentDriver::XMLDocumentScannerImpl$ContentDriver() {
}

$Class* XMLDocumentScannerImpl$ContentDriver::load$($String* name, bool initialize) {
	$loadClass(XMLDocumentScannerImpl$ContentDriver, name, initialize, &_XMLDocumentScannerImpl$ContentDriver_ClassInfo_, allocate$XMLDocumentScannerImpl$ContentDriver);
	return class$;
}

$Class* XMLDocumentScannerImpl$ContentDriver::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com