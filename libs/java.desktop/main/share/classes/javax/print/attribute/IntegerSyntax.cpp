#include <javax/print/attribute/IntegerSyntax.h>
#include <java/io/Serializable.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace print {
		namespace attribute {

$Object* IntegerSyntax::clone() {
	return this->$Serializable::clone();
}

void IntegerSyntax::finalize() {
	this->$Serializable::finalize();
}

void IntegerSyntax::init$(int32_t value) {
	this->value = value;
}

void IntegerSyntax::init$(int32_t value, int32_t lowerBound, int32_t upperBound) {
	$useLocalObjectStack();
	if (lowerBound > value || value > upperBound) {
		$throwNew($IllegalArgumentException, $$str({"Value "_s, $$str(value), " not in range "_s, $$str(lowerBound), ".."_s, $$str(upperBound)}));
	}
	this->value = value;
}

int32_t IntegerSyntax::getValue() {
	return this->value;
}

bool IntegerSyntax::equals(Object$* object) {
	return (object != nullptr && $instanceOf(IntegerSyntax, object) && this->value == $cast(IntegerSyntax, object)->value);
}

int32_t IntegerSyntax::hashCode() {
	return this->value;
}

$String* IntegerSyntax::toString() {
	return $str({""_s, $$str(this->value)});
}

IntegerSyntax::IntegerSyntax() {
}

$Class* IntegerSyntax::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegerSyntax, serialVersionUID)},
		{"value", "I", nullptr, $PRIVATE, $field(IntegerSyntax, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"<init>", "(I)V", nullptr, $PROTECTED, $method(IntegerSyntax, init$, void, int32_t)},
		{"<init>", "(III)V", nullptr, $PROTECTED, $method(IntegerSyntax, init$, void, int32_t, int32_t, int32_t)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(IntegerSyntax, equals, bool, Object$*)},
		{"getValue", "()I", nullptr, $PUBLIC, $virtualMethod(IntegerSyntax, getValue, int32_t)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(IntegerSyntax, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(IntegerSyntax, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.print.attribute.IntegerSyntax",
		"java.lang.Object",
		"java.io.Serializable,java.lang.Cloneable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IntegerSyntax, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(IntegerSyntax));
	});
	return class$;
}

$Class* IntegerSyntax::class$ = nullptr;

		} // attribute
	} // print
} // javax