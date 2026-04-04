#include <javax/sound/sampled/LineEvent.h>
#include <java/util/EventObject.h>
#include <javax/sound/sampled/Line.h>
#include <javax/sound/sampled/LineEvent$Type.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $Line = ::javax::sound::sampled::Line;
using $LineEvent$Type = ::javax::sound::sampled::LineEvent$Type;

namespace javax {
	namespace sound {
		namespace sampled {

void LineEvent::init$($Line* line, $LineEvent$Type* type, int64_t position) {
	$EventObject::init$(line);
	$set(this, type, type);
	this->position = position;
}

$Line* LineEvent::getLine() {
	return $cast($Line, getSource());
}

$LineEvent$Type* LineEvent::getType() {
	return this->type;
}

int64_t LineEvent::getFramePosition() {
	return this->position;
}

$String* LineEvent::toString() {
	$useLocalObjectStack();
	return $String::format("%s event from line %s"_s, $$new($ObjectArray, {
		this->type,
		$(getLine())
	}));
}

LineEvent::LineEvent() {
}

$Class* LineEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LineEvent, serialVersionUID)},
		{"type", "Ljavax/sound/sampled/LineEvent$Type;", nullptr, $PRIVATE | $FINAL, $field(LineEvent, type)},
		{"position", "J", nullptr, $PRIVATE | $FINAL, $field(LineEvent, position)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/sound/sampled/Line;Ljavax/sound/sampled/LineEvent$Type;J)V", nullptr, $PUBLIC, $method(LineEvent, init$, void, $Line*, $LineEvent$Type*, int64_t)},
		{"getFramePosition", "()J", nullptr, $PUBLIC | $FINAL, $method(LineEvent, getFramePosition, int64_t)},
		{"getLine", "()Ljavax/sound/sampled/Line;", nullptr, $PUBLIC | $FINAL, $method(LineEvent, getLine, $Line*)},
		{"getType", "()Ljavax/sound/sampled/LineEvent$Type;", nullptr, $PUBLIC | $FINAL, $method(LineEvent, getType, $LineEvent$Type*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LineEvent, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.sound.sampled.LineEvent$Type", "javax.sound.sampled.LineEvent", "Type", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.sound.sampled.LineEvent",
		"java.util.EventObject",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.sound.sampled.LineEvent$Type"
	};
	$loadClass(LineEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LineEvent);
	});
	return class$;
}

$Class* LineEvent::class$ = nullptr;

		} // sampled
	} // sound
} // javax