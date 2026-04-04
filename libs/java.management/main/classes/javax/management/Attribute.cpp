#include <javax/management/Attribute.h>
#include <javax/management/RuntimeOperationsException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeOperationsException = ::javax::management::RuntimeOperationsException;

namespace javax {
	namespace management {

void Attribute::init$($String* name, Object$* value) {
	$set(this, value, nullptr);
	if (name == nullptr) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException, "Attribute name cannot be null "_s));
	}
	$set(this, name, name);
	$set(this, value, value);
}

$String* Attribute::getName() {
	return this->name;
}

$Object* Attribute::getValue() {
	return this->value;
}

bool Attribute::equals(Object$* object) {
	$useLocalObjectStack();
	if (!($instanceOf(Attribute, object))) {
		return false;
	}
	$var(Attribute, val, $cast(Attribute, object));
	if (this->value == nullptr) {
		if ($nc(val)->getValue() == nullptr) {
			return $nc(this->name)->equals($(val->getName()));
		} else {
			return false;
		}
	}
	bool var$0 = $nc(this->name)->equals($($nc(val)->getName()));
	return (var$0 && ($nc(this->value)->equals($(val->getValue()))));
}

int32_t Attribute::hashCode() {
	int32_t var$0 = $nc(this->name)->hashCode();
	return var$0 ^ (this->value == nullptr ? 0 : this->value->hashCode());
}

$String* Attribute::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($(getName()));
	var$0->append(" = "_s);
	var$0->append($(getValue()));
	return $str(var$0);
}

Attribute::Attribute() {
}

$Class* Attribute::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Attribute, serialVersionUID)},
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Attribute, name)},
		{"value", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(Attribute, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(Attribute, init$, void, $String*, Object$*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Attribute, equals, bool, Object$*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Attribute, getName, $String*)},
		{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Attribute, getValue, $Object*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Attribute, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Attribute, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.Attribute",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Attribute, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Attribute);
	});
	return class$;
}

$Class* Attribute::class$ = nullptr;

	} // management
} // javax