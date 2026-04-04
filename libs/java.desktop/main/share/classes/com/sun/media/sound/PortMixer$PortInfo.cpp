#include <com/sun/media/sound/PortMixer$PortInfo.h>
#include <com/sun/media/sound/PortMixer.h>
#include <javax/sound/sampled/Port$Info.h>
#include <javax/sound/sampled/Port.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Port = ::javax::sound::sampled::Port;
using $Port$Info = ::javax::sound::sampled::Port$Info;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void PortMixer$PortInfo::init$($String* name, bool isSource) {
	$load($Port);
	$Port$Info::init$($Port::class$, name, isSource);
}

PortMixer$PortInfo::PortMixer$PortInfo() {
}

$Class* PortMixer$PortInfo::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PRIVATE, $method(PortMixer$PortInfo, init$, void, $String*, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.PortMixer$PortInfo", "com.sun.media.sound.PortMixer", "PortInfo", $PRIVATE | $STATIC | $FINAL},
		{"javax.sound.sampled.Port$Info", "javax.sound.sampled.Port", "Info", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.media.sound.PortMixer$PortInfo",
		"javax.sound.sampled.Port$Info",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.media.sound.PortMixer"
	};
	$loadClass(PortMixer$PortInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PortMixer$PortInfo);
	});
	return class$;
}

$Class* PortMixer$PortInfo::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com