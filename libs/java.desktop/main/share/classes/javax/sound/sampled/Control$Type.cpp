#include <javax/sound/sampled/Control$Type.h>
#include <javax/sound/sampled/Control.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace sound {
		namespace sampled {

void Control$Type::init$($String* name) {
	$set(this, name, name);
}

bool Control$Type::equals(Object$* obj) {
	return $Object::equals(obj);
}

int32_t Control$Type::hashCode() {
	return $Object::hashCode();
}

$String* Control$Type::toString() {
	return this->name;
}

Control$Type::Control$Type() {
}

$Class* Control$Type::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Control$Type, name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(Control$Type, init$, void, $String*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(Control$Type, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(Control$Type, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(Control$Type, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.sound.sampled.Control$Type", "javax.sound.sampled.Control", "Type", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.sound.sampled.Control$Type",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.sound.sampled.Control"
	};
	$loadClass(Control$Type, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Control$Type);
	});
	return class$;
}

$Class* Control$Type::class$ = nullptr;

		} // sampled
	} // sound
} // javax