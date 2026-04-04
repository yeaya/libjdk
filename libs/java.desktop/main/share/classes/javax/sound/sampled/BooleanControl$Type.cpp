#include <javax/sound/sampled/BooleanControl$Type.h>
#include <javax/sound/sampled/BooleanControl.h>
#include <javax/sound/sampled/Control$Type.h>
#include <jcpp.h>

#undef APPLY_REVERB
#undef MUTE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Control$Type = ::javax::sound::sampled::Control$Type;

namespace javax {
	namespace sound {
		namespace sampled {

BooleanControl$Type* BooleanControl$Type::MUTE = nullptr;
BooleanControl$Type* BooleanControl$Type::APPLY_REVERB = nullptr;

void BooleanControl$Type::init$($String* name) {
	$Control$Type::init$(name);
}

void BooleanControl$Type::clinit$($Class* clazz) {
	$assignStatic(BooleanControl$Type::MUTE, $new(BooleanControl$Type, "Mute"_s));
	$assignStatic(BooleanControl$Type::APPLY_REVERB, $new(BooleanControl$Type, "Apply Reverb"_s));
}

BooleanControl$Type::BooleanControl$Type() {
}

$Class* BooleanControl$Type::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"MUTE", "Ljavax/sound/sampled/BooleanControl$Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BooleanControl$Type, MUTE)},
		{"APPLY_REVERB", "Ljavax/sound/sampled/BooleanControl$Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BooleanControl$Type, APPLY_REVERB)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(BooleanControl$Type, init$, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.sound.sampled.BooleanControl$Type", "javax.sound.sampled.BooleanControl", "Type", $PUBLIC | $STATIC},
		{"javax.sound.sampled.Control$Type", "javax.sound.sampled.Control", "Type", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.sound.sampled.BooleanControl$Type",
		"javax.sound.sampled.Control$Type",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.sound.sampled.BooleanControl"
	};
	$loadClass(BooleanControl$Type, name, initialize, &classInfo$$, BooleanControl$Type::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BooleanControl$Type);
	});
	return class$;
}

$Class* BooleanControl$Type::class$ = nullptr;

		} // sampled
	} // sound
} // javax