#include <org/xml/sax/helpers/ParserAdapter.h>

#include <java/lang/ClassCastException.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Enumeration.h>
#include <java/util/List.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <org/xml/sax/AttributeList.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/DTDHandler.h>
#include <org/xml/sax/DocumentHandler.h>
#include <org/xml/sax/EntityResolver.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/Locator.h>
#include <org/xml/sax/Parser.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/SAXNotRecognizedException.h>
#include <org/xml/sax/SAXNotSupportedException.h>
#include <org/xml/sax/SAXParseException.h>
#include <org/xml/sax/XMLReader.h>
#include <org/xml/sax/helpers/AttributesImpl.h>
#include <org/xml/sax/helpers/NamespaceSupport.h>
#include <org/xml/sax/helpers/ParserAdapter$AttributeListAdapter.h>
#include <org/xml/sax/helpers/ParserFactory.h>
#include <jcpp.h>

#undef FEATURES
#undef NAMESPACES
#undef NAMESPACE_PREFIXES
#undef XMLNS

using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Enumeration = ::java::util::Enumeration;
using $List = ::java::util::List;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;
using $AttributeList = ::org::xml::sax::AttributeList;
using $Attributes = ::org::xml::sax::Attributes;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $DTDHandler = ::org::xml::sax::DTDHandler;
using $DocumentHandler = ::org::xml::sax::DocumentHandler;
using $EntityResolver = ::org::xml::sax::EntityResolver;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $InputSource = ::org::xml::sax::InputSource;
using $Locator = ::org::xml::sax::Locator;
using $Parser = ::org::xml::sax::Parser;
using $SAXException = ::org::xml::sax::SAXException;
using $SAXNotRecognizedException = ::org::xml::sax::SAXNotRecognizedException;
using $SAXNotSupportedException = ::org::xml::sax::SAXNotSupportedException;
using $SAXParseException = ::org::xml::sax::SAXParseException;
using $XMLReader = ::org::xml::sax::XMLReader;
using $AttributesImpl = ::org::xml::sax::helpers::AttributesImpl;
using $NamespaceSupport = ::org::xml::sax::helpers::NamespaceSupport;
using $ParserAdapter$AttributeListAdapter = ::org::xml::sax::helpers::ParserAdapter$AttributeListAdapter;
using $ParserFactory = ::org::xml::sax::helpers::ParserFactory;

namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {

$FieldInfo _ParserAdapter_FieldInfo_[] = {
	{"FEATURES", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ParserAdapter, FEATURES)},
	{"NAMESPACES", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ParserAdapter, NAMESPACES)},
	{"NAMESPACE_PREFIXES", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ParserAdapter, NAMESPACE_PREFIXES)},
	{"XMLNS_URIs", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ParserAdapter, XMLNS_URIs)},
	{"nsSupport", "Lorg/xml/sax/helpers/NamespaceSupport;", nullptr, $PRIVATE, $field(ParserAdapter, nsSupport)},
	{"attAdapter", "Lorg/xml/sax/helpers/ParserAdapter$AttributeListAdapter;", nullptr, $PRIVATE, $field(ParserAdapter, attAdapter)},
	{"parsing", "Z", nullptr, $PRIVATE, $field(ParserAdapter, parsing)},
	{"nameParts", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(ParserAdapter, nameParts)},
	{"parser", "Lorg/xml/sax/Parser;", nullptr, $PRIVATE, $field(ParserAdapter, parser)},
	{"atts", "Lorg/xml/sax/helpers/AttributesImpl;", nullptr, $PRIVATE, $field(ParserAdapter, atts)},
	{"namespaces", "Z", nullptr, $PRIVATE, $field(ParserAdapter, namespaces)},
	{"prefixes", "Z", nullptr, $PRIVATE, $field(ParserAdapter, prefixes)},
	{"uris", "Z", nullptr, $PRIVATE, $field(ParserAdapter, uris)},
	{"locator", "Lorg/xml/sax/Locator;", nullptr, 0, $field(ParserAdapter, locator)},
	{"entityResolver", "Lorg/xml/sax/EntityResolver;", nullptr, 0, $field(ParserAdapter, entityResolver)},
	{"dtdHandler", "Lorg/xml/sax/DTDHandler;", nullptr, 0, $field(ParserAdapter, dtdHandler)},
	{"contentHandler", "Lorg/xml/sax/ContentHandler;", nullptr, 0, $field(ParserAdapter, contentHandler)},
	{"errorHandler", "Lorg/xml/sax/ErrorHandler;", nullptr, 0, $field(ParserAdapter, errorHandler)},
	{}
};

