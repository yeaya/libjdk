#include <javax/management/BadBinaryOpValueExpException.h>
#include <javax/management/ValueExp.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ValueExp = ::javax::management::ValueExp;

namespace javax {
	namespace management {

void BadBinaryOpValueExpException::init$($ValueExp* exp) {
	$Exception::init$();
	$set(this, exp, exp);
}

$ValueExp* BadBinaryOpValueExpException::getExp() {
	return this->exp;
}

$String* BadBinaryOpValueExpException::toString() {
	return $str({"BadBinaryOpValueExpException: "_s, this->exp});
}

BadBinaryOpValueExpException::BadBinaryOpValueExpException() {
}

BadBinaryOpValueExpException::BadBinaryOpValueExpException(const BadBinaryOpValueExpException& e) : $Exception(e) {
}

void BadBinaryOpValueExpException::throw$() {
	throw *this;
}

$Class* BadBinaryOpValueExpException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BadBinaryOpValueExpException, serialVersionUID)},
		{"exp", "Ljavax/management/ValueExp;", nullptr, $PRIVATE, $field(BadBinaryOpValueExpException, exp)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/management/ValueExp;)V", nullptr, $PUBLIC, $method(BadBinaryOpValueExpException, init$, void, $ValueExp*)},
		{"getExp", "()Ljavax/management/ValueExp;", nullptr, $PUBLIC, $virtualMethod(BadBinaryOpValueExpException, getExp, $ValueExp*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BadBinaryOpValueExpException, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.BadBinaryOpValueExpException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BadBinaryOpValueExpException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BadBinaryOpValueExpException);
	});
	return class$;
}

$Class* BadBinaryOpValueExpException::class$ = nullptr;

	} // management
} // javax