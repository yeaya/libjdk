#include <com/sun/media/sound/PortMixerProvider$PortMixerInfo.h>
#include <com/sun/media/sound/PortMixerProvider.h>
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

void PortMixerProvider$PortMixerInfo::init$(int32_t index, $String* name, $String* vendor, $String* description, $String* version) {
	$Mixer$Info::init$($$str({"Port "_s, name}), vendor, description, version);
	this->index = index;
}

int32_t PortMixerProvider$PortMixerInfo::getIndex() {
	return this->index;
}

PortMixerProvider$PortMixerInfo::PortMixerProvider$PortMixerInfo() {
}

$Class* PortMixerProvider$PortMixerInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"index", "I", nullptr, $PRIVATE | $FINAL, $field(PortMixerProvider$PortMixerInfo, index)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(PortMixerProvider$PortMixerInfo, init$, void, int32_t, $String*, $String*, $String*, $String*)},
		{"getIndex", "()I", nullptr, 0, $method(PortMixerProvider$PortMixerInfo, getIndex, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.PortMixerProvider$PortMixerInfo", "com.sun.media.sound.PortMixerProvider", "PortMixerInfo", $STATIC | $FINAL},
		{"javax.sound.sampled.Mixer$Info", "javax.sound.sampled.Mixer", "Info", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.media.sound.PortMixerProvider$PortMixerInfo",
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
		"com.sun.media.sound.PortMixerProvider"
	};
	$loadClass(PortMixerProvider$PortMixerInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PortMixerProvider$PortMixerInfo);
	});
	return class$;
}

$Class* PortMixerProvider$PortMixerInfo::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com