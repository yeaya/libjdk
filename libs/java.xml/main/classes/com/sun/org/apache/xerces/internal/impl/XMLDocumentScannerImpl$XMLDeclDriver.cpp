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
#include <javax/xml/stream/events/XMLEvent.h>
#include <jcpp.h>

#undef SEVERITY_FATAL_ERROR
#undef START_DOCUMENT
#undef XMLDECL
#undef XML_DOMAIN

using $XMLDocumentFragmentScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl;
using $XMLDocumentScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $MalformedByteSequenceException = ::com::sun::org::apache::xerces::internal::impl::io::MalformedByteSequenceException;
using $XMLMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::msg::XMLMessageFormatter;
using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
using $CharConversionException = ::java::io::CharConversionException;
using $EOFException = ::java::io::EOFException;
using $ClassInfo = ::java::lang::ClassInfo;
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

void XMLDocumentScannerImpl$XMLDeclDriver::init$($XMLDocumentScannerImpl* this$0) {
	$set(this, this$0, this$0);
}

int32_t XMLDocumentScannerImpl$XMLDeclDriver::next() {
	$useLocalObjectStack();
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
		$nc(this->this$0->fErrorReporter)->reportError(var$0, var$1, $(e->getArguments()), $XMLErrorReporter::SEVERITY_FATAL_ERROR, e);
		return -1;
	} catch ($CharConversionException& e) {
		$init($XMLMessageFormatter);
		$nc(this->this$0->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "CharConversionFailure"_s, nullptr, $XMLErrorReporter::SEVERITY_FATAL_ERROR, e);
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
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl;", nullptr, $FINAL | $SYNTHETIC, $field(XMLDocumentScannerImpl$XMLDeclDriver, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl;)V", nullptr, $PROTECTED, $method(XMLDocumentScannerImpl$XMLDeclDriver, init$, void, $XMLDocumentScannerImpl*)},
		{"next", "()I", nullptr, $PUBLIC, $virtualMethod(XMLDocumentScannerImpl$XMLDeclDriver, next, int32_t), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl$XMLDeclDriver", "com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl", "XMLDeclDriver", $PROTECTED | $FINAL},
		{"com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$Driver", "com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl", "Driver", $PROTECTED | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl$XMLDeclDriver",
		"java.lang.Object",
		"com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$Driver",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl"
	};
	$loadClass(XMLDocumentScannerImpl$XMLDeclDriver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLDocumentScannerImpl$XMLDeclDriver);
	});
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