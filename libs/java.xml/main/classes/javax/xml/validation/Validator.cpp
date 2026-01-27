#include <javax/xml/validation/Validator.h>

#include <javax/xml/transform/Result.h>
#include <javax/xml/transform/Source.h>
#include <org/w3c/dom/ls/LSResourceResolver.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/SAXNotRecognizedException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Result = ::javax::xml::transform::Result;
using $Source = ::javax::xml::transform::Source;
using $LSResourceResolver = ::org::w3c::dom::ls::LSResourceResolver;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $SAXNotRecognizedException = ::org::xml::sax::SAXNotRecognizedException;

namespace javax {
	namespace xml {
		namespace validation {

$MethodInfo _Validator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(Validator, init$, void)},
	{"getErrorHandler", "()Lorg/xml/sax/ErrorHandler;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Validator, getErrorHandler, $ErrorHandler*)},
	{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(Validator, getFeature, bool, $String*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Validator, getProperty, $Object*, $String*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"getResourceResolver", "()Lorg/w3c/dom/ls/LSResourceResolver;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Validator, getResourceResolver, $LSResourceResolver*)},
	{"reset", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Validator, reset, void)},
	{"setErrorHandler", "(Lorg/xml/sax/ErrorHandler;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Validator, setErrorHandler, void, $ErrorHandler*)},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(Validator, setFeature, void, $String*, bool), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Validator, setProperty, void, $String*, Object$*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"setResourceResolver", "(Lorg/w3c/dom/ls/LSResourceResolver;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Validator, setResourceResolver, void, $LSResourceResolver*)},
	{"validate", "(Ljavax/xml/transform/Source;)V", nullptr, $PUBLIC, $virtualMethod(Validator, validate, void, $Source*), "org.xml.sax.SAXException,java.io.IOException"},
	{"validate", "(Ljavax/xml/transform/Source;Ljavax/xml/transform/Result;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Validator, validate, void, $Source*, $Result*), "org.xml.sax.SAXException,java.io.IOException"},
	{}
};

$ClassInfo _Validator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.xml.validation.Validator",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Validator_MethodInfo_
};

$Object* allocate$Validator($Class* clazz) {
	return $of($alloc(Validator));
}

void Validator::init$() {
}

void Validator::validate($Source* source) {
	validate(source, nullptr);
}

bool Validator::getFeature($String* name) {
	if (name == nullptr) {
		$throwNew($NullPointerException, "the name parameter is null"_s);
	}
	$throwNew($SAXNotRecognizedException, name);
	$shouldNotReachHere();
}

void Validator::setFeature($String* name, bool value) {
	if (name == nullptr) {
		$throwNew($NullPointerException, "the name parameter is null"_s);
	}
	$throwNew($SAXNotRecognizedException, name);
}

void Validator::setProperty($String* name, Object$* object) {
	if (name == nullptr) {
		$throwNew($NullPointerException, "the name parameter is null"_s);
	}
	$throwNew($SAXNotRecognizedException, name);
}

$Object* Validator::getProperty($String* name) {
	if (name == nullptr) {
		$throwNew($NullPointerException, "the name parameter is null"_s);
	}
	$throwNew($SAXNotRecognizedException, name);
	$shouldNotReachHere();
}

Validator::Validator() {
}

$Class* Validator::load$($String* name, bool initialize) {
	$loadClass(Validator, name, initialize, &_Validator_ClassInfo_, allocate$Validator);
	return class$;
}

$Class* Validator::class$ = nullptr;

		} // validation
	} // xml
} // javax