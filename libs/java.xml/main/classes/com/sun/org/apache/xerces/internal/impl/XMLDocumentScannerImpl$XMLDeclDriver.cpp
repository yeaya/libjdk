#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl$XMLDeclDriver.h>

#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$Driver.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityScanner.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/io/MalformedByteSequenceException.h>
#include <com/sun/org/apache/xerces/internal/impl/msg/XMLMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <com/sun/xml/internal/stream/Entity$ScannedEntity.h>
#include <java/io/CharConversionException.h>
#include <java/io/EOFException.h>
#include <java/io/IOException.h>
#include <javax/xml/stream/events/XMLEvent.h>
#include <jcpp.h>

#undef SEVERITY_FATAL_ERROR
#undef START_DOCUMENT
#undef XMLDECL
#undef XML_DOMAIN

using $XMLDocumentFragmentScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl;
using $XMLDocumentScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl;
using $XMLEntityScanner = ::com::sun::org::apache::xerces::internal::impl::XMLEntityScanner;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $MalformedByteSequenceException = ::com::sun::org::apache::xerces::internal::impl::io::MalformedByteSequenceException;
using $XMLMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::msg::XMLMessageFormatter;
using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
using $CharConversionException = ::java::io::CharConversionException;
using $EOFException = ::java::io::EOFException;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XMLEvent = ::javax::xml::stream::events::XMLEvent;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

$FieldInfo _XMLDocumentScannerImpl$XMLDeclDriver_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl;", nullptr, $FINAL | $SYNTHETIC, $field(XMLDocumentScannerImpl$XMLDeclDriver, this$0)},
	{}
};

$MethodInfo _XMLDocumentScannerImpl$XMLDeclDriver_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl;)V", nullptr, $PROTECTED, $method(XMLDocumentScannerImpl$XMLDeclDriver, init$, void, $XMLDocumentScannerImpl*)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(XMLDocumentScannerImpl$XMLDeclDriver, next, int32_t), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$InnerClassInfo _XMLDocumentScannerImpl$XMLDeclDriver_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl$XMLDeclDriver", "com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl", "XMLDeclDriver", $PROTECTED | $FINAL},
	{"com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$Driver", "com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl", "Driver", $PROTECTED | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _XMLDocumentScannerImpl$XMLDeclDriver_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl$XMLDeclDriver",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$Driver",
	_XMLDocumentScannerImpl$XMLDeclDriver_FieldInfo_,
	_XMLDocumentScannerImpl$XMLDeclDriver_MethodInfo_,
	nullptr,
	nullptr,
	_XMLDocumentScannerImpl$XMLDeclDriver_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl"
};

$Object* allocate$XMLDocumentScannerImpl$XMLDeclDriver($Class* clazz) {
	return $of($alloc(XMLDocumentScannerImpl$XMLDeclDriver));
}

void XMLDocumentScannerImpl$XMLDeclDriver::init$($XMLDocumentScannerImpl* this$0) {
	$set(this, this$0, this$0);
}

int32_t XMLDocumentScannerImpl$XMLDeclDriver::next() {
	$useLocalCurrentObjectStackCache();
	this->this$0->setScannerState(43);
	this->this$0->setDriver(this->this$0->fPrologDriver);
	try {
		$init($XMLDocumentFragmentScannerImpl);
		if ($nc(this->this$0->fEntityScanner)->skipString($XMLDocumentFragmentScannerImpl::XMLDECL)) {
			if ($XMLChar::isSpace($nc(this->this$0->fEntityScanner)->peekChar())) {
				++this->this$0->fMarkupDepth;
				this->this$0->scanXMLDeclOrTextDecl(false);
			} else {
				$nc($nc(this->this$0->fEntityManager)->fCurrentEntity)->position = 0;
			}
		}
		$nc($nc(this->this$0->fEntityManager)->fCurrentEntity)->mayReadChunks = true;
		return $XMLEvent::START_DOCUMENT;
	} catch ($MalformedByteSequenceException& e) {
		$var($String, var$0, e->getDomain());
		$var($String, var$1, e->getKey());
		$nc(this->this$0->fErrorReporter)->reportError(var$0, var$1, $(e->getArguments()), $XMLErrorReporter::SEVERITY_FATAL_ERROR, static_cast<$Exception*>(e));
		return -1;
	} catch ($CharConversionException& e) {
		$init($XMLMessageFormatter);
		$nc(this->this$0->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "CharConversionFailure"_s, ($ObjectArray*)nullptr, $XMLErrorReporter::SEVERITY_FATAL_ERROR, static_cast<$Exception*>(e));
		return -1;
	} catch ($EOFException& e) {
		this->this$0->reportFatalError("PrematureEOF"_s, nullptr);
		return -1;
	}
	$shouldNotReachHere();
}

XMLDocumentScannerImpl$XMLDeclDriver::XMLDocumentScannerImpl$XMLDeclDriver() {
}

$Class* XMLDocumentScannerImpl$XMLDeclDriver::load$($String* name, bool initialize) {
	$loadClass(XMLDocumentScannerImpl$XMLDeclDriver, name, initialize, &_XMLDocumentScannerImpl$XMLDeclDriver_ClassInfo_, allocate$XMLDocumentScannerImpl$XMLDeclDriver);
	return class$;
}

$Class* XMLDocumentScannerImpl$XMLDeclDriver::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com