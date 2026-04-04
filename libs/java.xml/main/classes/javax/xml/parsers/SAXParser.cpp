#include <javax/xml/parsers/SAXParser.h>
#include <java/io/File.h>
#include <java/io/InputStream.h>
#include <java/lang/Package.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/net/URI.h>
#include <javax/xml/validation/Schema.h>
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
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Schema = ::javax::xml::validation::Schema;
using $HandlerBase = ::org::xml::sax::HandlerBase;
using $InputSource = ::org::xml::sax::InputSource;
using $Parser = ::org::xml::sax::Parser;
using $XMLReader = ::org::xml::sax::XMLReader;
using $DefaultHandler = ::org::xml::sax::helpers::DefaultHandler;

namespace javax {
	namespace xml {
		namespace parsers {

void SAXParser::init$() {
}

void SAXParser::reset() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("This SAXParser, \""_s);
	var$0->append($(this->getClass()->getName()));
	var$0->append("\", does not support the reset functionality.  Specification \""_s);
	var$0->append($($$nc(this->getClass()->getPackage())->getSpecificationTitle()));
	var$0->append("\" version \""_s);
	var$0->append($($$nc(this->getClass()->getPackage())->getSpecificationVersion()));
	var$0->append("\""_s);
	$throwNew($UnsupportedOperationException, $$str(var$0));
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
	$useLocalObjectStack();
	if (f == nullptr) {
		$throwNew($IllegalArgumentException, "File cannot be null"_s);
	}
	$var($InputSource, input, $new($InputSource, $($$nc($nc(f)->toURI())->toASCIIString())));
	this->parse(input, hb);
}

void SAXParser::parse($File* f, $DefaultHandler* dh) {
	$useLocalObjectStack();
	if (f == nullptr) {
		$throwNew($IllegalArgumentException, "File cannot be null"_s);
	}
	$var($InputSource, input, $new($InputSource, $($$nc($nc(f)->toURI())->toASCIIString())));
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
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("This parser does not support specification \""_s);
	var$0->append($($$nc(this->getClass()->getPackage())->getSpecificationTitle()));
	var$0->append("\" version \""_s);
	var$0->append($($$nc(this->getClass()->getPackage())->getSpecificationVersion()));
	var$0->append("\""_s);
	$throwNew($UnsupportedOperationException, $$str(var$0));
	$shouldNotReachHere();
}

bool SAXParser::isXIncludeAware() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("This parser does not support specification \""_s);
	var$0->append($($$nc(this->getClass()->getPackage())->getSpecificationTitle()));
	var$0->append("\" version \""_s);
	var$0->append($($$nc(this->getClass()->getPackage())->getSpecificationVersion()));
	var$0->append("\""_s);
	$throwNew($UnsupportedOperationException, $$str(var$0));
	$shouldNotReachHere();
}

SAXParser::SAXParser() {
}

$Class* SAXParser::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
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
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.xml.parsers.SAXParser",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SAXParser, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SAXParser);
	});
	return class$;
}

$Class* SAXParser::class$ = nullptr;

		} // parsers
	} // xml
} // javax