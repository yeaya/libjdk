#include <javax/sound/sampled/EnumControl$Type.h>
#include <javax/sound/sampled/Control$Type.h>
#include <javax/sound/sampled/EnumControl.h>
#include <jcpp.h>

#undef REVERB

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Control$Type = ::javax::sound::sampled::Control$Type;

namespace javax {
	namespace sound {
		namespace sampled {

EnumControl$Type* EnumControl$Type::REVERB = nullptr;

void EnumControl$Type::init$($String* name) {
	$Control$Type::init$(name);
}

void EnumControl$Type::clinit$($Class* clazz) {
	$assignStatic(EnumControl$Type::REVERB, $new(EnumControl$Type, "Reverb"_s));
}

EnumControl$Type::EnumControl$Type() {
}

$Class* EnumControl$Type::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"REVERB", "Ljavax/sound/sampled/EnumControl$Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EnumControl$Type, REVERB)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(EnumControl$Type, init$, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.sound.sampled.EnumControl$Type", "javax.sound.sampled.EnumControl", "Type", $PUBLIC | $STATIC},
		{"javax.sound.sampled.Control$Type", "javax.sound.sampled.Control", "Type", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.sound.sampled.EnumControl$Type",
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
		"javax.sound.sampled.EnumControl"
	};
	$loadClass(EnumControl$Type, name, initialize, &classInfo$$, EnumControl$Type::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(EnumControl$Type);
	});
	return class$;
}

$Class* EnumControl$Type::class$ = nullptr;

		} // sampled
	} // sound
} // javax