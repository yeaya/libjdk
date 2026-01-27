#include <com/sun/org/apache/xml/internal/serialize/XML11Serializer.h>

#include <com/sun/org/apache/xerces/internal/dom/DOMErrorImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/XML11Char.h>
#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <com/sun/org/apache/xml/internal/serialize/BaseMarkupSerializer.h>
#include <com/sun/org/apache/xml/internal/serialize/DOMSerializerImpl.h>
#include <com/sun/org/apache/xml/internal/serialize/ElementState.h>
#include <com/sun/org/apache/xml/internal/serialize/EncodingInfo.h>
#include <com/sun/org/apache/xml/internal/serialize/Method.h>
#include <com/sun/org/apache/xml/internal/serialize/OutputFormat.h>
#include <com/sun/org/apache/xml/internal/serialize/Printer.h>
#include <com/sun/org/apache/xml/internal/serialize/XMLSerializer.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/io/Writer.h>
#include <org/w3c/dom/DOMError.h>
#include <org/w3c/dom/DOMErrorHandler.h>
#include <org/w3c/dom/Node.h>
#include <org/xml/sax/SAXException.h>
#include <jcpp.h>

#undef DEBUG
#undef PREFIX
#undef SERIALIZER_DOMAIN
#undef SEVERITY_FATAL_ERROR
#undef SEVERITY_WARNING
#undef SPLITCDATA
#undef WELLFORMED
#undef XML

using $DOMMessageFormatter = ::com::sun::org::apache::xerces::internal::dom::DOMMessageFormatter;
using $XML11Char = ::com::sun::org::apache::xerces::internal::util::XML11Char;
using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
using $DOMSerializerImpl = ::com::sun::org::apache::xml::internal::serialize::DOMSerializerImpl;
using $ElementState = ::com::sun::org::apache::xml::internal::serialize::ElementState;
using $EncodingInfo = ::com::sun::org::apache::xml::internal::serialize::EncodingInfo;
using $Method = ::com::sun::org::apache::xml::internal::serialize::Method;
using $OutputFormat = ::com::sun::org::apache::xml::internal::serialize::OutputFormat;
using $Printer = ::com::sun::org::apache::xml::internal::serialize::Printer;
using $XMLSerializer = ::com::sun::org::apache::xml::internal::serialize::XMLSerializer;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMError = ::org::w3c::dom::DOMError;
using $DOMErrorHandler = ::org::w3c::dom::DOMErrorHandler;
using $SAXException = ::org::xml::sax::SAXException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {

$CompoundAttribute _XML11Serializer_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _XML11Serializer_FieldInfo_[] = {
	{"DEBUG", "Z", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XML11Serializer, DEBUG)},
	{"fNSBinder", "Lcom/sun/org/apache/xerces/internal/util/NamespaceSupport;", nullptr, $PROTECTED, $field(XML11Serializer, fNSBinder)},
	{"fLocalNSBinder", "Lcom/sun/org/apache/xerces/internal/util/NamespaceSupport;", nullptr, $PROTECTED, $field(XML11Serializer, fLocalNSBinder)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PROTECTED, $field(XML11Serializer, fSymbolTable)},
	{"fDOML1", "Z", nullptr, $PROTECTED, $field(XML11Serializer, fDOML1)},
	{"fNamespaceCounter", "I", nullptr, $PROTECTED, $field(XML11Serializer, fNamespaceCounter)},
	{"PREFIX", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Serializer, PREFIX)},
	{"fNamespaces", "Z", nullptr, $PROTECTED, $field(XML11Serializer, fNamespaces)},
	{}
};

