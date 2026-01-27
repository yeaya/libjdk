#include <org/w3c/dom/DOMException.h>

#include <jcpp.h>

#undef DOMSTRING_SIZE_ERR
#undef HIERARCHY_REQUEST_ERR
#undef INDEX_SIZE_ERR
#undef INUSE_ATTRIBUTE_ERR
#undef INVALID_ACCESS_ERR
#undef INVALID_CHARACTER_ERR
#undef INVALID_MODIFICATION_ERR
#undef INVALID_STATE_ERR
#undef NAMESPACE_ERR
#undef NOT_FOUND_ERR
#undef NOT_SUPPORTED_ERR
#undef NO_DATA_ALLOWED_ERR
#undef NO_MODIFICATION_ALLOWED_ERR
#undef SYNTAX_ERR
#undef TYPE_MISMATCH_ERR
#undef VALIDATION_ERR
#undef WRONG_DOCUMENT_ERR

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace org {
	namespace w3c {
		namespace dom {

$FieldInfo _DOMException_FieldInfo_[] = {
	{"code", "S", nullptr, $PUBLIC, $field(DOMException, code)},
	{"INDEX_SIZE_ERR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOMException, INDEX_SIZE_ERR)},
	{"DOMSTRING_SIZE_ERR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOMException, DOMSTRING_SIZE_ERR)},
	{"HIERARCHY_REQUEST_ERR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOMException, HIERARCHY_REQUEST_ERR)},
	{"WRONG_DOCUMENT_ERR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOMException, WRONG_DOCUMENT_ERR)},
	{"INVALID_CHARACTER_ERR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOMException, INVALID_CHARACTER_ERR)},
	{"NO_DATA_ALLOWED_ERR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOMException, NO_DATA_ALLOWED_ERR)},
	{"NO_MODIFICATION_ALLOWED_ERR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOMException, NO_MODIFICATION_ALLOWED_ERR)},
	{"NOT_FOUND_ERR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOMException, NOT_FOUND_ERR)},
	{"NOT_SUPPORTED_ERR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOMException, NOT_SUPPORTED_ERR)},
	{"INUSE_ATTRIBUTE_ERR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOMException, INUSE_ATTRIBUTE_ERR)},
	{"INVALID_STATE_ERR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOMException, INVALID_STATE_ERR)},
	{"SYNTAX_ERR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOMException, SYNTAX_ERR)},
	{"INVALID_MODIFICATION_ERR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOMException, INVALID_MODIFICATION_ERR)},
	{"NAMESPACE_ERR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOMException, NAMESPACE_ERR)},
	{"INVALID_ACCESS_ERR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOMException, INVALID_ACCESS_ERR)},
	{"VALIDATION_ERR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOMException, VALIDATION_ERR)},
	{"TYPE_MISMATCH_ERR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOMException, TYPE_MISMATCH_ERR)},
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(DOMException, serialVersionUID)},
	{}
};

$MethodInfo _DOMException_MethodInfo_[] = {
	{"<init>", "(SLjava/lang/String;)V", nullptr, $PUBLIC, $method(DOMException, init$, void, int16_t, $String*)},
	{}
};

$ClassInfo _DOMException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"org.w3c.dom.DOMException",
	"java.lang.RuntimeException",
	nullptr,
	_DOMException_FieldInfo_,
	_DOMException_MethodInfo_
};

$Object* allocate$DOMException($Class* clazz) {
	return $of($alloc(DOMException));
}

void DOMException::init$(int16_t code, $String* message) {
	$RuntimeException::init$(message);
	this->code = code;
}

DOMException::DOMException() {
}

DOMException::DOMException(const DOMException& e) : $RuntimeException(e) {
}

void DOMException::throw$() {
	throw *this;
}

$Class* DOMException::load$($String* name, bool initialize) {
	$loadClass(DOMException, name, initialize, &_DOMException_ClassInfo_, allocate$DOMException);
	return class$;
}

$Class* DOMException::class$ = nullptr;

		} // dom
	} // w3c
} // org