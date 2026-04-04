#include <javax/management/BadStringOperationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace management {

void BadStringOperationException::init$($String* message) {
	$Exception::init$();
	$set(this, op, message);
}

$String* BadStringOperationException::toString() {
	return $str({"BadStringOperationException: "_s, this->op});
}

BadStringOperationException::BadStringOperationException() {
}

BadStringOperationException::BadStringOperationException(const BadStringOperationException& e) : $Exception(e) {
}

void BadStringOperationException::throw$() {
	throw *this;
}

$Class* BadStringOperationException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BadStringOperationException, serialVersionUID)},
		{"op", "Ljava/lang/String;", nullptr, $PRIVATE, $field(BadStringOperationException, op)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(BadStringOperationException, init$, void, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BadStringOperationException, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.BadStringOperationException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BadStringOperationException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BadStringOperationException);
	});
	return class$;
}

$Class* BadStringOperationException::class$ = nullptr;

	} // management
} // javax