$MethodInfo _ParserAdapter_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(ParserAdapter, init$, void), "org.xml.sax.SAXException"},
	{"<init>", "(Lorg/xml/sax/Parser;)V", nullptr, $PUBLIC, $method(ParserAdapter, init$, void, $Parser*)},
	{"characters", "([CII)V", nullptr, $PUBLIC, $virtualMethod(ParserAdapter, characters, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"checkNotParsing", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(ParserAdapter, checkNotParsing, void, $String*, $String*), "org.xml.sax.SAXNotSupportedException"},
	{"endDocument", "()V", nullptr, $PUBLIC, $virtualMethod(ParserAdapter, endDocument, void), "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ParserAdapter, endElement, void, $String*), "org.xml.sax.SAXException"},
	{"getContentHandler", "()Lorg/xml/sax/ContentHandler;", nullptr, $PUBLIC, $virtualMethod(ParserAdapter, getContentHandler, $ContentHandler*)},
	{"getDTDHandler", "()Lorg/xml/sax/DTDHandler;", nullptr, $PUBLIC, $virtualMethod(ParserAdapter, getDTDHandler, $DTDHandler*)},
	{"getEntityResolver", "()Lorg/xml/sax/EntityResolver;", nullptr, $PUBLIC, $virtualMethod(ParserAdapter, getEntityResolver, $EntityResolver*)},
	{"getErrorHandler", "()Lorg/xml/sax/ErrorHandler;", nullptr, $PUBLIC, $virtualMethod(ParserAdapter, getErrorHandler, $ErrorHandler*)},
	{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(ParserAdapter, getFeature, bool, $String*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ParserAdapter, getProperty, $Object*, $String*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"ignorableWhitespace", "([CII)V", nullptr, $PUBLIC, $virtualMethod(ParserAdapter, ignorableWhitespace, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"makeException", "(Ljava/lang/String;)Lorg/xml/sax/SAXParseException;", nullptr, $PRIVATE, $method(ParserAdapter, makeException, $SAXParseException*, $String*)},
	{"parse", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ParserAdapter, parse, void, $String*), "java.io.IOException,org.xml.sax.SAXException"},
	{"parse", "(Lorg/xml/sax/InputSource;)V", nullptr, $PUBLIC, $virtualMethod(ParserAdapter, parse, void, $InputSource*), "java.io.IOException,org.xml.sax.SAXException"},
	{"processName", "(Ljava/lang/String;ZZ)[Ljava/lang/String;", nullptr, $PRIVATE, $method(ParserAdapter, processName, $StringArray*, $String*, bool, bool), "org.xml.sax.SAXException"},
	{"processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ParserAdapter, processingInstruction, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"reportError", "(Ljava/lang/String;)V", nullptr, 0, $virtualMethod(ParserAdapter, reportError, void, $String*), "org.xml.sax.SAXException"},
	{"setContentHandler", "(Lorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC, $virtualMethod(ParserAdapter, setContentHandler, void, $ContentHandler*)},
	{"setDTDHandler", "(Lorg/xml/sax/DTDHandler;)V", nullptr, $PUBLIC, $virtualMethod(ParserAdapter, setDTDHandler, void, $DTDHandler*)},
	{"setDocumentLocator", "(Lorg/xml/sax/Locator;)V", nullptr, $PUBLIC, $virtualMethod(ParserAdapter, setDocumentLocator, void, $Locator*)},
	{"setEntityResolver", "(Lorg/xml/sax/EntityResolver;)V", nullptr, $PUBLIC, $virtualMethod(ParserAdapter, setEntityResolver, void, $EntityResolver*)},
	{"setErrorHandler", "(Lorg/xml/sax/ErrorHandler;)V", nullptr, $PUBLIC, $virtualMethod(ParserAdapter, setErrorHandler, void, $ErrorHandler*)},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(ParserAdapter, setFeature, void, $String*, bool), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ParserAdapter, setProperty, void, $String*, Object$*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"setup", "(Lorg/xml/sax/Parser;)V", nullptr, $PRIVATE, $method(ParserAdapter, setup, void, $Parser*)},
	{"setupParser", "()V", nullptr, $PRIVATE, $method(ParserAdapter, setupParser, void)},
	{"startDocument", "()V", nullptr, $PUBLIC, $virtualMethod(ParserAdapter, startDocument, void), "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Lorg/xml/sax/AttributeList;)V", nullptr, $PUBLIC, $virtualMethod(ParserAdapter, startElement, void, $String*, $AttributeList*), "org.xml.sax.SAXException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ParserAdapter_InnerClassesInfo_[] = {
	{"org.xml.sax.helpers.ParserAdapter$AttributeListAdapter", "org.xml.sax.helpers.ParserAdapter", "AttributeListAdapter", $FINAL},
	{}
};

$ClassInfo _ParserAdapter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"org.xml.sax.helpers.ParserAdapter",
	"java.lang.Object",
	"org.xml.sax.XMLReader,org.xml.sax.DocumentHandler",
	_ParserAdapter_FieldInfo_,
	_ParserAdapter_MethodInfo_,
	nullptr,
	nullptr,
	_ParserAdapter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"org.xml.sax.helpers.ParserAdapter$AttributeListAdapter"
};

$Object* allocate$ParserAdapter($Class* clazz) {
	return $of($alloc(ParserAdapter));
}

int32_t ParserAdapter::hashCode() {
	 return this->$XMLReader::hashCode();
}

bool ParserAdapter::equals(Object$* arg0) {
	 return this->$XMLReader::equals(arg0);
}

$Object* ParserAdapter::clone() {
	 return this->$XMLReader::clone();
}

$String* ParserAdapter::toString() {
	 return this->$XMLReader::toString();
}

void ParserAdapter::finalize() {
	this->$XMLReader::finalize();
}

$String* ParserAdapter::FEATURES = nullptr;
$String* ParserAdapter::NAMESPACES = nullptr;
$String* ParserAdapter::NAMESPACE_PREFIXES = nullptr;
$String* ParserAdapter::XMLNS_URIs = nullptr;

void ParserAdapter::init$() {
	$useLocalCurrentObjectStackCache();
	this->parsing = false;
	$set(this, nameParts, $new($StringArray, 3));
	$set(this, parser, nullptr);
	$set(this, atts, nullptr);
	this->namespaces = true;
	this->prefixes = false;
	this->uris = false;
	$set(this, entityResolver, nullptr);
	$set(this, dtdHandler, nullptr);
	$set(this, contentHandler, nullptr);
	$set(this, errorHandler, nullptr);
	$var($String, driver, $SecuritySupport::getSystemProperty("org.xml.sax.parser"_s));
	try {
		setup($($ParserFactory::makeParser()));
	} catch ($ClassNotFoundException& e1) {
		$throwNew($SAXException, $$str({"Cannot find SAX1 driver class "_s, driver}), e1);
	} catch ($IllegalAccessException& e2) {
		$throwNew($SAXException, $$str({"SAX1 driver class "_s, driver, " found but cannot be loaded"_s}), e2);
	} catch ($InstantiationException& e3) {
		$throwNew($SAXException, $$str({"SAX1 driver class "_s, driver, " loaded but cannot be instantiated"_s}), e3);
	} catch ($ClassCastException& e4) {
		$throwNew($SAXException, $$str({"SAX1 driver class "_s, driver, " does not implement org.xml.sax.Parser"_s}));
	} catch ($NullPointerException& e5) {
		$throwNew($SAXException, "System property org.xml.sax.parser not specified"_s);
	}
}

void ParserAdapter::init$($Parser* parser) {
	this->parsing = false;
	$set(this, nameParts, $new($StringArray, 3));
	$set(this, parser, nullptr);
	$set(this, atts, nullptr);
	this->namespaces = true;
	this->prefixes = false;
	this->uris = false;
	$set(this, entityResolver, nullptr);
	$set(this, dtdHandler, nullptr);
	$set(this, contentHandler, nullptr);
	$set(this, errorHandler, nullptr);
	setup(parser);
}

void ParserAdapter::setup($Parser* parser) {
	if (parser == nullptr) {
		$throwNew($NullPointerException, "Parser argument must not be null"_s);
	}
	$set(this, parser, parser);
	$set(this, atts, $new($AttributesImpl));
	$set(this, nsSupport, $new($NamespaceSupport));
	$set(this, attAdapter, $new($ParserAdapter$AttributeListAdapter, this));
}

void ParserAdapter::setFeature($String* name, bool value) {
	if ($nc(name)->equals(ParserAdapter::NAMESPACES)) {
		checkNotParsing("feature"_s, name);
		this->namespaces = value;
		if (!this->namespaces && !this->prefixes) {
			this->prefixes = true;
		}
	} else if (name->equals(ParserAdapter::NAMESPACE_PREFIXES)) {
		checkNotParsing("feature"_s, name);
		this->prefixes = value;
		if (!this->prefixes && !this->namespaces) {
			this->namespaces = true;
		}
	} else if (name->equals(ParserAdapter::XMLNS_URIs)) {
		checkNotParsing("feature"_s, name);
		this->uris = value;
	} else {
		$throwNew($SAXNotRecognizedException, $$str({"Feature: "_s, name}));
	}
}

bool ParserAdapter::getFeature($String* name) {
	if ($nc(name)->equals(ParserAdapter::NAMESPACES)) {
		return this->namespaces;
	} else if (name->equals(ParserAdapter::NAMESPACE_PREFIXES)) {
		return this->prefixes;
	} else if (name->equals(ParserAdapter::XMLNS_URIs)) {
		return this->uris;
	} else {
		$throwNew($SAXNotRecognizedException, $$str({"Feature: "_s, name}));
	}
}

void ParserAdapter::setProperty($String* name, Object$* value) {
	$throwNew($SAXNotRecognizedException, $$str({"Property: "_s, name}));
}

$Object* ParserAdapter::getProperty($String* name) {
	$throwNew($SAXNotRecognizedException, $$str({"Property: "_s, name}));
	$shouldNotReachHere();
}

void ParserAdapter::setEntityResolver($EntityResolver* resolver) {
	$set(this, entityResolver, resolver);
}

$EntityResolver* ParserAdapter::getEntityResolver() {
	return this->entityResolver;
}

void ParserAdapter::setDTDHandler($DTDHandler* handler) {
	$set(this, dtdHandler, handler);
}

$DTDHandler* ParserAdapter::getDTDHandler() {
	return this->dtdHandler;
}

void ParserAdapter::setContentHandler($ContentHandler* handler) {
	$set(this, contentHandler, handler);
}

$ContentHandler* ParserAdapter::getContentHandler() {
	return this->contentHandler;
}

void ParserAdapter::setErrorHandler($ErrorHandler* handler) {
	$set(this, errorHandler, handler);
}

$ErrorHandler* ParserAdapter::getErrorHandler() {
	return this->errorHandler;
}

void ParserAdapter::parse($String* systemId) {
	parse($$new($InputSource, systemId));
}

void ParserAdapter::parse($InputSource* input) {
	if (this->parsing) {
		$throwNew($SAXException, "Parser is already in use"_s);
	}
	setupParser();
	this->parsing = true;
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->parser)->parse(input);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			this->parsing = false;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	this->parsing = false;
}

void ParserAdapter::setDocumentLocator($Locator* locator) {
	$set(this, locator, locator);
	if (this->contentHandler != nullptr) {
		$nc(this->contentHandler)->setDocumentLocator(locator);
	}
}

void ParserAdapter::startDocument() {
	if (this->contentHandler != nullptr) {
		$nc(this->contentHandler)->startDocument();
	}
}

void ParserAdapter::endDocument() {
	if (this->contentHandler != nullptr) {
		$nc(this->contentHandler)->endDocument();
	}
}

void ParserAdapter::startElement($String* qName, $AttributeList* qAtts) {
	$useLocalCurrentObjectStackCache();
	$var($List, exceptions, nullptr);
	if (!this->namespaces) {
		if (this->contentHandler != nullptr) {
			$nc(this->attAdapter)->setAttributeList(qAtts);
			$nc(this->contentHandler)->startElement(""_s, ""_s, $($nc(qName)->intern()), this->attAdapter);
		}
		return;
	}
	$nc(this->nsSupport)->pushContext();
	int32_t length = $nc(qAtts)->getLength();
	for (int32_t i = 0; i < length; ++i) {
		$var($String, attQName, qAtts->getName(i));
		if (!$nc(attQName)->startsWith("xmlns"_s)) {
			continue;
		}
		$var($String, prefix, nullptr);
		int32_t n = $nc(attQName)->indexOf((int32_t)u':');
		if (n == -1 && attQName->length() == 5) {
			$assign(prefix, ""_s);
		} else if (n != 5) {
			continue;
		} else {
			$assign(prefix, attQName->substring(n + 1));
		}
		$var($String, value, qAtts->getValue(i));
		if (!$nc(this->nsSupport)->declarePrefix(prefix, value)) {
			reportError($$str({"Illegal Namespace prefix: "_s, prefix}));
			continue;
		}
		if (this->contentHandler != nullptr) {
			$nc(this->contentHandler)->startPrefixMapping(prefix, value);
		}
	}
	$nc(this->atts)->clear();
	for (int32_t i = 0; i < length; ++i) {
		$var($String, attQName, qAtts->getName(i));
		$var($String, type, qAtts->getType(i));
		$var($String, value, qAtts->getValue(i));
		if ($nc(attQName)->startsWith("xmlns"_s)) {
			$var($String, prefix, nullptr);
			int32_t n = attQName->indexOf((int32_t)u':');
			if (n == -1 && attQName->length() == 5) {
				$assign(prefix, ""_s);
			} else if (n != 5) {
				$assign(prefix, nullptr);
			} else {
				$assign(prefix, attQName->substring(6));
			}
			if (prefix != nullptr) {
				if (this->prefixes) {
					if (this->uris) {
						$nc(this->atts)->addAttribute($NamespaceSupport::XMLNS, prefix, $(attQName->intern()), type, value);
					} else {
						$nc(this->atts)->addAttribute(""_s, ""_s, $(attQName->intern()), type, value);
					}
				}
				continue;
			}
		}
		try {
			$var($StringArray, attName, processName(attQName, true, true));
			$nc(this->atts)->addAttribute($nc(attName)->get(0), attName->get(1), attName->get(2), type, value);
		} catch ($SAXException& e) {
			if (exceptions == nullptr) {
				$assign(exceptions, $new($ArrayList));
			}
			$nc(exceptions)->add(e);
			$nc(this->atts)->addAttribute(""_s, attQName, attQName, type, value);
		}
	}
	if (exceptions != nullptr && this->errorHandler != nullptr) {
		for (int32_t i = 0; i < exceptions->size(); ++i) {
			$nc(this->errorHandler)->error(($cast($SAXParseException, $(exceptions->get(i)))));
		}
	}
	if (this->contentHandler != nullptr) {
		$var($StringArray, name, processName(qName, false, false));
		$nc(this->contentHandler)->startElement($nc(name)->get(0), name->get(1), name->get(2), this->atts);
	}
}

void ParserAdapter::endElement($String* qName) {
	$useLocalCurrentObjectStackCache();
	if (!this->namespaces) {
		if (this->contentHandler != nullptr) {
			$nc(this->contentHandler)->endElement(""_s, ""_s, $($nc(qName)->intern()));
		}
		return;
	}
	$var($StringArray, names, processName(qName, false, false));
	if (this->contentHandler != nullptr) {
		$nc(this->contentHandler)->endElement($nc(names)->get(0), names->get(1), names->get(2));
		$var($Enumeration, ePrefixes, $nc(this->nsSupport)->getDeclaredPrefixes());
		while ($nc(ePrefixes)->hasMoreElements()) {
			$var($String, prefix, $cast($String, ePrefixes->nextElement()));
			$nc(this->contentHandler)->endPrefixMapping(prefix);
		}
	}
	$nc(this->nsSupport)->popContext();
}

void ParserAdapter::characters($chars* ch, int32_t start, int32_t length) {
	if (this->contentHandler != nullptr) {
		$nc(this->contentHandler)->characters(ch, start, length);
	}
}

void ParserAdapter::ignorableWhitespace($chars* ch, int32_t start, int32_t length) {
	if (this->contentHandler != nullptr) {
		$nc(this->contentHandler)->ignorableWhitespace(ch, start, length);
	}
}

void ParserAdapter::processingInstruction($String* target, $String* data) {
	if (this->contentHandler != nullptr) {
		$nc(this->contentHandler)->processingInstruction(target, data);
	}
}

void ParserAdapter::setupParser() {
	if (!this->prefixes && !this->namespaces) {
		$throwNew($IllegalStateException);
	}
	$nc(this->nsSupport)->reset();
	if (this->uris) {
		$nc(this->nsSupport)->setNamespaceDeclUris(true);
	}
	if (this->entityResolver != nullptr) {
		$nc(this->parser)->setEntityResolver(this->entityResolver);
	}
	if (this->dtdHandler != nullptr) {
		$nc(this->parser)->setDTDHandler(this->dtdHandler);
	}
	if (this->errorHandler != nullptr) {
		$nc(this->parser)->setErrorHandler(this->errorHandler);
	}
	$nc(this->parser)->setDocumentHandler(this);
	$set(this, locator, nullptr);
}

$StringArray* ParserAdapter::processName($String* qName, bool isAttribute, bool useException) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, parts, $nc(this->nsSupport)->processName(qName, this->nameParts, isAttribute));
	if (parts == nullptr) {
		if (useException) {
			$throw($(makeException($$str({"Undeclared prefix: "_s, qName}))));
		}
		reportError($$str({"Undeclared prefix: "_s, qName}));
		$assign(parts, $new($StringArray, 3));
		parts->set(0, parts->set(1, ""_s));
		parts->set(2, $($nc(qName)->intern()));
	}
	return parts;
}

