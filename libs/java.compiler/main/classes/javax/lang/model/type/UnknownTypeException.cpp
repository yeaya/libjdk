#include <javax/lang/model/type/UnknownTypeException.h>
#include <javax/lang/model/UnknownEntityException.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnknownEntityException = ::javax::lang::model::UnknownEntityException;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

void UnknownTypeException::init$($TypeMirror* t, Object$* p) {
	$UnknownEntityException::init$($$str({"Unknown type: \""_s, t, "\""_s}));
	$set(this, type, t);
	$set(this, parameter, p);
}

$TypeMirror* UnknownTypeException::getUnknownType() {
	return this->type;
}

$Object* UnknownTypeException::getArgument() {
	return this->parameter;
}

UnknownTypeException::UnknownTypeException() {
}

UnknownTypeException::UnknownTypeException(const UnknownTypeException& e) : $UnknownEntityException(e) {
}

void UnknownTypeException::throw$() {
	throw *this;
}

$Class* UnknownTypeException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnknownTypeException, serialVersionUID)},
		{"type", "Ljavax/lang/model/type/TypeMirror;", nullptr, $PRIVATE | $TRANSIENT, $field(UnknownTypeException, type)},
		{"parameter", "Ljava/lang/Object;", nullptr, $PRIVATE | $TRANSIENT, $field(UnknownTypeException, parameter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/lang/model/type/TypeMirror;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(UnknownTypeException, init$, void, $TypeMirror*, Object$*)},
		{"getArgument", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(UnknownTypeException, getArgument, $Object*)},
		{"getUnknownType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC, $virtualMethod(UnknownTypeException, getUnknownType, $TypeMirror*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.lang.model.type.UnknownTypeException",
		"javax.lang.model.UnknownEntityException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnknownTypeException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnknownTypeException);
	});
	return class$;
}

$Class* UnknownTypeException::class$ = nullptr;

			} // type
		} // model
	} // lang
} // javax