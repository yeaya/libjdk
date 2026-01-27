#include <com/sun/org/apache/xml/internal/dtm/DTMException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {

$FieldInfo _DTMException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(DTMException, serialVersionUID)},
	{}
};

$MethodInfo _DTMException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DTMException, init$, void, $String*)},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(DTMException, init$, void, $Throwable*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(DTMException, init$, void, $String*, $Throwable*)},
	{}
};

$ClassInfo _DTMException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.DTMException",
	"java.lang.RuntimeException",
	nullptr,
	_DTMException_FieldInfo_,
	_DTMException_MethodInfo_
};

$Object* allocate$DTMException($Class* clazz) {
	return $of($alloc(DTMException));
}

void DTMException::init$($String* message) {
	$RuntimeException::init$(message);
}

void DTMException::init$($Throwable* e) {
	$RuntimeException::init$(e);
}

void DTMException::init$($String* message, $Throwable* e) {
	$RuntimeException::init$(message, e);
}

DTMException::DTMException() {
}

DTMException::DTMException(const DTMException& e) : $RuntimeException(e) {
}

void DTMException::throw$() {
	throw *this;
}

$Class* DTMException::load$($String* name, bool initialize) {
	$loadClass(DTMException, name, initialize, &_DTMException_ClassInfo_, allocate$DTMException);
	return class$;
}

$Class* DTMException::class$ = nullptr;

						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com