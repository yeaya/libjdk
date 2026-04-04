#include <javax/sound/sampled/LineEvent$Type.h>
#include <javax/sound/sampled/LineEvent.h>
#include <jcpp.h>

#undef CLOSE
#undef OPEN
#undef START
#undef STOP

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace sound {
		namespace sampled {

LineEvent$Type* LineEvent$Type::OPEN = nullptr;
LineEvent$Type* LineEvent$Type::CLOSE = nullptr;
LineEvent$Type* LineEvent$Type::START = nullptr;
LineEvent$Type* LineEvent$Type::STOP = nullptr;

void LineEvent$Type::init$($String* name) {
	$set(this, name, name);
}

bool LineEvent$Type::equals(Object$* obj) {
	return $Object::equals(obj);
}

int32_t LineEvent$Type::hashCode() {
	return $Object::hashCode();
}

$String* LineEvent$Type::toString() {
	return this->name;
}

void LineEvent$Type::clinit$($Class* clazz) {
	$assignStatic(LineEvent$Type::OPEN, $new(LineEvent$Type, "Open"_s));
	$assignStatic(LineEvent$Type::CLOSE, $new(LineEvent$Type, "Close"_s));
	$assignStatic(LineEvent$Type::START, $new(LineEvent$Type, "Start"_s));
	$assignStatic(LineEvent$Type::STOP, $new(LineEvent$Type, "Stop"_s));
}

LineEvent$Type::LineEvent$Type() {
}

$Class* LineEvent$Type::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(LineEvent$Type, name)},
		{"OPEN", "Ljavax/sound/sampled/LineEvent$Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LineEvent$Type, OPEN)},
		{"CLOSE", "Ljavax/sound/sampled/LineEvent$Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LineEvent$Type, CLOSE)},
		{"START", "Ljavax/sound/sampled/LineEvent$Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LineEvent$Type, START)},
		{"STOP", "Ljavax/sound/sampled/LineEvent$Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LineEvent$Type, STOP)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(LineEvent$Type, init$, void, $String*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(LineEvent$Type, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(LineEvent$Type, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LineEvent$Type, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.sound.sampled.LineEvent$Type", "javax.sound.sampled.LineEvent", "Type", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.sound.sampled.LineEvent$Type",
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
		"javax.sound.sampled.LineEvent"
	};
	$loadClass(LineEvent$Type, name, initialize, &classInfo$$, LineEvent$Type::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(LineEvent$Type);
	});
	return class$;
}

$Class* LineEvent$Type::class$ = nullptr;

		} // sampled
	} // sound
} // javax