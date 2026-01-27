#include <javax/xml/parsers/DocumentBuilder.h>

#include <java/io/File.h>
#include <java/io/InputStream.h>
#include <java/lang/Package.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/net/URI.h>
#include <javax/xml/validation/Schema.h>
#include <org/w3c/dom/DOMImplementation.h>
#include <org/w3c/dom/Document.h>
#include <org/xml/sax/EntityResolver.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/InputSource.h>
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
using $DOMImplementation = ::org::w3c::dom::DOMImplementation;
using $Document = ::org::w3c::dom::Document;
using $EntityResolver = ::org::xml::sax::EntityResolver;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $InputSource = ::org::xml::sax::InputSource;

namespace javax {
	namespace xml {
		namespace parsers {

$MethodInfo _DocumentBuilder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(DocumentBuilder, init$, void)},
	{"getDOMImplementation", "()Lorg/w3c/dom/DOMImplementation;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentBuilder, getDOMImplementation, $DOMImplementation*)},
	{"getSchema", "()Ljavax/xml/validation/Schema;", nullptr, $PUBLIC, $virtualMethod(DocumentBuilder, getSchema, $Schema*)},
	{"isNamespaceAware", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentBuilder, isNamespaceAware, bool)},
	{"isValidating", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentBuilder, isValidating, bool)},
	{"isXIncludeAware", "()Z", nullptr, $PUBLIC, $virtualMethod(DocumentBuilder, isXIncludeAware, bool)},
	{"newDocument", "()Lorg/w3c/dom/Document;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentBuilder, newDocument, $Document*)},
	{"parse", "(Ljava/io/InputStream;)Lorg/w3c/dom/Document;", nullptr, $PUBLIC, $virtualMethod(DocumentBuilder, parse, $Document*, $InputStream*), "org.xml.sax.SAXException,java.io.IOException"},
	{"parse", "(Ljava/io/InputStream;Ljava/lang/String;)Lorg/w3c/dom/Document;", nullptr, $PUBLIC, $virtualMethod(DocumentBuilder, parse, $Document*, $InputStream*, $String*), "org.xml.sax.SAXException,java.io.IOException"},
	{"parse", "(Ljava/lang/String;)Lorg/w3c/dom/Document;", nullptr, $PUBLIC, $virtualMethod(DocumentBuilder, parse, $Document*, $String*), "org.xml.sax.SAXException,java.io.IOException"},
	{"parse", "(Ljava/io/File;)Lorg/w3c/dom/Document;", nullptr, $PUBLIC, $virtualMethod(DocumentBuilder, parse, $Document*, $File*), "org.xml.sax.SAXException,java.io.IOException"},
	{"parse", "(Lorg/xml/sax/InputSource;)Lorg/w3c/dom/Document;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentBuilder, parse, $Document*, $InputSource*), "org.xml.sax.SAXException,java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(DocumentBuilder, reset, void)},
	{"setEntityResolver", "(Lorg/xml/sax/EntityResolver;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentBuilder, setEntityResolver, void, $EntityResolver*)},
	{"setErrorHandler", "(Lorg/xml/sax/ErrorHandler;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentBuilder, setErrorHandler, void, $ErrorHandler*)},
	{}
};

$ClassInfo _DocumentBuilder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.xml.parsers.DocumentBuilder",
	"java.lang.Object",
	nullptr,
	nullptr,
	_DocumentBuilder_MethodInfo_
};

$Object* allocate$DocumentBuilder($Class* clazz) {
	return $of($alloc(DocumentBuilder));
}

void DocumentBuilder::init$() {
}

void DocumentBuilder::reset() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$3, $$str({"This DocumentBuilder, \""_s, $($of(this)->getClass()->getName()), "\", does not support the reset functionality.  Specification \""_s}));
	$var($String, var$2, $$concat(var$3, $($nc($($of(this)->getClass()->getPackage()))->getSpecificationTitle())));
	$var($String, var$1, $$concat(var$2, "\" version \""_s));
	$var($String, var$0, $$concat(var$1, $($nc($($of(this)->getClass()->getPackage()))->getSpecificationVersion())));
	$throwNew($UnsupportedOperationException, $$concat(var$0, "\""_s));
}

$Document* DocumentBuilder::parse($InputStream* is) {
	if (is == nullptr) {
		$throwNew($IllegalArgumentException, "InputStream cannot be null"_s);
	}
	$var($InputSource, in, $new($InputSource, is));
	return parse(in);
}

$Document* DocumentBuilder::parse($InputStream* is, $String* systemId) {
	if (is == nullptr) {
		$throwNew($IllegalArgumentException, "InputStream cannot be null"_s);
	}
	$var($InputSource, in, $new($InputSource, is));
	in->setSystemId(systemId);
	return parse(in);
}

$Document* DocumentBuilder::parse($String* uri) {
	if (uri == nullptr) {
		$throwNew($IllegalArgumentException, "URI cannot be null"_s);
	}
	$var($InputSource, in, $new($InputSource, uri));
	return parse(in);
}

$Document* DocumentBuilder::parse($File* f) {
	$useLocalCurrentObjectStackCache();
	if (f == nullptr) {
		$throwNew($IllegalArgumentException, "File cannot be null"_s);
	}
	$var($InputSource, in, $new($InputSource, $($nc($($nc(f)->toURI()))->toASCIIString())));
	return parse(in);
}

$Schema* DocumentBuilder::getSchema() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({"This parser does not support specification \""_s, $($nc($($of(this)->getClass()->getPackage()))->getSpecificationTitle()), "\" version \""_s}));
	$var($String, var$0, $$concat(var$1, $($nc($($of(this)->getClass()->getPackage()))->getSpecificationVersion())));
	$throwNew($UnsupportedOperationException, $$concat(var$0, "\""_s));
	$shouldNotReachHere();
}

bool DocumentBuilder::isXIncludeAware() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({"This parser does not support specification \""_s, $($nc($($of(this)->getClass()->getPackage()))->getSpecificationTitle()), "\" version \""_s}));
	$var($String, var$0, $$concat(var$1, $($nc($($of(this)->getClass()->getPackage()))->getSpecificationVersion())));
	$throwNew($UnsupportedOperationException, $$concat(var$0, "\""_s));
	$shouldNotReachHere();
}

DocumentBuilder::DocumentBuilder() {
}

$Class* DocumentBuilder::load$($String* name, bool initialize) {
	$loadClass(DocumentBuilder, name, initialize, &_DocumentBuilder_ClassInfo_, allocate$DocumentBuilder);
	return class$;
}

$Class* DocumentBuilder::class$ = nullptr;

		} // parsers
	} // xml
} // javax