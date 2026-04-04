#include <javax/sound/sampled/CompoundControl.h>
#include <java/lang/CharSequence.h>
#include <java/util/StringJoiner.h>
#include <javax/sound/sampled/CompoundControl$Type.h>
#include <javax/sound/sampled/Control$Type.h>
#include <javax/sound/sampled/Control.h>
#include <jcpp.h>

using $ControlArray = $Array<::javax::sound::sampled::Control>;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringJoiner = ::java::util::StringJoiner;
using $CompoundControl$Type = ::javax::sound::sampled::CompoundControl$Type;
using $Control = ::javax::sound::sampled::Control;

namespace javax {
	namespace sound {
		namespace sampled {

void CompoundControl::init$($CompoundControl$Type* type, $ControlArray* memberControls) {
	$Control::init$(type);
	$set(this, controls, memberControls);
}

$ControlArray* CompoundControl::getMemberControls() {
	return $cast($ControlArray, $nc(this->controls)->clone());
}

$String* CompoundControl::toString() {
	$useLocalObjectStack();
	$var($StringJoiner, controls, $new($StringJoiner, ", "_s, "["_s, "]"_s));
	{
		$var($ControlArray, arr$, getMemberControls());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Control, control, arr$->get(i$));
			{
				controls->add($($$nc($nc(control)->getType())->toString()));
			}
		}
	}
	return $String::format("%s containing %s controls"_s, $$new($ObjectArray, {
		$($Control::toString()),
		controls
	}));
}

CompoundControl::CompoundControl() {
}

$Class* CompoundControl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"controls", "[Ljavax/sound/sampled/Control;", nullptr, $PRIVATE | $FINAL, $field(CompoundControl, controls)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/sound/sampled/CompoundControl$Type;[Ljavax/sound/sampled/Control;)V", nullptr, $PROTECTED, $method(CompoundControl, init$, void, $CompoundControl$Type*, $ControlArray*)},
		{"getMemberControls", "()[Ljavax/sound/sampled/Control;", nullptr, $PUBLIC, $virtualMethod(CompoundControl, getMemberControls, $ControlArray*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CompoundControl, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.sound.sampled.CompoundControl$Type", "javax.sound.sampled.CompoundControl", "Type", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.sound.sampled.CompoundControl",
		"javax.sound.sampled.Control",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.sound.sampled.CompoundControl$Type"
	};
	$loadClass(CompoundControl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CompoundControl);
	});
	return class$;
}

$Class* CompoundControl::class$ = nullptr;

		} // sampled
	} // sound
} // javax