$MethodInfo _XML11Serializer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XML11Serializer, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/serialize/OutputFormat;)V", nullptr, $PUBLIC, $method(XML11Serializer, init$, void, $OutputFormat*)},
	{"<init>", "(Ljava/io/Writer;Lcom/sun/org/apache/xml/internal/serialize/OutputFormat;)V", nullptr, $PUBLIC, $method(XML11Serializer, init$, void, $Writer*, $OutputFormat*)},
	{"<init>", "(Ljava/io/OutputStream;Lcom/sun/org/apache/xml/internal/serialize/OutputFormat;)V", nullptr, $PUBLIC, $method(XML11Serializer, init$, void, $OutputStream*, $OutputFormat*)},
	{"characters", "([CII)V", nullptr, $PUBLIC, $virtualMethod(XML11Serializer, characters, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"printCDATAText", "(Ljava/lang/String;)V", nullptr, $PROTECTED | $FINAL, $virtualMethod(XML11Serializer, printCDATAText, void, $String*), "java.io.IOException"},
	{"printEscaped", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(XML11Serializer, printEscaped, void, $String*), "java.io.IOException"},
	{"printText", "(Ljava/lang/String;ZZ)V", nullptr, $PROTECTED, $virtualMethod(XML11Serializer, printText, void, $String*, bool, bool), "java.io.IOException"},
	{"printText", "([CIIZZ)V", nullptr, $PROTECTED, $virtualMethod(XML11Serializer, printText, void, $chars*, int32_t, int32_t, bool, bool), "java.io.IOException"},
	{"printXMLChar", "(I)V", nullptr, $PROTECTED | $FINAL, $virtualMethod(XML11Serializer, printXMLChar, void, int32_t), "java.io.IOException"},
	{"reset", "()Z", nullptr, $PUBLIC, $virtualMethod(XML11Serializer, reset, bool)},
	{"surrogates", "(IIZ)V", nullptr, $PROTECTED | $FINAL, $virtualMethod(XML11Serializer, surrogates, void, int32_t, int32_t, bool), "java.io.IOException"},
	{}
};

$ClassInfo _XML11Serializer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serialize.XML11Serializer",
	"com.sun.org.apache.xml.internal.serialize.XMLSerializer",
	nullptr,
	_XML11Serializer_FieldInfo_,
	_XML11Serializer_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_XML11Serializer_Annotations_
};

$Object* allocate$XML11Serializer($Class* clazz) {
	return $of($alloc(XML11Serializer));
}

$String* XML11Serializer::PREFIX = nullptr;

void XML11Serializer::init$() {
	$XMLSerializer::init$();
	this->fDOML1 = false;
	this->fNamespaceCounter = 1;
	this->fNamespaces = false;
	$nc(this->_format)->setVersion("1.1"_s);
}

void XML11Serializer::init$($OutputFormat* format) {
	$XMLSerializer::init$(format);
	this->fDOML1 = false;
	this->fNamespaceCounter = 1;
	this->fNamespaces = false;
	$nc(this->_format)->setVersion("1.1"_s);
}

void XML11Serializer::init$($Writer* writer, $OutputFormat* format) {
	$XMLSerializer::init$(writer, format);
	this->fDOML1 = false;
	this->fNamespaceCounter = 1;
	this->fNamespaces = false;
	$nc(this->_format)->setVersion("1.1"_s);
}

void XML11Serializer::init$($OutputStream* output, $OutputFormat* format) {
	$init($Method);
	$XMLSerializer::init$(output, format != nullptr ? format : $$new($OutputFormat, $Method::XML, nullptr, false));
	this->fDOML1 = false;
	this->fNamespaceCounter = 1;
	this->fNamespaces = false;
	$nc(this->_format)->setVersion("1.1"_s);
}

void XML11Serializer::characters($chars* chars, int32_t start, int32_t length) {
	$useLocalCurrentObjectStackCache();
	$var($ElementState, state, nullptr);
	try {
		$assign(state, content());
		if ($nc(state)->inCData || $nc(state)->doCData) {
			int32_t saveIndent = 0;
			if (!state->inCData) {
				$nc(this->_printer)->printText("<![CDATA["_s);
				state->inCData = true;
			}
			saveIndent = $nc(this->_printer)->getNextIndent();
			$nc(this->_printer)->setNextIndent(0);
			char16_t ch = 0;
			int32_t end = start + length;
			for (int32_t index = start; index < end; ++index) {
				ch = $nc(chars)->get(index);
				if (ch == u']' && index + 2 < end && chars->get(index + 1) == u']' && chars->get(index + 2) == u'>') {
					$nc(this->_printer)->printText("]]]]><![CDATA[>"_s);
					index += 2;
					continue;
				}
				if (!$XML11Char::isXML11Valid(ch)) {
					if (++index < end) {
						surrogates(ch, chars->get(index), true);
					} else {
						fatalError($$str({"The character \'"_s, $$str(ch), "\' is an invalid XML character"_s}));
					}
					continue;
				}
				bool var$0 = $nc(this->_encodingInfo)->isPrintable(ch);
				if (var$0 && $XML11Char::isXML11ValidLiteral(ch)) {
					$nc(this->_printer)->printText(ch);
				} else {
					$nc(this->_printer)->printText("]]>&#x"_s);
					$nc(this->_printer)->printText($($Integer::toHexString(ch)));
					$nc(this->_printer)->printText(";<![CDATA["_s);
				}
			}
			$nc(this->_printer)->setNextIndent(saveIndent);
		} else {
			int32_t saveIndent = 0;
			if (state->preserveSpace) {
				saveIndent = $nc(this->_printer)->getNextIndent();
				$nc(this->_printer)->setNextIndent(0);
				printText(chars, start, length, true, state->unescaped);
				$nc(this->_printer)->setNextIndent(saveIndent);
			} else {
				printText(chars, start, length, false, state->unescaped);
			}
		}
	} catch ($IOException& except) {
		$throwNew($SAXException, static_cast<$Exception*>(except));
	}
}

