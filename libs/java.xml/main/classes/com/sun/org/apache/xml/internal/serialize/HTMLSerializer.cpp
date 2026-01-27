#include <com/sun/org/apache/xml/internal/serialize/HTMLSerializer.h>

#include <com/sun/org/apache/xerces/internal/dom/DOMMessageFormatter.h>
#include <com/sun/org/apache/xml/internal/serialize/BaseMarkupSerializer.h>
#include <com/sun/org/apache/xml/internal/serialize/ElementState.h>
#include <com/sun/org/apache/xml/internal/serialize/HTMLdtd.h>
#include <com/sun/org/apache/xml/internal/serialize/Method.h>
#include <com/sun/org/apache/xml/internal/serialize/OutputFormat.h>
#include <com/sun/org/apache/xml/internal/serialize/Printer.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/io/Writer.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/StringBuffer.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/xml/sax/AttributeList.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/SAXException.h>
#include <jcpp.h>

#undef ENGLISH
#undef HTML
#undef SERIALIZER_DOMAIN

using $DOMMessageFormatter = ::com::sun::org::apache::xerces::internal::dom::DOMMessageFormatter;
using $BaseMarkupSerializer = ::com::sun::org::apache::xml::internal::serialize::BaseMarkupSerializer;
using $ElementState = ::com::sun::org::apache::xml::internal::serialize::ElementState;
using $HTMLdtd = ::com::sun::org::apache::xml::internal::serialize::HTMLdtd;
using $Method = ::com::sun::org::apache::xml::internal::serialize::Method;
using $OutputFormat = ::com::sun::org::apache::xml::internal::serialize::OutputFormat;
using $Printer = ::com::sun::org::apache::xml::internal::serialize::Printer;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $Attr = ::org::w3c::dom::Attr;
using $Element = ::org::w3c::dom::Element;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;
using $AttributeList = ::org::xml::sax::AttributeList;
using $Attributes = ::org::xml::sax::Attributes;
using $SAXException = ::org::xml::sax::SAXException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {

$CompoundAttribute _HTMLSerializer_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _HTMLSerializer_FieldInfo_[] = {
	{"_xhtml", "Z", nullptr, $PRIVATE, $field(HTMLSerializer, _xhtml)},
	{"XHTMLNamespace", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTMLSerializer, XHTMLNamespace)},
	{"fUserXHTMLNamespace", "Ljava/lang/String;", nullptr, $PRIVATE, $field(HTMLSerializer, fUserXHTMLNamespace)},
	{}
};

