#include <javax/sound/sampled/CompoundControl$Type.h>
#include <javax/sound/sampled/CompoundControl.h>
#include <javax/sound/sampled/Control$Type.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Control$Type = ::javax::sound::sampled::Control$Type;

namespace javax {
	namespace sound {
		namespace sampled {

void CompoundControl$Type::init$($String* name) {
	$Control$Type::init$(name);
}

CompoundControl$Type::CompoundControl$Type() {
}

$Class* CompoundControl$Type::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(CompoundControl$Type, init$, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.sound.sampled.CompoundControl$Type", "javax.sound.sampled.CompoundControl", "Type", $PUBLIC | $STATIC},
		{"javax.sound.sampled.Control$Type", "javax.sound.sampled.Control", "Type", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.sound.sampled.CompoundControl$Type",
		"javax.sound.sampled.Control$Type",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.sound.sampled.CompoundControl"
	};
	$loadClass(CompoundControl$Type, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CompoundControl$Type);
	});
	return class$;
}

$Class* CompoundControl$Type::class$ = nullptr;

		} // sampled
	} // sound
} // javax