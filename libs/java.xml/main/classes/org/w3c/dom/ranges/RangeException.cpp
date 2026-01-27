#include <org/w3c/dom/ranges/RangeException.h>

#include <jcpp.h>

#undef BAD_BOUNDARYPOINTS_ERR
#undef INVALID_NODE_TYPE_ERR

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace org {
	namespace w3c {
		namespace dom {
			namespace ranges {

$FieldInfo _RangeException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RangeException, serialVersionUID)},
	{"code", "S", nullptr, $PUBLIC, $field(RangeException, code)},
	{"BAD_BOUNDARYPOINTS_ERR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(RangeException, BAD_BOUNDARYPOINTS_ERR)},
	{"INVALID_NODE_TYPE_ERR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(RangeException, INVALID_NODE_TYPE_ERR)},
	{}
};

$MethodInfo _RangeException_MethodInfo_[] = {
	{"<init>", "(SLjava/lang/String;)V", nullptr, $PUBLIC, $method(RangeException, init$, void, int16_t, $String*)},
	{}
};

$ClassInfo _RangeException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"org.w3c.dom.ranges.RangeException",
	"java.lang.RuntimeException",
	nullptr,
	_RangeException_FieldInfo_,
	_RangeException_MethodInfo_
};

$Object* allocate$RangeException($Class* clazz) {
	return $of($alloc(RangeException));
}

void RangeException::init$(int16_t code, $String* message) {
	$RuntimeException::init$(message);
	this->code = code;
}

RangeException::RangeException() {
}

RangeException::RangeException(const RangeException& e) : $RuntimeException(e) {
}

void RangeException::throw$() {
	throw *this;
}

$Class* RangeException::load$($String* name, bool initialize) {
	$loadClass(RangeException, name, initialize, &_RangeException_ClassInfo_, allocate$RangeException);
	return class$;
}

$Class* RangeException::class$ = nullptr;

			} // ranges
		} // dom
	} // w3c
} // org