#include <javax/sound/sampled/Port$Info.h>
#include <javax/sound/sampled/Line$Info.h>
#include <javax/sound/sampled/Port.h>
#include <jcpp.h>

#undef COMPACT_DISC
#undef HEADPHONE
#undef LINE_IN
#undef LINE_OUT
#undef MICROPHONE
#undef SPEAKER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Line$Info = ::javax::sound::sampled::Line$Info;
using $Port = ::javax::sound::sampled::Port;

namespace javax {
	namespace sound {
		namespace sampled {

Port$Info* Port$Info::MICROPHONE = nullptr;
Port$Info* Port$Info::LINE_IN = nullptr;
Port$Info* Port$Info::COMPACT_DISC = nullptr;
Port$Info* Port$Info::SPEAKER = nullptr;
Port$Info* Port$Info::HEADPHONE = nullptr;
Port$Info* Port$Info::LINE_OUT = nullptr;

void Port$Info::init$($Class* lineClass, $String* name, bool isSource) {
	$Line$Info::init$(lineClass);
	$set(this, name, name);
	this->isSource$ = isSource;
}

$String* Port$Info::getName() {
	return this->name;
}

bool Port$Info::isSource() {
	return this->isSource$;
}

bool Port$Info::matches($Line$Info* info) {
	if (!($Line$Info::matches(info))) {
		return false;
	}
	if (!($nc(this->name)->equals($($nc($cast(Port$Info, info))->getName())))) {
		return false;
	}
	if (!(this->isSource$ == $cast(Port$Info, info)->isSource())) {
		return false;
	}
	return true;
}

bool Port$Info::equals(Object$* obj) {
	return $Line$Info::equals(obj);
}

int32_t Port$Info::hashCode() {
	return $Line$Info::hashCode();
}

$String* Port$Info::toString() {
	$useLocalObjectStack();
	return $String::format("%s %s port"_s, $$new($ObjectArray, {
		$(getName()),
		isSource() ? "source"_s : "target"_s
	}));
}

void Port$Info::clinit$($Class* clazz) {
	$load($Port);
	$assignStatic(Port$Info::MICROPHONE, $new(Port$Info, $Port::class$, "MICROPHONE"_s, true));
	$assignStatic(Port$Info::LINE_IN, $new(Port$Info, $Port::class$, "LINE_IN"_s, true));
	$assignStatic(Port$Info::COMPACT_DISC, $new(Port$Info, $Port::class$, "COMPACT_DISC"_s, true));
	$assignStatic(Port$Info::SPEAKER, $new(Port$Info, $Port::class$, "SPEAKER"_s, false));
	$assignStatic(Port$Info::HEADPHONE, $new(Port$Info, $Port::class$, "HEADPHONE"_s, false));
	$assignStatic(Port$Info::LINE_OUT, $new(Port$Info, $Port::class$, "LINE_OUT"_s, false));
}

Port$Info::Port$Info() {
}

$Class* Port$Info::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"MICROPHONE", "Ljavax/sound/sampled/Port$Info;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Port$Info, MICROPHONE)},
		{"LINE_IN", "Ljavax/sound/sampled/Port$Info;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Port$Info, LINE_IN)},
		{"COMPACT_DISC", "Ljavax/sound/sampled/Port$Info;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Port$Info, COMPACT_DISC)},
		{"SPEAKER", "Ljavax/sound/sampled/Port$Info;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Port$Info, SPEAKER)},
		{"HEADPHONE", "Ljavax/sound/sampled/Port$Info;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Port$Info, HEADPHONE)},
		{"LINE_OUT", "Ljavax/sound/sampled/Port$Info;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Port$Info, LINE_OUT)},
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Port$Info, name)},
		{"isSource", "Z", nullptr, $PRIVATE | $FINAL, $field(Port$Info, isSource$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;Ljava/lang/String;Z)V", "(Ljava/lang/Class<*>;Ljava/lang/String;Z)V", $PUBLIC, $method(Port$Info, init$, void, $Class*, $String*, bool)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(Port$Info, equals, bool, Object$*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Port$Info, getName, $String*)},
		{"hashCode", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(Port$Info, hashCode, int32_t)},
		{"isSource", "()Z", nullptr, $PUBLIC, $virtualMethod(Port$Info, isSource, bool)},
		{"matches", "(Ljavax/sound/sampled/Line$Info;)Z", nullptr, $PUBLIC, $virtualMethod(Port$Info, matches, bool, $Line$Info*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(Port$Info, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.sound.sampled.Port$Info", "javax.sound.sampled.Port", "Info", $PUBLIC | $STATIC},
		{"javax.sound.sampled.Line$Info", "javax.sound.sampled.Line", "Info", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.sound.sampled.Port$Info",
		"javax.sound.sampled.Line$Info",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.sound.sampled.Port"
	};
	$loadClass(Port$Info, name, initialize, &classInfo$$, Port$Info::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Port$Info);
	});
	return class$;
}

$Class* Port$Info::class$ = nullptr;

		} // sampled
	} // sound
} // javax