void ParserAdapter::reportError($String* message) {
	if (this->errorHandler != nullptr) {
		$nc(this->errorHandler)->error($(makeException(message)));
	}
}

$SAXParseException* ParserAdapter::makeException($String* message) {
	if (this->locator != nullptr) {
		return $new($SAXParseException, message, this->locator);
	} else {
		return $new($SAXParseException, message, nullptr, nullptr, -1, -1);
	}
}

void ParserAdapter::checkNotParsing($String* type, $String* name) {
	$useLocalCurrentObjectStackCache();
	if (this->parsing) {
		$throwNew($SAXNotSupportedException, $$str({"Cannot change "_s, type, $$str(u' '), name, " while parsing"_s}));
	}
}

ParserAdapter::ParserAdapter() {
}

void clinit$ParserAdapter($Class* class$) {
	$assignStatic(ParserAdapter::FEATURES, "http://xml.org/sax/features/"_s);
	$assignStatic(ParserAdapter::NAMESPACES, $str({ParserAdapter::FEATURES, "namespaces"_s}));
	$assignStatic(ParserAdapter::NAMESPACE_PREFIXES, $str({ParserAdapter::FEATURES, "namespace-prefixes"_s}));
	$assignStatic(ParserAdapter::XMLNS_URIs, $str({ParserAdapter::FEATURES, "xmlns-uris"_s}));
}

$Class* ParserAdapter::load$($String* name, bool initialize) {
	$loadClass(ParserAdapter, name, initialize, &_ParserAdapter_ClassInfo_, clinit$ParserAdapter, allocate$ParserAdapter);
	return class$;
}

$Class* ParserAdapter::class$ = nullptr;

			} // helpers
		} // sax
	} // xml
} // org