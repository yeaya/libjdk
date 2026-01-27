#include <javax/xml/transform/TransformerConfigurationException.h>

#include <javax/xml/transform/SourceLocator.h>
#include <javax/xml/transform/TransformerException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SourceLocator = ::javax::xml::transform::SourceLocator;
using $TransformerException = ::javax::xml::transform::TransformerException;

namespace javax {
	namespace xml {
		namespace transform {

$FieldInfo _TransformerConfigurationException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TransformerConfigurationException, serialVersionUID)},
	{}
};

$MethodInfo _TransformerConfigurationException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TransformerConfigurationException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(TransformerConfigurationException, init$, void, $String*)},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(TransformerConfigurationException, init$, void, $Throwable*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(TransformerConfigurationException, init$, void, $String*, $Throwable*)},
	{"<init>", "(Ljava/lang/String;Ljavax/xml/transform/SourceLocator;)V", nullptr, $PUBLIC, $method(TransformerConfigurationException, init$, void, $String*, $SourceLocator*)},
	{"<init>", "(Ljava/lang/String;Ljavax/xml/transform/SourceLocator;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(TransformerConfigurationException, init$, void, $String*, $SourceLocator*, $Throwable*)},
	{}
};

$ClassInfo _TransformerConfigurationException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.transform.TransformerConfigurationException",
	"javax.xml.transform.TransformerException",
	nullptr,
	_TransformerConfigurationException_FieldInfo_,
	_TransformerConfigurationException_MethodInfo_
};

$Object* allocate$TransformerConfigurationException($Class* clazz) {
	return $of($alloc(TransformerConfigurationException));
}

void TransformerConfigurationException::init$() {
	$TransformerException::init$("Configuration Error"_s);
}

void TransformerConfigurationException::init$($String* msg) {
	$TransformerException::init$(msg);
}

void TransformerConfigurationException::init$($Throwable* e) {
	$TransformerException::init$(e);
}

void TransformerConfigurationException::init$($String* msg, $Throwable* e) {
	$TransformerException::init$(msg, e);
}

void TransformerConfigurationException::init$($String* message, $SourceLocator* locator) {
	$TransformerException::init$(message, locator);
}

void TransformerConfigurationException::init$($String* message, $SourceLocator* locator, $Throwable* e) {
	$TransformerException::init$(message, locator, e);
}

TransformerConfigurationException::TransformerConfigurationException() {
}

TransformerConfigurationException::TransformerConfigurationException(const TransformerConfigurationException& e) : $TransformerException(e) {
}

void TransformerConfigurationException::throw$() {
	throw *this;
}

$Class* TransformerConfigurationException::load$($String* name, bool initialize) {
	$loadClass(TransformerConfigurationException, name, initialize, &_TransformerConfigurationException_ClassInfo_, allocate$TransformerConfigurationException);
	return class$;
}

$Class* TransformerConfigurationException::class$ = nullptr;

		} // transform
	} // xml
} // javax