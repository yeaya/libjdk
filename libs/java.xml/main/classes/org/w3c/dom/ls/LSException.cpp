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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LSException, serialVersionUID)},
		{"code", "S", nullptr, $PUBLIC, $field(LSException, code)},
		{"PARSE_ERR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LSException, PARSE_ERR)},
		{"SERIALIZE_ERR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LSException, SERIALIZE_ERR)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(SLjava/lang/String;)V", nullptr, $PUBLIC, $method(LSException, init$, void, int16_t, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"org.w3c.dom.ls.LSException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LSException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LSException);
	});
	return class$;
}

$Class* LSException::class$ = nullptr;

			} // ls
		} // dom
	} // w3c
} // org