#include <com/sun/org/apache/xpath/internal/functions/WrongNumberArgsException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace functions {

$FieldInfo _WrongNumberArgsException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(WrongNumberArgsException, serialVersionUID)},
	{}
};

$MethodInfo _WrongNumberArgsException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(WrongNumberArgsException, init$, void, $String*)},
	{}
};

$ClassInfo _WrongNumberArgsException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.WrongNumberArgsException",
	"java.lang.Exception",
	nullptr,
	_WrongNumberArgsException_FieldInfo_,
	_WrongNumberArgsException_MethodInfo_
};

$Object* allocate$WrongNumberArgsException($Class* clazz) {
	return $of($alloc(WrongNumberArgsException));
}

void WrongNumberArgsException::init$($String* argsExpected) {
	$Exception::init$(argsExpected);
}

WrongNumberArgsException::WrongNumberArgsException() {
}

WrongNumberArgsException::WrongNumberArgsException(const WrongNumberArgsException& e) : $Exception(e) {
}

void WrongNumberArgsException::throw$() {
	throw *this;
}

$Class* WrongNumberArgsException::load$($String* name, bool initialize) {
	$loadClass(WrongNumberArgsException, name, initialize, &_WrongNumberArgsException_ClassInfo_, allocate$WrongNumberArgsException);
	return class$;
}

$Class* WrongNumberArgsException::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com