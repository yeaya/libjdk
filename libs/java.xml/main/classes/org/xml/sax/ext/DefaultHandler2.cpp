#include <org/xml/sax/ext/DefaultHandler2.h>

#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/helpers/DefaultHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InputSource = ::org::xml::sax::InputSource;
using $DefaultHandler = ::org::xml::sax::helpers::DefaultHandler;

namespace org {
	namespace xml {
		namespace sax {
			namespace ext {

$MethodInfo _DefaultHandler2_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultHandler2, init$, void)},
	{"attributeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DefaultHandler2, attributeDecl, void, $String*, $String*, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"comment", "([CII)V", nullptr, $PUBLIC, $virtualMethod(DefaultHandler2, comment, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"elementDecl", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DefaultHandler2, elementDecl, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"endCDATA", "()V", nullptr, $PUBLIC, $virtualMethod(DefaultHandler2, endCDATA, void), "org.xml.sax.SAXException"},
	{"endDTD", "()V", nullptr, $PUBLIC, $virtualMethod(DefaultHandler2, endDTD, void), "org.xml.sax.SAXException"},
	{"endEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DefaultHandler2, endEntity, void, $String*), "org.xml.sax.SAXException"},
	{"externalEntityDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DefaultHandler2, externalEntityDecl, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"getExternalSubset", "(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;", nullptr, $PUBLIC, $virtualMethod(DefaultHandler2, getExternalSubset, $InputSource*, $String*, $String*), "org.xml.sax.SAXException,java.io.IOException"},
	{"internalEntityDecl", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DefaultHandler2, internalEntityDecl, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"resolveEntity", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;", nullptr, $PUBLIC, $virtualMethod(DefaultHandler2, resolveEntity, $InputSource*, $String*, $String*, $String*, $String*), "org.xml.sax.SAXException,java.io.IOException"},
	{"resolveEntity", "(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;", nullptr, $PUBLIC, $virtualMethod(DefaultHandler2, resolveEntity, $InputSource*, $String*, $String*), "org.xml.sax.SAXException,java.io.IOException"},
	{"startCDATA", "()V", nullptr, $PUBLIC, $virtualMethod(DefaultHandler2, startCDATA, void), "org.xml.sax.SAXException"},
	{"startDTD", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DefaultHandler2, startDTD, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"startEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DefaultHandler2, startEntity, void, $String*), "org.xml.sax.SAXException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DefaultHandler2_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"org.xml.sax.ext.DefaultHandler2",
	"org.xml.sax.helpers.DefaultHandler",
	"org.xml.sax.ext.LexicalHandler,org.xml.sax.ext.DeclHandler,org.xml.sax.ext.EntityResolver2",
	nullptr,
	_DefaultHandler2_MethodInfo_
};

$Object* allocate$DefaultHandler2($Class* clazz) {
	return $of($alloc(DefaultHandler2));
}

int32_t DefaultHandler2::hashCode() {
	 return this->$DefaultHandler::hashCode();
}

bool DefaultHandler2::equals(Object$* arg0) {
	 return this->$DefaultHandler::equals(arg0);
}

$Object* DefaultHandler2::clone() {
	 return this->$DefaultHandler::clone();
}

$String* DefaultHandler2::toString() {
	 return this->$DefaultHandler::toString();
}

void DefaultHandler2::finalize() {
	this->$DefaultHandler::finalize();
}

void DefaultHandler2::init$() {
	$DefaultHandler::init$();
}

void DefaultHandler2::startCDATA() {
}

void DefaultHandler2::endCDATA() {
}

void DefaultHandler2::startDTD($String* name, $String* publicId, $String* systemId) {
}

void DefaultHandler2::endDTD() {
}

void DefaultHandler2::startEntity($String* name) {
}

void DefaultHandler2::endEntity($String* name) {
}

void DefaultHandler2::comment($chars* ch, int32_t start, int32_t length) {
}

void DefaultHandler2::attributeDecl($String* eName, $String* aName, $String* type, $String* mode, $String* value) {
}

void DefaultHandler2::elementDecl($String* name, $String* model) {
}

void DefaultHandler2::externalEntityDecl($String* name, $String* publicId, $String* systemId) {
}

void DefaultHandler2::internalEntityDecl($String* name, $String* value) {
}

$InputSource* DefaultHandler2::getExternalSubset($String* name, $String* baseURI) {
	return nullptr;
}

$InputSource* DefaultHandler2::resolveEntity($String* name, $String* publicId, $String* baseURI, $String* systemId) {
	return nullptr;
}

$InputSource* DefaultHandler2::resolveEntity($String* publicId, $String* systemId) {
	return resolveEntity(nullptr, publicId, nullptr, systemId);
}

DefaultHandler2::DefaultHandler2() {
}

$Class* DefaultHandler2::load$($String* name, bool initialize) {
	$loadClass(DefaultHandler2, name, initialize, &_DefaultHandler2_ClassInfo_, allocate$DefaultHandler2);
	return class$;
}

$Class* DefaultHandler2::class$ = nullptr;

			} // ext
		} // sax
	} // xml
} // org