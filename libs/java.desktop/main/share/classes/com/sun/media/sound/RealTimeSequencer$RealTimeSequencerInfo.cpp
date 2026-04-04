#include <com/sun/media/sound/RealTimeSequencer$RealTimeSequencerInfo.h>
#include <com/sun/media/sound/RealTimeSequencer.h>
#include <javax/sound/midi/MidiDevice$Info.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MidiDevice$Info = ::javax::sound::midi::MidiDevice$Info;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$String* RealTimeSequencer$RealTimeSequencerInfo::name = nullptr;
$String* RealTimeSequencer$RealTimeSequencerInfo::vendor = nullptr;
$String* RealTimeSequencer$RealTimeSequencerInfo::description = nullptr;
$String* RealTimeSequencer$RealTimeSequencerInfo::version = nullptr;

void RealTimeSequencer$RealTimeSequencerInfo::init$() {
	$MidiDevice$Info::init$(RealTimeSequencer$RealTimeSequencerInfo::name, RealTimeSequencer$RealTimeSequencerInfo::vendor, RealTimeSequencer$RealTimeSequencerInfo::description, RealTimeSequencer$RealTimeSequencerInfo::version);
}

RealTimeSequencer$RealTimeSequencerInfo::RealTimeSequencer$RealTimeSequencerInfo() {
}

void RealTimeSequencer$RealTimeSequencerInfo::clinit$($Class* clazz) {
	$assignStatic(RealTimeSequencer$RealTimeSequencerInfo::name, "Real Time Sequencer"_s);
	$assignStatic(RealTimeSequencer$RealTimeSequencerInfo::vendor, "Oracle Corporation"_s);
	$assignStatic(RealTimeSequencer$RealTimeSequencerInfo::description, "Software sequencer"_s);
	$assignStatic(RealTimeSequencer$RealTimeSequencerInfo::version, "Version 1.0"_s);
}

$Class* RealTimeSequencer$RealTimeSequencerInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RealTimeSequencer$RealTimeSequencerInfo, name)},
		{"vendor", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RealTimeSequencer$RealTimeSequencerInfo, vendor)},
		{"description", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RealTimeSequencer$RealTimeSequencerInfo, description)},
		{"version", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RealTimeSequencer$RealTimeSequencerInfo, version)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(RealTimeSequencer$RealTimeSequencerInfo, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.RealTimeSequencer$RealTimeSequencerInfo", "com.sun.media.sound.RealTimeSequencer", "RealTimeSequencerInfo", $PRIVATE | $STATIC},
		{"javax.sound.midi.MidiDevice$Info", "javax.sound.midi.MidiDevice", "Info", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.RealTimeSequencer$RealTimeSequencerInfo",
		"javax.sound.midi.MidiDevice$Info",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.media.sound.RealTimeSequencer"
	};
	$loadClass(RealTimeSequencer$RealTimeSequencerInfo, name, initialize, &classInfo$$, RealTimeSequencer$RealTimeSequencerInfo::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(RealTimeSequencer$RealTimeSequencerInfo);
	});
	return class$;
}

$Class* RealTimeSequencer$RealTimeSequencerInfo::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com