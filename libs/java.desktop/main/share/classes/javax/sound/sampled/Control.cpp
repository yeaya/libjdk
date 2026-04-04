#include <javax/sound/sampled/Control.h>
#include <javax/sound/sampled/Control$Type.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Control$Type = ::javax::sound::sampled::Control$Type;

namespace javax {
	namespace sound {
		namespace sampled {

void Control::init$($Control$Type* type) {
	$set(this, type, type);
}

$Control$Type* Control::getType() {
	return this->type;
}

$String* Control::toString() {
	$useLocalObjectStack();
	return $String::format("%s control"_s, $$new($ObjectArray, {$(getType())}));
}

Control::Control() {
}

$Class* Control::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"type", "Ljavax/sound/sampled/Control$Type;", nullptr, $PRIVATE | $FINAL, $field(Control, type)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/sound/sampled/Control$Type;)V", nullptr, $PROTECTED, $method(Control, init$, void, $Control$Type*)},
		{"getType", "()Ljavax/sound/sampled/Control$Type;", nullptr, $PUBLIC, $virtualMethod(Control, getType, $Control$Type*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Control, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.sound.sampled.Control$Type", "javax.sound.sampled.Control", "Type", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.sound.sampled.Control",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.sound.sampled.Control$Type"
	};
	$loadClass(Control, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Control);
	});
	return class$;
}

$Class* Control::class$ = nullptr;

		} // sampled
	} // sound
} // javax