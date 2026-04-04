#include <javax/sound/sampled/BooleanControl.h>
#include <javax/sound/sampled/BooleanControl$Type.h>
#include <javax/sound/sampled/Control.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BooleanControl$Type = ::javax::sound::sampled::BooleanControl$Type;
using $Control = ::javax::sound::sampled::Control;

namespace javax {
	namespace sound {
		namespace sampled {

void BooleanControl::init$($BooleanControl$Type* type, bool initialValue, $String* trueStateLabel, $String* falseStateLabel) {
	$Control::init$(type);
	this->value = initialValue;
	$set(this, trueStateLabel, trueStateLabel);
	$set(this, falseStateLabel, falseStateLabel);
}

void BooleanControl::init$($BooleanControl$Type* type, bool initialValue) {
	BooleanControl::init$(type, initialValue, "true"_s, "false"_s);
}

void BooleanControl::setValue(bool value) {
	this->value = value;
}

bool BooleanControl::getValue() {
	return this->value;
}

$String* BooleanControl::getStateLabel(bool state) {
	return ((state == true) ? this->trueStateLabel : this->falseStateLabel);
}

$String* BooleanControl::toString() {
	$useLocalObjectStack();
	return $String::format("%s with current value: %s"_s, $$new($ObjectArray, {
		$($Control::toString()),
		$(getStateLabel(getValue()))
	}));
}

BooleanControl::BooleanControl() {
}

$Class* BooleanControl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"trueStateLabel", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(BooleanControl, trueStateLabel)},
		{"falseStateLabel", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(BooleanControl, falseStateLabel)},
		{"value", "Z", nullptr, $PRIVATE, $field(BooleanControl, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/sound/sampled/BooleanControl$Type;ZLjava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(BooleanControl, init$, void, $BooleanControl$Type*, bool, $String*, $String*)},
		{"<init>", "(Ljavax/sound/sampled/BooleanControl$Type;Z)V", nullptr, $PROTECTED, $method(BooleanControl, init$, void, $BooleanControl$Type*, bool)},
		{"getStateLabel", "(Z)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BooleanControl, getStateLabel, $String*, bool)},
		{"getValue", "()Z", nullptr, $PUBLIC, $virtualMethod(BooleanControl, getValue, bool)},
		{"setValue", "(Z)V", nullptr, $PUBLIC, $virtualMethod(BooleanControl, setValue, void, bool)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BooleanControl, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.sound.sampled.BooleanControl$Type", "javax.sound.sampled.BooleanControl", "Type", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.sound.sampled.BooleanControl",
		"javax.sound.sampled.Control",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.sound.sampled.BooleanControl$Type"
	};
	$loadClass(BooleanControl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BooleanControl);
	});
	return class$;
}

$Class* BooleanControl::class$ = nullptr;

		} // sampled
	} // sound
} // javax