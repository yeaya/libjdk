#include <javax/xml/stream/FactoryConfigurationError.h>

#include <java/lang/Error.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace stream {

$FieldInfo _FactoryConfigurationError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FactoryConfigurationError, serialVersionUID)},
	{"nested", "Ljava/lang/Exception;", nullptr, 0, $field(FactoryConfigurationError, nested)},
	{}
};

$MethodInfo _FactoryConfigurationError_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FactoryConfigurationError, init$, void)},
	{"<init>", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(FactoryConfigurationError, init$, void, $Exception*)},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(FactoryConfigurationError, init$, void, $Exception*, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(FactoryConfigurationError, init$, void, $String*, $Exception*)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(FactoryConfigurationError, init$, void, $String*)},
	{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC, $virtualMethod(FactoryConfigurationError, getCause, $Throwable*)},
	{"getException", "()Ljava/lang/Exception;", nullptr, $PUBLIC, $virtualMethod(FactoryConfigurationError, getException, $Exception*)},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FactoryConfigurationError, getMessage, $String*)},
	{}
};

$ClassInfo _FactoryConfigurationError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.stream.FactoryConfigurationError",
	"java.lang.Error",
	nullptr,
	_FactoryConfigurationError_FieldInfo_,
	_FactoryConfigurationError_MethodInfo_
};

$Object* allocate$FactoryConfigurationError($Class* clazz) {
	return $of($alloc(FactoryConfigurationError));
}

void FactoryConfigurationError::init$() {
	$Error::init$();
}

void FactoryConfigurationError::init$($Exception* e) {
	$Error::init$();
	$set(this, nested, e);
}

void FactoryConfigurationError::init$($Exception* e, $String* msg) {
	$Error::init$(msg);
	$set(this, nested, e);
}

void FactoryConfigurationError::init$($String* msg, $Exception* e) {
	$Error::init$(msg);
	$set(this, nested, e);
}

void FactoryConfigurationError::init$($String* msg) {
	$Error::init$(msg);
}

$Exception* FactoryConfigurationError::getException() {
	return this->nested;
}

$Throwable* FactoryConfigurationError::getCause() {
	return this->nested;
}

$String* FactoryConfigurationError::getMessage() {
	$var($String, msg, $Error::getMessage());
	if (msg != nullptr) {
		return msg;
	}
	if (this->nested != nullptr) {
		$assign(msg, $nc(this->nested)->getMessage());
		if (msg == nullptr) {
			$assign(msg, $nc($of(this->nested))->getClass()->toString());
		}
	}
	return msg;
}

FactoryConfigurationError::FactoryConfigurationError() {
}

FactoryConfigurationError::FactoryConfigurationError(const FactoryConfigurationError& e) : $Error(e) {
}

void FactoryConfigurationError::throw$() {
	throw *this;
}

$Class* FactoryConfigurationError::load$($String* name, bool initialize) {
	$loadClass(FactoryConfigurationError, name, initialize, &_FactoryConfigurationError_ClassInfo_, allocate$FactoryConfigurationError);
	return class$;
}

$Class* FactoryConfigurationError::class$ = nullptr;

		} // stream
	} // xml
} // javax