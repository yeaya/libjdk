#include <javax/print/attribute/DateTimeSyntax.h>
#include <java/io/Serializable.h>
#include <java/util/Date.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Date = ::java::util::Date;

namespace javax {
	namespace print {
		namespace attribute {

$Object* DateTimeSyntax::clone() {
	 return this->$Serializable::clone();
}

void DateTimeSyntax::finalize() {
	this->$Serializable::finalize();
}

void DateTimeSyntax::init$($Date* value) {
	if (value == nullptr) {
		$throwNew($NullPointerException, "value is null"_s);
	}
	$set(this, value, value);
}

$Date* DateTimeSyntax::getValue() {
	return $new($Date, $nc(this->value)->getTime());
}

bool DateTimeSyntax::equals(Object$* object) {
	return (object != nullptr && $instanceOf(DateTimeSyntax, object) && $nc(this->value)->equals($cast(DateTimeSyntax, object)->value));
}

int32_t DateTimeSyntax::hashCode() {
	return $nc(this->value)->hashCode();
}

$String* DateTimeSyntax::toString() {
	return $str({""_s, this->value});
}

DateTimeSyntax::DateTimeSyntax() {
}

$Class* DateTimeSyntax::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DateTimeSyntax, serialVersionUID)},
		{"value", "Ljava/util/Date;", nullptr, $PRIVATE, $field(DateTimeSyntax, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"<init>", "(Ljava/util/Date;)V", nullptr, $PROTECTED, $method(DateTimeSyntax, init$, void, $Date*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(DateTimeSyntax, equals, bool, Object$*)},
		{"getValue", "()Ljava/util/Date;", nullptr, $PUBLIC, $virtualMethod(DateTimeSyntax, getValue, $Date*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(DateTimeSyntax, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DateTimeSyntax, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.print.attribute.DateTimeSyntax",
		"java.lang.Object",
		"java.io.Serializable,java.lang.Cloneable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DateTimeSyntax, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DateTimeSyntax));
	});
	return class$;
}

$Class* DateTimeSyntax::class$ = nullptr;

		} // attribute
	} // print
} // javax