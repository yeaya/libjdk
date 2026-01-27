#include <javax/xml/parsers/SAXParser.h>

#include <java/io/File.h>
#include <java/io/InputStream.h>
#include <java/lang/Package.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/net/URI.h>
#include <javax/xml/validation/Schema.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/DTDHandler.h>
#include <org/xml/sax/DocumentHandler.h>
#include <org/xml/sax/EntityResolver.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/HandlerBase.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/Parser.h>
#include <org/xml/sax/XMLReader.h>
#include <org/xml/sax/helpers/DefaultHandler.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Package = ::java::lang::Package;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $URI = ::java::net::URI;
using $Schema = ::javax::xml::validation::Schema;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $DTDHandler = ::org::xml::sax::DTDHandler;
using $DocumentHandler = ::org::xml::sax::DocumentHandler;
using $EntityResolver = ::org::xml::sax::EntityResolver;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $HandlerBase = ::org::xml::sax::HandlerBase;
using $InputSource = ::org::xml::sax::InputSource;
using $Parser = ::org::xml::sax::Parser;
using $XMLReader = ::org::xml::sax::XMLReader;
using $DefaultHandler = ::org::xml::sax::helpers::DefaultHandler;

namespace javax {
	namespace xml {
		namespace parsers {

$MethodInfo _SAXParser_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(SAXParser, init$, void)},
	{"getParser", "()Lorg/xml/sax/Parser;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SAXParser, getParser, $Parser*), "org.xml.sax.SAXException"},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SAXParser, getProperty, $Object*, $String*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"getSchema", "()Ljavax/xml/validation/Schema;", nullptr, $PUBLIC, $virtualMethod(SAXParser, getSchema, $Schema*)},
	{"getXMLReader", "()Lorg/xml/sax/XMLReader;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SAXParser, getXMLReader, $XMLReader*), "org.xml.sax.SAXException"},
	{"isNamespaceAware", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SAXParser, isNamespaceAware, bool)},
	{"isValidating", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SAXParser, isValidating, bool)},
	{"isXIncludeAware", "()Z", nullptr, $PUBLIC, $virtualMethod(SAXParser, isXIncludeAware, bool)},
	{"parse", "(Ljava/io/InputStream;Lorg/xml/sax/HandlerBase;)V", nullptr, $PUBLIC, $virtualMethod(SAXParser, parse, void, $InputStream*, $HandlerBase*), "org.xml.sax.SAXException,java.io.IOException"},
	{"parse", "(Ljava/io/InputStream;Lorg/xml/sax/HandlerBase;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAXParser, parse, void, $InputStream*, $HandlerBase*, $String*), "org.xml.sax.SAXException,java.io.IOException"},
	{"parse", "(Ljava/io/InputStream;Lorg/xml/sax/helpers/DefaultHandler;)V", nullptr, $PUBLIC, $virtualMethod(SAXParser, parse, void, $InputStream*, $DefaultHandler*), "org.xml.sax.SAXException,java.io.IOException"},
	{"parse", "(Ljava/io/InputStream;Lorg/xml/sax/helpers/DefaultHandler;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAXParser, parse, void, $InputStream*, $DefaultHandler*, $String*), "org.xml.sax.SAXException,java.io.IOException"},
	{"parse", "(Ljava/lang/String;Lorg/xml/sax/HandlerBase;)V", nullptr, $PUBLIC, $virtualMethod(SAXParser, parse, void, $String*, $HandlerBase*), "org.xml.sax.SAXException,java.io.IOException"},
	{"parse", "(Ljava/lang/String;Lorg/xml/sax/helpers/DefaultHandler;)V", nullptr, $PUBLIC, $virtualMethod(SAXParser, parse, void, $String*, $DefaultHandler*), "org.xml.sax.SAXException,java.io.IOException"},
	{"parse", "(Ljava/io/File;Lorg/xml/sax/HandlerBase;)V", nullptr, $PUBLIC, $virtualMethod(SAXParser, parse, void, $File*, $HandlerBase*), "org.xml.sax.SAXException,java.io.IOException"},
	{"parse", "(Ljava/io/File;Lorg/xml/sax/helpers/DefaultHandler;)V", nullptr, $PUBLIC, $virtualMethod(SAXParser, parse, void, $File*, $DefaultHandler*), "org.xml.sax.SAXException,java.io.IOException"},
	{"parse", "(Lorg/xml/sax/InputSource;Lorg/xml/sax/HandlerBase;)V", nullptr, $PUBLIC, $virtualMethod(SAXParser, parse, void, $InputSource*, $HandlerBase*), "org.xml.sax.SAXException,java.io.IOException"},
	{"parse", "(Lorg/xml/sax/InputSource;Lorg/xml/sax/helpers/DefaultHandler;)V", nullptr, $PUBLIC, $virtualMethod(SAXParser, parse, void, $InputSource*, $DefaultHandler*), "org.xml.sax.SAXException,java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(SAXParser, reset, void)},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SAXParser, setProperty, void, $String*, Object$*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{}
};

$ClassInfo _SAXParser_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.xml.parsers.SAXParser",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SAXParser_MethodInfo_
};

$Object* allocate$SAXParser($Class* clazz) {
	return $of($alloc(SAXParser));
}

void SAXParser::init$() {
}

void SAXParser::reset() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$3, $$str({"This SAXParser, \""_s, $($of(this)->getClass()->getName()), "\", does not support the reset functionality.  Specification \""_s}));
	$var($String, var$2, $$concat(var$3, $($nc($($of(this)->getClass()->getPackage()))->getSpecificationTitle())));
	$var($String, var$1, $$concat(var$2, "\" version \""_s));
	$var($String, var$0, $$concat(var$1, $($nc($($of(this)->getClass()->getPackage()))->getSpecificationVersion())));
	$throwNew($UnsupportedOperationException, $$concat(var$0, "\""_s));
}

void SAXParser::parse($InputStream* is, $HandlerBase* hb) {
	if (is == nullptr) {
		$throwNew($IllegalArgumentException, "InputStream cannot be null"_s);
	}
	$var($InputSource, input, $new($InputSource, is));
	this->parse(input, hb);
}

void SAXParser::parse($InputStream* is, $HandlerBase* hb, $String* systemId) {
	if (is == nullptr) {
		$throwNew($IllegalArgumentException, "InputStream cannot be null"_s);
	}
	$var($InputSource, input, $new($InputSource, is));
	input->setSystemId(systemId);
	this->parse(input, hb);
}

void SAXParser::parse($InputStream* is, $DefaultHandler* dh) {
	if (is == nullptr) {
		$throwNew($IllegalArgumentException, "InputStream cannot be null"_s);
	}
	$var($InputSource, input, $new($InputSource, is));
	this->parse(input, dh);
}

void SAXParser::parse($InputStream* is, $DefaultHandler* dh, $String* systemId) {
	if (is == nullptr) {
		$throwNew($IllegalArgumentException, "InputStream cannot be null"_s);
	}
	$var($InputSource, input, $new($InputSource, is));
	input->setSystemId(systemId);
	this->parse(input, dh);
}

void SAXParser::parse($String* uri, $HandlerBase* hb) {
	if (uri == nullptr) {
		$throwNew($IllegalArgumentException, "uri cannot be null"_s);
	}
	$var($InputSource, input, $new($InputSource, uri));
	this->parse(input, hb);
}

void SAXParser::parse($String* uri, $DefaultHandler* dh) {
	if (uri == nullptr) {
		$throwNew($IllegalArgumentException, "uri cannot be null"_s);
	}
	$var($InputSource, input, $new($InputSource, uri));
	this->parse(input, dh);
}

void SAXParser::parse($File* f, $HandlerBase* hb) {
	$useLocalCurrentObjectStackCache();
	if (f == nullptr) {
		$throwNew($IllegalArgumentException, "File cannot be null"_s);
	}
	$var($InputSource, input, $new($InputSource, $($nc($($nc(f)->toURI()))->toASCIIString())));
	this->parse(input, hb);
}

void SAXParser::parse($File* f, $DefaultHandler* dh) {
	$useLocalCurrentObjectStackCache();
	if (f == nullptr) {
		$throwNew($IllegalArgumentException, "File cannot be null"_s);
	}
	$var($InputSource, input, $new($InputSource, $($nc($($nc(f)->toURI()))->toASCIIString())));
	this->parse(input, dh);
}

void SAXParser::parse($InputSource* is, $HandlerBase* hb) {
	if (is == nullptr) {
		$throwNew($IllegalArgumentException, "InputSource cannot be null"_s);
	}
	$var($Parser, parser, this->getParser());
	if (hb != nullptr) {
		$nc(parser)->setDocumentHandler(hb);
		parser->setEntityResolver(hb);
		parser->setErrorHandler(hb);
		parser->setDTDHandler(hb);
	}
	$nc(parser)->parse(is);
}

void SAXParser::parse($InputSource* is, $DefaultHandler* dh) {
	if (is == nullptr) {
		$throwNew($IllegalArgumentException, "InputSource cannot be null"_s);
	}
	$var($XMLReader, reader, this->getXMLReader());
	if (dh != nullptr) {
		$nc(reader)->setContentHandler(dh);
		reader->setEntityResolver(dh);
		reader->setErrorHandler(dh);
		reader->setDTDHandler(dh);
	}
	$nc(reader)->parse(is);
}

$Schema* SAXParser::getSchema() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({"This parser does not support specification \""_s, $($nc($($of(this)->getClass()->getPackage()))->getSpecificationTitle()), "\" version \""_s}));
	$var($String, var$0, $$concat(var$1, $($nc($($of(this)->getClass()->getPackage()))->getSpecificationVersion())));
	$throwNew($UnsupportedOperationException, $$concat(var$0, "\""_s));
	$shouldNotReachHere();
}

bool SAXParser::isXIncludeAware() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({"This parser does not support specification \""_s, $($nc($($of(this)->getClass()->getPackage()))->getSpecificationTitle()), "\" version \""_s}));
	$var($String, var$0, $$concat(var$1, $($nc($($of(this)->getClass()->getPackage()))->getSpecificationVersion())));
	$throwNew($UnsupportedOperationException, $$concat(var$0, "\""_s));
	$shouldNotReachHere();
}

SAXParser::SAXParser() {
}

$Class* SAXParser::load$($String* name, bool initialize) {
	$loadClass(SAXParser, name, initialize, &_SAXParser_ClassInfo_, allocate$SAXParser);
	return class$;
}

$Class* SAXParser::class$ = nullptr;

		} // parsers
	} // xml
} // javax