#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl$TrailingMiscDriver.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityScanner.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLScanner$NameType.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLScanner.h>
#include <com/sun/org/apache/xerces/internal/impl/io/MalformedByteSequenceException.h>
#include <com/sun/org/apache/xerces/internal/impl/msg/XMLMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/XMLStringBuffer.h>
#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>
#include <java/io/CharConversionException.h>
#include <java/io/EOFException.h>
#include <java/util/NoSuchElementException.h>
#include <javax/xml/stream/events/XMLEvent.h>
#include <jcpp.h>

#undef CHARACTERS
#undef COMMENT
#undef COMMENTSTRING
#undef END_DOCUMENT
#undef END_ELEMENT
#undef ENTITY_REFERENCE
#undef PROCESSING_INSTRUCTION
#undef SEVERITY_FATAL_ERROR
#undef XML_DOMAIN

using $XMLDocumentScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $XMLScanner$NameType = ::com::sun::org::apache::xerces::internal::impl::XMLScanner$NameType;
using $MalformedByteSequenceException = ::com::sun::org::apache::xerces::internal::impl::io::MalformedByteSequenceException;
using $XMLMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::msg::XMLMessageFormatter;
using $XNIException = ::com::sun::org::apache::xerces::internal::xni::XNIException;
using $CharConversionException = ::java::io::CharConversionException;
using $EOFException = ::java::io::EOFException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $XMLEvent = ::javax::xml::stream::events::XMLEvent;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

void XMLDocumentScannerImpl$TrailingMiscDriver::init$($XMLDocumentScannerImpl* this$0) {
	$set(this, this$0, this$0);
}

int32_t XMLDocumentScannerImpl$TrailingMiscDriver::next() {
	$useLocalObjectStack();
	if (this->this$0->fEmptyElement) {
		this->this$0->fEmptyElement = false;
		return $XMLEvent::END_ELEMENT;
	}
	try {
		if (this->this$0->fScannerState == 34) {
			return $XMLEvent::END_DOCUMENT;
		}
		do {
			switch (this->this$0->fScannerState) {
			case 44:
				{
					$nc(this->this$0->fEntityScanner)->skipSpaces();
					if (this->this$0->fScannerState == 34) {
						return $XMLEvent::END_DOCUMENT;
					}
					if ($nc(this->this$0->fEntityScanner)->skipChar(u'<', nullptr)) {
						this->this$0->setScannerState(21);
					} else {
						this->this$0->setScannerState(22);
					}
					break;
				}
			case 21:
				{
					++this->this$0->fMarkupDepth;
					if ($nc(this->this$0->fEntityScanner)->skipChar(u'?', nullptr)) {
						this->this$0->setScannerState(23);
					} else if ($nc(this->this$0->fEntityScanner)->skipChar(u'!', nullptr)) {
						this->this$0->setScannerState(27);
					} else if ($nc(this->this$0->fEntityScanner)->skipChar(u'/', nullptr)) {
						this->this$0->reportFatalError("MarkupNotRecognizedInMisc"_s, nullptr);
					} else {
						bool var$0 = this->this$0->isValidNameStartChar($nc(this->this$0->fEntityScanner)->peekChar());
						if (var$0 || this->this$0->isValidNameStartHighSurrogate(this->this$0->fEntityScanner->peekChar())) {
							this->this$0->reportFatalError("MarkupNotRecognizedInMisc"_s, nullptr);
							this->this$0->scanStartElement();
							this->this$0->setScannerState(22);
						} else {
							this->this$0->reportFatalError("MarkupNotRecognizedInMisc"_s, nullptr);
						}
					}
					break;
				}
			}
		} while (this->this$0->fScannerState == 21 || this->this$0->fScannerState == 44);
		switch (this->this$0->fScannerState) {
		case 23:
			{
				$nc(this->this$0->fContentBuffer)->clear();
				this->this$0->scanPI(this->this$0->fContentBuffer);
				this->this$0->setScannerState(44);
				return $XMLEvent::PROCESSING_INSTRUCTION;
			}
		case 27:
			{
				if (!$nc(this->this$0->fEntityScanner)->skipString($XMLDocumentScannerImpl::COMMENTSTRING)) {
					this->this$0->reportFatalError("InvalidCommentStart"_s, nullptr);
				}
				this->this$0->scanComment();
				this->this$0->setScannerState(44);
				return $XMLEvent::COMMENT;
			}
		case 22:
			{
				int32_t ch = $nc(this->this$0->fEntityScanner)->peekChar();
				if (ch == -1) {
					this->this$0->setScannerState(34);
					return $XMLEvent::END_DOCUMENT;
				} else {
					this->this$0->reportFatalError("ContentIllegalInTrailingMisc"_s, nullptr);
					$nc(this->this$0->fEntityScanner)->scanChar(nullptr);
					this->this$0->setScannerState(44);
					return $XMLEvent::CHARACTERS;
				}
			}
		case 28:
			{
				this->this$0->reportFatalError("ReferenceIllegalInTrailingMisc"_s, nullptr);
				this->this$0->setScannerState(44);
				return $XMLEvent::ENTITY_REFERENCE;
			}
		case 34:
			{
				this->this$0->setScannerState(48);
				return $XMLEvent::END_DOCUMENT;
			}
		case 48:
			{
				$throwNew($NoSuchElementException, "No more events to be parsed"_s);
			}
		default:
			$throwNew($XNIException, $$str({"Scanner State "_s, $$str(this->this$0->fScannerState), " not Recognized "_s}));
		}
	} catch ($MalformedByteSequenceException& e) {
		$var($String, var$1, e->getDomain());
		$var($String, var$2, e->getKey());
		$nc(this->this$0->fErrorReporter)->reportError(var$1, var$2, $(e->getArguments()), $XMLErrorReporter::SEVERITY_FATAL_ERROR, e);
		return -1;
	} catch ($CharConversionException& e) {
		$init($XMLMessageFormatter);
		$nc(this->this$0->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "CharConversionFailure"_s, nullptr, $XMLErrorReporter::SEVERITY_FATAL_ERROR, e);
		return -1;
	} catch ($EOFException& e) {
		if (this->this$0->fMarkupDepth != 0) {
			this->this$0->reportFatalError("PrematureEOF"_s, nullptr);
			return -1;
		}
		this->this$0->setScannerState(34);
	}
	return $XMLEvent::END_DOCUMENT;
}

XMLDocumentScannerImpl$TrailingMiscDriver::XMLDocumentScannerImpl$TrailingMiscDriver() {
}

$Class* XMLDocumentScannerImpl$TrailingMiscDriver::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl;", nullptr, $FINAL | $SYNTHETIC, $field(XMLDocumentScannerImpl$TrailingMiscDriver, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl;)V", nullptr, $PROTECTED, $method(XMLDocumentScannerImpl$TrailingMiscDriver, init$, void, $XMLDocumentScannerImpl*)},
		{"next", "()I", nullptr, $PUBLIC, $virtualMethod(XMLDocumentScannerImpl$TrailingMiscDriver, next, int32_t), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl$TrailingMiscDriver", "com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl", "TrailingMiscDriver", $PROTECTED | $FINAL},
		{"com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$Driver", "com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl", "Driver", $PROTECTED | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl$TrailingMiscDriver",
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
	$loadClass(XMLDocumentScannerImpl$TrailingMiscDriver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLDocumentScannerImpl$TrailingMiscDriver);
	});
	return class$;
}

$Class* XMLDocumentScannerImpl$TrailingMiscDriver::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com