$MethodInfo _HTMLSerializer_MethodInfo_[] = {
	{"<init>", "(ZLcom/sun/org/apache/xml/internal/serialize/OutputFormat;)V", nullptr, $PROTECTED, $method(HTMLSerializer, init$, void, bool, $OutputFormat*)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(HTMLSerializer, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/serialize/OutputFormat;)V", nullptr, $PUBLIC, $method(HTMLSerializer, init$, void, $OutputFormat*)},
	{"<init>", "(Ljava/io/Writer;Lcom/sun/org/apache/xml/internal/serialize/OutputFormat;)V", nullptr, $PUBLIC, $method(HTMLSerializer, init$, void, $Writer*, $OutputFormat*)},
	{"<init>", "(Ljava/io/OutputStream;Lcom/sun/org/apache/xml/internal/serialize/OutputFormat;)V", nullptr, $PUBLIC, $method(HTMLSerializer, init$, void, $OutputStream*, $OutputFormat*)},
	{"characters", "([CII)V", nullptr, $PUBLIC, $virtualMethod(HTMLSerializer, characters, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"characters", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(HTMLSerializer, characters, void, $String*), "java.io.IOException"},
	{"endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(HTMLSerializer, endElement, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(HTMLSerializer, endElement, void, $String*), "org.xml.sax.SAXException"},
	{"endElementIO", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(HTMLSerializer, endElementIO, void, $String*, $String*, $String*), "java.io.IOException"},
	{"escapeURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(HTMLSerializer, escapeURI, $String*, $String*)},
	{"getEntityRef", "(I)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(HTMLSerializer, getEntityRef, $String*, int32_t)},
	{"serializeElement", "(Lorg/w3c/dom/Element;)V", nullptr, $PROTECTED, $virtualMethod(HTMLSerializer, serializeElement, void, $Element*), "java.io.IOException"},
	{"setOutputFormat", "(Lcom/sun/org/apache/xml/internal/serialize/OutputFormat;)V", nullptr, $PUBLIC, $virtualMethod(HTMLSerializer, setOutputFormat, void, $OutputFormat*)},
	{"setXHTMLNamespace", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(HTMLSerializer, setXHTMLNamespace, void, $String*)},
	{"startDocument", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(HTMLSerializer, startDocument, void, $String*), "java.io.IOException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, $virtualMethod(HTMLSerializer, startElement, void, $String*, $String*, $String*, $Attributes*), "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Lorg/xml/sax/AttributeList;)V", nullptr, $PUBLIC, $virtualMethod(HTMLSerializer, startElement, void, $String*, $AttributeList*), "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _HTMLSerializer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serialize.HTMLSerializer",
	"com.sun.org.apache.xml.internal.serialize.BaseMarkupSerializer",
	nullptr,
	_HTMLSerializer_FieldInfo_,
	_HTMLSerializer_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_HTMLSerializer_Annotations_
};

$Object* allocate$HTMLSerializer($Class* clazz) {
	return $of($alloc(HTMLSerializer));
}

$String* HTMLSerializer::XHTMLNamespace = nullptr;

void HTMLSerializer::init$(bool xhtml, $OutputFormat* format) {
	$BaseMarkupSerializer::init$(format);
	$set(this, fUserXHTMLNamespace, nullptr);
	this->_xhtml = xhtml;
}

void HTMLSerializer::init$() {
	$init($Method);
	HTMLSerializer::init$(false, $$new($OutputFormat, $Method::HTML, "ISO-8859-1"_s, false));
}

void HTMLSerializer::init$($OutputFormat* format) {
	$init($Method);
	HTMLSerializer::init$(false, format != nullptr ? format : $$new($OutputFormat, $Method::HTML, "ISO-8859-1"_s, false));
}

void HTMLSerializer::init$($Writer* writer, $OutputFormat* format) {
	$init($Method);
	HTMLSerializer::init$(false, format != nullptr ? format : $$new($OutputFormat, $Method::HTML, "ISO-8859-1"_s, false));
	setOutputCharStream(writer);
}

void HTMLSerializer::init$($OutputStream* output, $OutputFormat* format) {
	$init($Method);
	HTMLSerializer::init$(false, format != nullptr ? format : $$new($OutputFormat, $Method::HTML, "ISO-8859-1"_s, false));
	setOutputByteStream(output);
}

void HTMLSerializer::setOutputFormat($OutputFormat* format) {
	$init($Method);
	$BaseMarkupSerializer::setOutputFormat(format != nullptr ? format : $$new($OutputFormat, $Method::HTML, "ISO-8859-1"_s, false));
}

void HTMLSerializer::setXHTMLNamespace($String* newNamespace) {
	$set(this, fUserXHTMLNamespace, newNamespace);
}

void HTMLSerializer::startElement($String* namespaceURI, $String* localName, $String* rawName$renamed, $Attributes* attrs) {
	$useLocalCurrentObjectStackCache();
	$var($String, rawName, rawName$renamed);
	int32_t i = 0;
	bool preserveSpace = false;
	$var($ElementState, state, nullptr);
	$var($String, name, nullptr);
	$var($String, value, nullptr);
	$var($String, htmlName, nullptr);
	bool addNSAttr = false;
	try {
		if (this->_printer == nullptr) {
			$init($DOMMessageFormatter);
			$throwNew($IllegalStateException, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::SERIALIZER_DOMAIN, "NoWriterSupplied"_s, nullptr)));
		}
		$assign(state, getElementState());
		if (isDocumentState()) {
			if (!this->_started) {
				startDocument((localName == nullptr || $nc(localName)->length() == 0) ? rawName : localName);
			}
		} else {
			if ($nc(state)->empty) {
				$nc(this->_printer)->printText(u'>');
			}
			if (this->_indenting && !$nc(state)->preserveSpace && (state->empty || $nc(state)->afterElement)) {
				$nc(this->_printer)->breakLine();
			}
		}
		preserveSpace = $nc(state)->preserveSpace;
		bool hasNamespaceURI = (namespaceURI != nullptr && namespaceURI->length() != 0);
		if (rawName == nullptr || $nc(rawName)->length() == 0) {
			$assign(rawName, localName);
			if (hasNamespaceURI) {
				$var($String, prefix, nullptr);
				$assign(prefix, getPrefix(namespaceURI));
				if (prefix != nullptr && prefix->length() != 0) {
					$assign(rawName, $str({prefix, ":"_s, localName}));
				}
			}
			addNSAttr = true;
		}
		if (!hasNamespaceURI) {
			$assign(htmlName, rawName);
		} else {
			bool var$1 = namespaceURI->equals(HTMLSerializer::XHTMLNamespace);
			if (var$1 || (this->fUserXHTMLNamespace != nullptr && $nc(this->fUserXHTMLNamespace)->equals(namespaceURI))) {
				$assign(htmlName, localName);
			} else {
				$assign(htmlName, nullptr);
			}
		}
		$nc(this->_printer)->printText(u'<');
		if (this->_xhtml) {
			$init($Locale);
			$nc(this->_printer)->printText($($nc(rawName)->toLowerCase($Locale::ENGLISH)));
		} else {
			$nc(this->_printer)->printText(rawName);
		}
		$nc(this->_printer)->indent();
		if (attrs != nullptr) {
			for (i = 0; i < attrs->getLength(); ++i) {
				$nc(this->_printer)->printSpace();
				$init($Locale);
				$assign(name, $nc($(attrs->getQName(i)))->toLowerCase($Locale::ENGLISH));
				$assign(value, attrs->getValue(i));
				if (this->_xhtml || hasNamespaceURI) {
					if (value == nullptr) {
						$nc(this->_printer)->printText(name);
						$nc(this->_printer)->printText("=\"\""_s);
					} else {
						$nc(this->_printer)->printText(name);
						$nc(this->_printer)->printText("=\""_s);
						printEscaped(value);
						$nc(this->_printer)->printText(u'\"');
					}
				} else {
					if (value == nullptr) {
						$assign(value, ""_s);
					}
					bool var$2 = !$nc(this->_format)->getPreserveEmptyAttributes();
					if (var$2 && $nc(value)->length() == 0) {
						$nc(this->_printer)->printText(name);
					} else if ($HTMLdtd::isURI(rawName, name)) {
						$nc(this->_printer)->printText(name);
						$nc(this->_printer)->printText("=\""_s);
						$nc(this->_printer)->printText($(escapeURI(value)));
						$nc(this->_printer)->printText(u'\"');
					} else if ($HTMLdtd::isBoolean(rawName, name)) {
						$nc(this->_printer)->printText(name);
					} else {
						$nc(this->_printer)->printText(name);
						$nc(this->_printer)->printText("=\""_s);
						printEscaped(value);
						$nc(this->_printer)->printText(u'\"');
					}
				}
			}
		}
		if (htmlName != nullptr && $HTMLdtd::isPreserveSpace(htmlName)) {
			preserveSpace = true;
		}
		if (addNSAttr) {
			{
				$var($Iterator, i$, $nc($($nc(this->_prefixes)->entrySet()))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
					{
						$nc(this->_printer)->printSpace();
						$assign(value, $cast($String, $nc(entry)->getKey()));
						$assign(name, $cast($String, entry->getValue()));
						if ($nc(name)->length() == 0) {
							$nc(this->_printer)->printText("xmlns=\""_s);
							printEscaped(value);
							$nc(this->_printer)->printText(u'\"');
						} else {
							$nc(this->_printer)->printText("xmlns:"_s);
							$nc(this->_printer)->printText(name);
							$nc(this->_printer)->printText("=\""_s);
							printEscaped(value);
							$nc(this->_printer)->printText(u'\"');
						}
					}
				}
			}
		}
		$assign(state, enterElementState(namespaceURI, localName, rawName, preserveSpace));
		bool var$3 = htmlName != nullptr;
		if (var$3) {
			bool var$4 = htmlName->equalsIgnoreCase("A"_s);
			var$3 = (var$4 || htmlName->equalsIgnoreCase("TD"_s));
		}
		if (var$3) {
			state->empty = false;
			$nc(this->_printer)->printText(u'>');
		}
		bool var$5 = htmlName != nullptr;
		if (var$5) {
			bool var$6 = $nc(rawName)->equalsIgnoreCase("SCRIPT"_s);
			var$5 = (var$6 || $nc(rawName)->equalsIgnoreCase("STYLE"_s));
		}
		if (var$5) {
			if (this->_xhtml) {
				state->doCData = true;
			} else {
				state->unescaped = true;
			}
		}
	} catch ($IOException& except) {
		$throwNew($SAXException, static_cast<$Exception*>(except));
	}
}

void HTMLSerializer::endElement($String* namespaceURI, $String* localName, $String* rawName) {
	try {
		endElementIO(namespaceURI, localName, rawName);
	} catch ($IOException& except) {
		$throwNew($SAXException, static_cast<$Exception*>(except));
	}
}

void HTMLSerializer::endElementIO($String* namespaceURI, $String* localName, $String* rawName) {
	$useLocalCurrentObjectStackCache();
	$var($ElementState, state, nullptr);
	$var($String, htmlName, nullptr);
	$nc(this->_printer)->unindent();
	$assign(state, getElementState());
	if ($nc(state)->namespaceURI == nullptr || $nc($nc(state)->namespaceURI)->length() == 0) {
		$assign(htmlName, state->rawName);
	} else {
		bool var$1 = $nc(state->namespaceURI)->equals(HTMLSerializer::XHTMLNamespace);
		if (var$1 || (this->fUserXHTMLNamespace != nullptr && $nc(this->fUserXHTMLNamespace)->equals(state->namespaceURI))) {
			$assign(htmlName, state->localName);
		} else {
			$assign(htmlName, nullptr);
		}
	}
	if (this->_xhtml) {
		if ($nc(state)->empty) {
			$nc(this->_printer)->printText(" />"_s);
		} else {
			if (state->inCData) {
				$nc(this->_printer)->printText("]]>"_s);
			}
			$nc(this->_printer)->printText("</"_s);
			$init($Locale);
			$nc(this->_printer)->printText($($nc(state->rawName)->toLowerCase($Locale::ENGLISH)));
			$nc(this->_printer)->printText(u'>');
		}
	} else {
		if ($nc(state)->empty) {
			$nc(this->_printer)->printText(u'>');
		}
		if (htmlName == nullptr || !$HTMLdtd::isOnlyOpening(htmlName)) {
			if (this->_indenting && !$nc(state)->preserveSpace && state->afterElement) {
				$nc(this->_printer)->breakLine();
			}
			if ($nc(state)->inCData) {
				$nc(this->_printer)->printText("]]>"_s);
			}
			$nc(this->_printer)->printText("</"_s);
			$nc(this->_printer)->printText($nc(state)->rawName);
			$nc(this->_printer)->printText(u'>');
		}
	}
	$assign(state, leaveElementState());
	bool var$2 = htmlName == nullptr;
	if (!var$2) {
		bool var$3 = !$nc(htmlName)->equalsIgnoreCase("A"_s);
		var$2 = (var$3 && !htmlName->equalsIgnoreCase("TD"_s));
	}
	if (var$2) {
		$nc(state)->afterElement = true;
	}
	$nc(state)->empty = false;
	if (isDocumentState()) {
		$nc(this->_printer)->flush();
	}
}

void HTMLSerializer::characters($chars* chars, int32_t start, int32_t length) {
	$var($ElementState, state, nullptr);
	try {
		$assign(state, content());
		$nc(state)->doCData = false;
		$BaseMarkupSerializer::characters(chars, start, length);
	} catch ($IOException& except) {
		$throwNew($SAXException, static_cast<$Exception*>(except));
	}
}

void HTMLSerializer::startElement($String* tagName, $AttributeList* attrs) {
	$useLocalCurrentObjectStackCache();
	int32_t i = 0;
	bool preserveSpace = false;
	$var($ElementState, state, nullptr);
	$var($String, name, nullptr);
	$var($String, value, nullptr);
	try {
		if (this->_printer == nullptr) {
			$init($DOMMessageFormatter);
			$throwNew($IllegalStateException, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::SERIALIZER_DOMAIN, "NoWriterSupplied"_s, nullptr)));
		}
		$assign(state, getElementState());
		if (isDocumentState()) {
			if (!this->_started) {
				startDocument(tagName);
			}
		} else {
			if ($nc(state)->empty) {
				$nc(this->_printer)->printText(u'>');
			}
			if (this->_indenting && !$nc(state)->preserveSpace && (state->empty || $nc(state)->afterElement)) {
				$nc(this->_printer)->breakLine();
			}
		}
		preserveSpace = $nc(state)->preserveSpace;
		$nc(this->_printer)->printText(u'<');
		if (this->_xhtml) {
			$init($Locale);
			$nc(this->_printer)->printText($($nc(tagName)->toLowerCase($Locale::ENGLISH)));
		} else {
			$nc(this->_printer)->printText(tagName);
		}
		$nc(this->_printer)->indent();
		if (attrs != nullptr) {
			for (i = 0; i < attrs->getLength(); ++i) {
				$nc(this->_printer)->printSpace();
				$init($Locale);
				$assign(name, $nc($(attrs->getName(i)))->toLowerCase($Locale::ENGLISH));
				$assign(value, attrs->getValue(i));
				if (this->_xhtml) {
					if (value == nullptr) {
						$nc(this->_printer)->printText(name);
						$nc(this->_printer)->printText("=\"\""_s);
					} else {
						$nc(this->_printer)->printText(name);
						$nc(this->_printer)->printText("=\""_s);
						printEscaped(value);
						$nc(this->_printer)->printText(u'\"');
					}
				} else {
					if (value == nullptr) {
						$assign(value, ""_s);
					}
					bool var$0 = !$nc(this->_format)->getPreserveEmptyAttributes();
					if (var$0 && $nc(value)->length() == 0) {
						$nc(this->_printer)->printText(name);
					} else if ($HTMLdtd::isURI(tagName, name)) {
						$nc(this->_printer)->printText(name);
						$nc(this->_printer)->printText("=\""_s);
						$nc(this->_printer)->printText($(escapeURI(value)));
						$nc(this->_printer)->printText(u'\"');
					} else if ($HTMLdtd::isBoolean(tagName, name)) {
						$nc(this->_printer)->printText(name);
					} else {
						$nc(this->_printer)->printText(name);
						$nc(this->_printer)->printText("=\""_s);
						printEscaped(value);
						$nc(this->_printer)->printText(u'\"');
					}
				}
			}
		}
		if ($HTMLdtd::isPreserveSpace(tagName)) {
			preserveSpace = true;
		}
		$assign(state, enterElementState(nullptr, nullptr, tagName, preserveSpace));
		bool var$1 = $nc(tagName)->equalsIgnoreCase("A"_s);
		if (var$1 || $nc(tagName)->equalsIgnoreCase("TD"_s)) {
			state->empty = false;
			$nc(this->_printer)->printText(u'>');
		}
		bool var$2 = $nc(tagName)->equalsIgnoreCase("SCRIPT"_s);
		if (var$2 || $nc(tagName)->equalsIgnoreCase("STYLE"_s)) {
			if (this->_xhtml) {
				state->doCData = true;
			} else {
				state->unescaped = true;
			}
		}
	} catch ($IOException& except) {
		$throwNew($SAXException, static_cast<$Exception*>(except));
	}
}

void HTMLSerializer::endElement($String* tagName) {
	endElement(nullptr, nullptr, tagName);
}

void HTMLSerializer::startDocument($String* rootTagName) {
	$var($StringBuffer, buffer, nullptr);
	$nc(this->_printer)->leaveDTD();
	if (!this->_started) {
		if (this->_docTypePublicId == nullptr && this->_docTypeSystemId == nullptr) {
			if (this->_xhtml) {
				$init($HTMLdtd);
				$set(this, _docTypePublicId, $HTMLdtd::XHTMLPublicId);
				$set(this, _docTypeSystemId, $HTMLdtd::XHTMLSystemId);
			} else {
				$init($HTMLdtd);
				$set(this, _docTypePublicId, $HTMLdtd::HTMLPublicId);
				$set(this, _docTypeSystemId, $HTMLdtd::HTMLSystemId);
			}
		}
		if (!$nc(this->_format)->getOmitDocumentType()) {
			if (this->_docTypePublicId != nullptr && (!this->_xhtml || this->_docTypeSystemId != nullptr)) {
				if (this->_xhtml) {
					$nc(this->_printer)->printText("<!DOCTYPE html PUBLIC "_s);
				} else {
					$nc(this->_printer)->printText("<!DOCTYPE HTML PUBLIC "_s);
				}
				printDoctypeURL(this->_docTypePublicId);
				if (this->_docTypeSystemId != nullptr) {
					if (this->_indenting) {
						$nc(this->_printer)->breakLine();
						$nc(this->_printer)->printText("                      "_s);
					} else {
						$nc(this->_printer)->printText(u' ');
					}
					printDoctypeURL(this->_docTypeSystemId);
				}
				$nc(this->_printer)->printText(u'>');
				$nc(this->_printer)->breakLine();
			} else if (this->_docTypeSystemId != nullptr) {
				if (this->_xhtml) {
					$nc(this->_printer)->printText("<!DOCTYPE html SYSTEM "_s);
				} else {
					$nc(this->_printer)->printText("<!DOCTYPE HTML SYSTEM "_s);
				}
				printDoctypeURL(this->_docTypeSystemId);
				$nc(this->_printer)->printText(u'>');
				$nc(this->_printer)->breakLine();
			}
		}
	}
	this->_started = true;
	serializePreRoot();
}

void HTMLSerializer::serializeElement($Element* elem) {
	$useLocalCurrentObjectStackCache();
	$var($Attr, attr, nullptr);
	$var($NamedNodeMap, attrMap, nullptr);
	int32_t i = 0;
	$var($Node, child, nullptr);
	$var($ElementState, state, nullptr);
	bool preserveSpace = false;
	$var($String, name, nullptr);
	$var($String, value, nullptr);
	$var($String, tagName, nullptr);
	$assign(tagName, $nc(elem)->getTagName());
	$assign(state, getElementState());
	if (isDocumentState()) {
		if (!this->_started) {
			startDocument(tagName);
		}
	} else {
		if ($nc(state)->empty) {
			$nc(this->_printer)->printText(u'>');
		}
		if (this->_indenting && !$nc(state)->preserveSpace && (state->empty || $nc(state)->afterElement)) {
			$nc(this->_printer)->breakLine();
		}
	}
	preserveSpace = $nc(state)->preserveSpace;
	$nc(this->_printer)->printText(u'<');
	if (this->_xhtml) {
		$init($Locale);
		$nc(this->_printer)->printText($($nc(tagName)->toLowerCase($Locale::ENGLISH)));
	} else {
		$nc(this->_printer)->printText(tagName);
	}
	$nc(this->_printer)->indent();
	$assign(attrMap, elem->getAttributes());
	if (attrMap != nullptr) {
		for (i = 0; i < attrMap->getLength(); ++i) {
			$assign(attr, $cast($Attr, attrMap->item(i)));
			$init($Locale);
			$assign(name, $nc($($nc(attr)->getName()))->toLowerCase($Locale::ENGLISH));
			$assign(value, attr->getValue());
			if (attr->getSpecified()) {
				$nc(this->_printer)->printSpace();
				if (this->_xhtml) {
					if (value == nullptr) {
						$nc(this->_printer)->printText(name);
						$nc(this->_printer)->printText("=\"\""_s);
					} else {
						$nc(this->_printer)->printText(name);
						$nc(this->_printer)->printText("=\""_s);
						printEscaped(value);
						$nc(this->_printer)->printText(u'\"');
					}
				} else {
					if (value == nullptr) {
						$assign(value, ""_s);
					}
					bool var$0 = !$nc(this->_format)->getPreserveEmptyAttributes();
					if (var$0 && $nc(value)->length() == 0) {
						$nc(this->_printer)->printText(name);
					} else if ($HTMLdtd::isURI(tagName, name)) {
						$nc(this->_printer)->printText(name);
						$nc(this->_printer)->printText("=\""_s);
						$nc(this->_printer)->printText($(escapeURI(value)));
						$nc(this->_printer)->printText(u'\"');
					} else if ($HTMLdtd::isBoolean(tagName, name)) {
						$nc(this->_printer)->printText(name);
					} else {
						$nc(this->_printer)->printText(name);
						$nc(this->_printer)->printText("=\""_s);
						printEscaped(value);
						$nc(this->_printer)->printText(u'\"');
					}
				}
			}
		}
	}
	if ($HTMLdtd::isPreserveSpace(tagName)) {
		preserveSpace = true;
	}
	bool var$1 = elem->hasChildNodes();
	if (var$1 || !$HTMLdtd::isEmptyTag(tagName)) {
		$assign(state, enterElementState(nullptr, nullptr, tagName, preserveSpace));
		bool var$2 = $nc(tagName)->equalsIgnoreCase("A"_s);
		if (var$2 || $nc(tagName)->equalsIgnoreCase("TD"_s)) {
			$nc(state)->empty = false;
			$nc(this->_printer)->printText(u'>');
		}
		bool var$3 = $nc(tagName)->equalsIgnoreCase("SCRIPT"_s);
		if (var$3 || $nc(tagName)->equalsIgnoreCase("STYLE"_s)) {
			if (this->_xhtml) {
				$nc(state)->doCData = true;
			} else {
				$nc(state)->unescaped = true;
			}
		}
		$assign(child, elem->getFirstChild());
		while (child != nullptr) {
			serializeNode(child);
			$assign(child, child->getNextSibling());
		}
		endElementIO(nullptr, nullptr, tagName);
	} else {
		$nc(this->_printer)->unindent();
		if (this->_xhtml) {
			$nc(this->_printer)->printText(" />"_s);
		} else {
			$nc(this->_printer)->printText(u'>');
		}
		state->afterElement = true;
		state->empty = false;
		if (isDocumentState()) {
			$nc(this->_printer)->flush();
		}
	}
}

void HTMLSerializer::characters($String* text) {
	$var($ElementState, state, nullptr);
	$assign(state, content());
	$BaseMarkupSerializer::characters(text);
}

$String* HTMLSerializer::getEntityRef(int32_t ch) {
	return $HTMLdtd::fromChar(ch);
}

$String* HTMLSerializer::escapeURI($String* uri) {
	int32_t index = 0;
	index = $nc(uri)->indexOf("\""_s);
	if (index >= 0) {
		return uri->substring(0, index);
	} else {
		return uri;
	}
}

HTMLSerializer::HTMLSerializer() {
}

void clinit$HTMLSerializer($Class* class$) {
	$assignStatic(HTMLSerializer::XHTMLNamespace, "http://www.w3.org/1999/xhtml"_s);
}

$Class* HTMLSerializer::load$($String* name, bool initialize) {
	$loadClass(HTMLSerializer, name, initialize, &_HTMLSerializer_ClassInfo_, clinit$HTMLSerializer, allocate$HTMLSerializer);
	return class$;
}

$Class* HTMLSerializer::class$ = nullptr;

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com