void XML11Serializer::printEscaped($String* source) {
	$useLocalCurrentObjectStackCache();
	int32_t length = $nc(source)->length();
	for (int32_t i = 0; i < length; ++i) {
		int32_t ch = source->charAt(i);
		if (!$XML11Char::isXML11Valid(ch)) {
			if (++i < length) {
				surrogates(ch, source->charAt(i), false);
			} else {
				fatalError($$str({"The character \'"_s, $$str((char16_t)ch), "\' is an invalid XML character"_s}));
			}
			continue;
		}
		if (ch == u'\n' || ch == u'\r' || ch == u'\t' || ch == 133 || ch == 8232) {
			printHex(ch);
		} else if (ch == u'<') {
			$nc(this->_printer)->printText("&lt;"_s);
		} else if (ch == u'&') {
			$nc(this->_printer)->printText("&amp;"_s);
		} else if (ch == u'\"') {
			$nc(this->_printer)->printText("&quot;"_s);
		} else if (ch >= u' ' && $nc(this->_encodingInfo)->isPrintable((char16_t)ch)) {
			$nc(this->_printer)->printText((char16_t)ch);
		} else {
			printHex(ch);
		}
	}
}

void XML11Serializer::printCDATAText($String* text) {
	$useLocalCurrentObjectStackCache();
	int32_t length = $nc(text)->length();
	char16_t ch = 0;
	for (int32_t index = 0; index < length; ++index) {
		ch = text->charAt(index);
		bool var$0 = ch == u']' && index + 2 < length && text->charAt(index + 1) == u']';
		if (var$0 && text->charAt(index + 2) == u'>') {
			if (this->fDOMErrorHandler != nullptr) {
				if (((int32_t)(this->features & (uint32_t)(int32_t)$DOMSerializerImpl::SPLITCDATA)) == 0 && ((int32_t)(this->features & (uint32_t)(int32_t)$DOMSerializerImpl::WELLFORMED)) == 0) {
					$init($DOMMessageFormatter);
					$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::SERIALIZER_DOMAIN, "EndingCDATA"_s, nullptr));
					modifyDOMError(msg, $DOMError::SEVERITY_FATAL_ERROR, nullptr, this->fCurrentNode);
					bool continueProcess = $nc(this->fDOMErrorHandler)->handleError(this->fDOMError);
					if (!continueProcess) {
						$throwNew($IOException);
					}
				} else {
					$init($DOMMessageFormatter);
					$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::SERIALIZER_DOMAIN, "SplittingCDATA"_s, nullptr));
					modifyDOMError(msg, $DOMError::SEVERITY_WARNING, nullptr, this->fCurrentNode);
					$nc(this->fDOMErrorHandler)->handleError(this->fDOMError);
				}
			}
			$nc(this->_printer)->printText("]]]]><![CDATA[>"_s);
			index += 2;
			continue;
		}
		if (!$XML11Char::isXML11Valid(ch)) {
			if (++index < length) {
				surrogates(ch, text->charAt(index), true);
			} else {
				fatalError($$str({"The character \'"_s, $$str(ch), "\' is an invalid XML character"_s}));
			}
			continue;
		}
		bool var$1 = $nc(this->_encodingInfo)->isPrintable(ch);
		if (var$1 && $XML11Char::isXML11ValidLiteral(ch)) {
			$nc(this->_printer)->printText(ch);
		} else {
			$nc(this->_printer)->printText("]]>&#x"_s);
			$nc(this->_printer)->printText($($Integer::toHexString(ch)));
			$nc(this->_printer)->printText(";<![CDATA["_s);
		}
	}
}

void XML11Serializer::printXMLChar(int32_t ch) {
	if (ch == u'\r' || ch == 133 || ch == 8232) {
		printHex(ch);
	} else if (ch == u'<') {
		$nc(this->_printer)->printText("&lt;"_s);
	} else if (ch == u'&') {
		$nc(this->_printer)->printText("&amp;"_s);
	} else if (ch == u'>') {
		$nc(this->_printer)->printText("&gt;"_s);
	} else {
		bool var$1 = $nc(this->_encodingInfo)->isPrintable((char16_t)ch);
		if (var$1 && $XML11Char::isXML11ValidLiteral(ch)) {
			$nc(this->_printer)->printText((char16_t)ch);
		} else {
			printHex(ch);
		}
	}
}

