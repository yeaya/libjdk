#include <org/w3c/dom/ls/LSException.h>

#include <jcpp.h>

#undef PARSE_ERR
#undef SERIALIZE_ERR

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {

$FieldInfo _LSException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LSException, serialVersionUID)},
	{"code", "S", nullptr, $PUBLIC, $field(LSException, code)},
	{"PARSE_ERR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LSException, PARSE_ERR)},
	{"SERIALIZE_ERR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LSException, SERIALIZE_ERR)},
	{}
};

$MethodInfo _LSException_MethodInfo_[] = {
	{"<init>", "(SLjava/lang/String;)V", nullptr, $PUBLIC, $method(LSException, init$, void, int16_t, $String*)},
	{}
};

$ClassInfo _LSException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"org.w3c.dom.ls.LSException",
	"java.lang.RuntimeException",
	nullptr,
	_LSException_FieldInfo_,
	_LSException_MethodInfo_
};

$Object* allocate$LSException($Class* clazz) {
	return $of($alloc(LSException));
}

void LSException::init$(int16_t code, $String* message) {
	$RuntimeException::init$(message);
	this->code = code;
}

LSException::LSException() {
}

LSException::LSException(const LSException& e) : $RuntimeException(e) {
}

void LSException::throw$() {
	throw *this;
}

$Class* LSException::load$($String* name, bool initialize) {
	$loadClass(LSException, name, initialize, &_LSException_ClassInfo_, allocate$LSException);
	return class$;
}

$Class* LSException::class$ = nullptr;

			} // ls
		} // dom
	} // w3c
} // org