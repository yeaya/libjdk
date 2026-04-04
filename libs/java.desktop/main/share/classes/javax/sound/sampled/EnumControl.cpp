#include <javax/sound/sampled/EnumControl.h>
#include <javax/sound/sampled/Control.h>
#include <javax/sound/sampled/EnumControl$Type.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Control = ::javax::sound::sampled::Control;
using $EnumControl$Type = ::javax::sound::sampled::EnumControl$Type;

namespace javax {
	namespace sound {
		namespace sampled {

void EnumControl::init$($EnumControl$Type* type, $ObjectArray* values, Object$* value) {
	$Control::init$(type);
	$set(this, values, values);
	$set(this, value, value);
}

void EnumControl::setValue(Object$* value) {
	if (!isValueSupported(value)) {
		$throwNew($IllegalArgumentException, $$str({"Requested value "_s, value, " is not supported."_s}));
	}
	$set(this, value, value);
}

$Object* EnumControl::getValue() {
	return this->value;
}

$ObjectArray* EnumControl::getValues() {
	return $cast($ObjectArray, $nc(this->values)->clone());
}

bool EnumControl::isValueSupported(Object$* value) {
	for (int32_t i = 0; i < $nc(this->values)->length; ++i) {
		if ($nc($of(value))->equals(this->values->get(i))) {
			return true;
		}
	}
	return false;
}

$String* EnumControl::toString() {
	$useLocalObjectStack();
	return $String::format("%s with current value: %s"_s, $$new($ObjectArray, {
		$($Control::toString()),
		$(getValue())
	}));
}

EnumControl::EnumControl() {
}

$Class* EnumControl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"values", "[Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(EnumControl, values)},
		{"value", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(EnumControl, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/sound/sampled/EnumControl$Type;[Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PROTECTED, $method(EnumControl, init$, void, $EnumControl$Type*, $ObjectArray*, Object$*)},
		{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(EnumControl, getValue, $Object*)},
		{"getValues", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(EnumControl, getValues, $ObjectArray*)},
		{"isValueSupported", "(Ljava/lang/Object;)Z", nullptr, $PRIVATE, $method(EnumControl, isValueSupported, bool, Object$*)},
		{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(EnumControl, setValue, void, Object$*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EnumControl, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.sound.sampled.EnumControl$Type", "javax.sound.sampled.EnumControl", "Type", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.sound.sampled.EnumControl",
		"javax.sound.sampled.Control",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.sound.sampled.EnumControl$Type"
	};
	$loadClass(EnumControl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EnumControl);
	});
	return class$;
}

$Class* EnumControl::class$ = nullptr;

		} // sampled
	} // sound
} // javax