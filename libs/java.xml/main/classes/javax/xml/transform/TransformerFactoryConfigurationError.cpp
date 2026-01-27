#include <javax/xml/transform/TransformerFactoryConfigurationError.h>

#include <java/lang/Error.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace transform {

$FieldInfo _TransformerFactoryConfigurationError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TransformerFactoryConfigurationError, serialVersionUID)},
	{"exception", "Ljava/lang/Exception;", nullptr, $PRIVATE, $field(TransformerFactoryConfigurationError, exception)},
	{}
};

$MethodInfo _TransformerFactoryConfigurationError_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TransformerFactoryConfigurationError, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(TransformerFactoryConfigurationError, init$, void, $String*)},
	{"<init>", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(TransformerFactoryConfigurationError, init$, void, $Exception*)},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(TransformerFactoryConfigurationError, init$, void, $Exception*, $String*)},
	{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC, $virtualMethod(TransformerFactoryConfigurationError, getCause, $Throwable*)},
	{"getException", "()Ljava/lang/Exception;", nullptr, $PUBLIC, $virtualMethod(TransformerFactoryConfigurationError, getException, $Exception*)},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TransformerFactoryConfigurationError, getMessage, $String*)},
	{}
};

$ClassInfo _TransformerFactoryConfigurationError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.transform.TransformerFactoryConfigurationError",
	"java.lang.Error",
	nullptr,
	_TransformerFactoryConfigurationError_FieldInfo_,
	_TransformerFactoryConfigurationError_MethodInfo_
};

$Object* allocate$TransformerFactoryConfigurationError($Class* clazz) {
	return $of($alloc(TransformerFactoryConfigurationError));
}

void TransformerFactoryConfigurationError::init$() {
	$Error::init$();
	$set(this, exception, nullptr);
}

void TransformerFactoryConfigurationError::init$($String* msg) {
	$Error::init$(msg);
	$set(this, exception, nullptr);
}

void TransformerFactoryConfigurationError::init$($Exception* e) {
	$Error::init$($($nc(e)->toString()));
	$set(this, exception, e);
}

void TransformerFactoryConfigurationError::init$($Exception* e, $String* msg) {
	$Error::init$(msg);
	$set(this, exception, e);
}

$String* TransformerFactoryConfigurationError::getMessage() {
	$var($String, message, $Error::getMessage());
	if ((message == nullptr) && (this->exception != nullptr)) {
		return $nc(this->exception)->getMessage();
	}
	return message;
}

$Exception* TransformerFactoryConfigurationError::getException() {
	return this->exception;
}

$Throwable* TransformerFactoryConfigurationError::getCause() {
	return this->exception;
}

TransformerFactoryConfigurationError::TransformerFactoryConfigurationError() {
}

TransformerFactoryConfigurationError::TransformerFactoryConfigurationError(const TransformerFactoryConfigurationError& e) : $Error(e) {
}

void TransformerFactoryConfigurationError::throw$() {
	throw *this;
}

$Class* TransformerFactoryConfigurationError::load$($String* name, bool initialize) {
	$loadClass(TransformerFactoryConfigurationError, name, initialize, &_TransformerFactoryConfigurationError_ClassInfo_, allocate$TransformerFactoryConfigurationError);
	return class$;
}

$Class* TransformerFactoryConfigurationError::class$ = nullptr;

		} // transform
	} // xml
} // javax