#include <com/sun/media/sound/DirectAudioDeviceProvider$DirectAudioDeviceInfo.h>
#include <com/sun/media/sound/DirectAudioDeviceProvider.h>
#include <javax/sound/sampled/Mixer$Info.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Mixer$Info = ::javax::sound::sampled::Mixer$Info;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void DirectAudioDeviceProvider$DirectAudioDeviceInfo::init$(int32_t index, int32_t deviceID, int32_t maxSimulLines, $String* name, $String* vendor, $String* description, $String* version) {
	$Mixer$Info::init$(name, vendor, $$str({"Direct Audio Device: "_s, description}), version);
	this->index = index;
	this->maxSimulLines = maxSimulLines;
	this->deviceID = deviceID;
}

int32_t DirectAudioDeviceProvider$DirectAudioDeviceInfo::getIndex() {
	return this->index;
}

int32_t DirectAudioDeviceProvider$DirectAudioDeviceInfo::getMaxSimulLines() {
	return this->maxSimulLines;
}

int32_t DirectAudioDeviceProvider$DirectAudioDeviceInfo::getDeviceID() {
	return this->deviceID;
}

DirectAudioDeviceProvider$DirectAudioDeviceInfo::DirectAudioDeviceProvider$DirectAudioDeviceInfo() {
}

$Class* DirectAudioDeviceProvider$DirectAudioDeviceInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"index", "I", nullptr, $PRIVATE | $FINAL, $field(DirectAudioDeviceProvider$DirectAudioDeviceInfo, index)},
		{"maxSimulLines", "I", nullptr, $PRIVATE | $FINAL, $field(DirectAudioDeviceProvider$DirectAudioDeviceInfo, maxSimulLines)},
		{"deviceID", "I", nullptr, $PRIVATE | $FINAL, $field(DirectAudioDeviceProvider$DirectAudioDeviceInfo, deviceID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(IIILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(DirectAudioDeviceProvider$DirectAudioDeviceInfo, init$, void, int32_t, int32_t, int32_t, $String*, $String*, $String*, $String*)},
		{"getDeviceID", "()I", nullptr, 0, $method(DirectAudioDeviceProvider$DirectAudioDeviceInfo, getDeviceID, int32_t)},
		{"getIndex", "()I", nullptr, 0, $method(DirectAudioDeviceProvider$DirectAudioDeviceInfo, getIndex, int32_t)},
		{"getMaxSimulLines", "()I", nullptr, 0, $method(DirectAudioDeviceProvider$DirectAudioDeviceInfo, getMaxSimulLines, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.DirectAudioDeviceProvider$DirectAudioDeviceInfo", "com.sun.media.sound.DirectAudioDeviceProvider", "DirectAudioDeviceInfo", $STATIC | $FINAL},
		{"javax.sound.sampled.Mixer$Info", "javax.sound.sampled.Mixer", "Info", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.media.sound.DirectAudioDeviceProvider$DirectAudioDeviceInfo",
		"javax.sound.sampled.Mixer$Info",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.media.sound.DirectAudioDeviceProvider"
	};
	$loadClass(DirectAudioDeviceProvider$DirectAudioDeviceInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DirectAudioDeviceProvider$DirectAudioDeviceInfo);
	});
	return class$;
}

$Class* DirectAudioDeviceProvider$DirectAudioDeviceInfo::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com