void XML11Serializer::surrogates(int32_t high, int32_t low, bool inContent) {
	$useLocalCurrentObjectStackCache();
	if ($XMLChar::isHighSurrogate(high)) {
		if (!$XMLChar::isLowSurrogate(low)) {
			fatalError($$str({"The character \'"_s, $$str((char16_t)low), "\' is an invalid XML character"_s}));
		} else {
			int32_t supplemental = $XMLChar::supplemental((char16_t)high, (char16_t)low);
			if (!$XML11Char::isXML11Valid(supplemental)) {
				fatalError($$str({"The character \'"_s, $$str((char16_t)supplemental), "\' is an invalid XML character"_s}));
			} else if (inContent && $nc($(content()))->inCData) {
				$nc(this->_printer)->printText("]]>&#x"_s);
				$nc(this->_printer)->printText($($Integer::toHexString(supplemental)));
				$nc(this->_printer)->printText(";<![CDATA["_s);
			} else {
				printHex(supplemental);
			}
		}
	} else {
		fatalError($$str({"The character \'"_s, $$str((char16_t)high), "\' is an invalid XML character"_s}));
	}
}

void XML11Serializer::printText($String* text, bool preserveSpace, bool unescaped) {
	$useLocalCurrentObjectStackCache();
	int32_t index = 0;
	char16_t ch = 0;
	int32_t length = $nc(text)->length();
	if (preserveSpace) {
		for (index = 0; index < length; ++index) {
			ch = text->charAt(index);
			if (!$XML11Char::isXML11Valid(ch)) {
				if (++index < length) {
					surrogates(ch, text->charAt(index), true);
				} else {
					fatalError($$str({"The character \'"_s, $$str(ch), "\' is an invalid XML character"_s}));
				}
				continue;
			}
			if (unescaped && $XML11Char::isXML11ValidLiteral(ch)) {
				$nc(this->_printer)->printText(ch);
			} else {
				printXMLChar(ch);
			}
		}
	} else {
		for (index = 0; index < length; ++index) {
			ch = text->charAt(index);
			if (!$XML11Char::isXML11Valid(ch)) {
				if (++index < length) {
					surrogates(ch, text->charAt(index), true);
				} else {
					fatalError($$str({"The character \'"_s, $$str(ch), "\' is an invalid XML character"_s}));
				}
				continue;
			}
			if (unescaped && $XML11Char::isXML11ValidLiteral(ch)) {
				$nc(this->_printer)->printText(ch);
			} else {
				printXMLChar(ch);
			}
		}
	}
}

void XML11Serializer::printText($chars* chars, int32_t start, int32_t length, bool preserveSpace, bool unescaped) {
	$useLocalCurrentObjectStackCache();
	if (preserveSpace) {
		while (length-- > 0) {
			char16_t ch = $nc(chars)->get(start++);
			if (!$XML11Char::isXML11Valid(ch)) {
				if (length-- > 0) {
					surrogates(ch, chars->get(start++), true);
				} else {
					fatalError($$str({"The character \'"_s, $$str(ch), "\' is an invalid XML character"_s}));
				}
				continue;
			}
			if (unescaped && $XML11Char::isXML11ValidLiteral(ch)) {
				$nc(this->_printer)->printText(ch);
			} else {
				printXMLChar(ch);
			}
		}
	} else {
		while (length-- > 0) {
			char16_t ch = $nc(chars)->get(start++);
			if (!$XML11Char::isXML11Valid(ch)) {
				if (length-- > 0) {
					surrogates(ch, chars->get(start++), true);
				} else {
					fatalError($$str({"The character \'"_s, $$str(ch), "\' is an invalid XML character"_s}));
				}
				continue;
			}
			if (unescaped && $XML11Char::isXML11ValidLiteral(ch)) {
				$nc(this->_printer)->printText(ch);
			} else {
				printXMLChar(ch);
			}
		}
	}
}

bool XML11Serializer::reset() {
	$XMLSerializer::reset();
	return true;
}

XML11Serializer::XML11Serializer() {
}

void clinit$XML11Serializer($Class* class$) {
	$assignStatic(XML11Serializer::PREFIX, "NS"_s);
}

$Class* XML11Serializer::load$($String* name, bool initialize) {
	$loadClass(XML11Serializer, name, initialize, &_XML11Serializer_ClassInfo_, clinit$XML11Serializer, allocate$XML11Serializer);
	return class$;
}

$Class* XML11Serializer::class$ = nullptr;

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com