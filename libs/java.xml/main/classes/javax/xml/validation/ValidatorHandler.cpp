#include <javax/xml/validation/ValidatorHandler.h>

#include <javax/xml/validation/TypeInfoProvider.h>
#include <org/w3c/dom/ls/LSResourceResolver.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/SAXNotRecognizedException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $TypeInfoProvider = ::javax::xml::validation::TypeInfoProvider;
using $LSResourceResolver = ::org::w3c::dom::ls::LSResourceResolver;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $SAXNotRecognizedException = ::org::xml::sax::SAXNotRecognizedException;

namespace javax {
	namespace xml {
		namespace validation {

$MethodInfo _ValidatorHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(ValidatorHandler, init$, void)},
	{"getContentHandler", "()Lorg/xml/sax/ContentHandler;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ValidatorHandler, getContentHandler, $ContentHandler*)},
	{"getErrorHandler", "()Lorg/xml/sax/ErrorHandler;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ValidatorHandler, getErrorHandler, $ErrorHandler*)},
	{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(ValidatorHandler, getFeature, bool, $String*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ValidatorHandler, getProperty, $Object*, $String*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"getResourceResolver", "()Lorg/w3c/dom/ls/LSResourceResolver;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ValidatorHandler, getResourceResolver, $LSResourceResolver*)},
	{"getTypeInfoProvider", "()Ljavax/xml/validation/TypeInfoProvider;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ValidatorHandler, getTypeInfoProvider, $TypeInfoProvider*)},
	{"setContentHandler", "(Lorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ValidatorHandler, setContentHandler, void, $ContentHandler*)},
	{"setErrorHandler", "(Lorg/xml/sax/ErrorHandler;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ValidatorHandler, setErrorHandler, void, $ErrorHandler*)},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(ValidatorHandler, setFeature, void, $String*, bool), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ValidatorHandler, setProperty, void, $String*, Object$*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"setResourceResolver", "(Lorg/w3c/dom/ls/LSResourceResolver;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ValidatorHandler, setResourceResolver, void, $LSResourceResolver*)},
	{}
};

$ClassInfo _ValidatorHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.xml.validation.ValidatorHandler",
	"java.lang.Object",
	"org.xml.sax.ContentHandler",
	nullptr,
	_ValidatorHandler_MethodInfo_
};

$Object* allocate$ValidatorHandler($Class* clazz) {
	return $of($alloc(ValidatorHandler));
}

void ValidatorHandler::init$() {
}

bool ValidatorHandler::getFeature($String* name) {
	if (name == nullptr) {
		$throwNew($NullPointerException);
	}
	$throwNew($SAXNotRecognizedException, name);
	$shouldNotReachHere();
}

void ValidatorHandler::setFeature($String* name, bool value) {
	if (name == nullptr) {
		$throwNew($NullPointerException);
	}
	$throwNew($SAXNotRecognizedException, name);
}

void ValidatorHandler::setProperty($String* name, Object$* object) {
	if (name == nullptr) {
		$throwNew($NullPointerException);
	}
	$throwNew($SAXNotRecognizedException, name);
}

$Object* ValidatorHandler::getProperty($String* name) {
	if (name == nullptr) {
		$throwNew($NullPointerException);
	}
	$throwNew($SAXNotRecognizedException, name);
	$shouldNotReachHere();
}

ValidatorHandler::ValidatorHandler() {
}

$Class* ValidatorHandler::load$($String* name, bool initialize) {
	$loadClass(ValidatorHandler, name, initialize, &_ValidatorHandler_ClassInfo_, allocate$ValidatorHandler);
	return class$;
}

$Class* ValidatorHandler::class$ = nullptr;

		} // validation
	} // xml
} // javax