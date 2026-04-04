#include <com/sun/media/sound/MidiInDeviceProvider$MidiInDeviceInfo.h>
#include <com/sun/media/sound/AbstractMidiDeviceProvider$Info.h>
#include <com/sun/media/sound/MidiInDeviceProvider.h>
#include <jcpp.h>

using $AbstractMidiDeviceProvider$Info = ::com::sun::media::sound::AbstractMidiDeviceProvider$Info;
using $MidiInDeviceProvider = ::com::sun::media::sound::MidiInDeviceProvider;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void MidiInDeviceProvider$MidiInDeviceInfo::init$(int32_t index, $Class* providerClass) {
	$useLocalObjectStack();
	$var($String, var$0, $MidiInDeviceProvider::nGetName(index));
	$var($String, var$1, $MidiInDeviceProvider::nGetVendor(index));
	$var($String, var$2, $MidiInDeviceProvider::nGetDescription(index));
	$AbstractMidiDeviceProvider$Info::init$(var$0, var$1, var$2, $($MidiInDeviceProvider::nGetVersion(index)), index);
	$set(this, providerClass, providerClass);
}

MidiInDeviceProvider$MidiInDeviceInfo::MidiInDeviceProvider$MidiInDeviceInfo() {
}

$Class* MidiInDeviceProvider$MidiInDeviceInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"providerClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(MidiInDeviceProvider$MidiInDeviceInfo, providerClass)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjava/lang/Class;)V", "(ILjava/lang/Class<*>;)V", $PRIVATE, $method(MidiInDeviceProvider$MidiInDeviceInfo, init$, void, int32_t, $Class*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.MidiInDeviceProvider$MidiInDeviceInfo", "com.sun.media.sound.MidiInDeviceProvider", "MidiInDeviceInfo", $STATIC | $FINAL},
		{"com.sun.media.sound.AbstractMidiDeviceProvider$Info", "com.sun.media.sound.AbstractMidiDeviceProvider", "Info", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.media.sound.MidiInDeviceProvider$MidiInDeviceInfo",
		"com.sun.media.sound.AbstractMidiDeviceProvider$Info",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.media.sound.MidiInDeviceProvider"
	};
	$loadClass(MidiInDeviceProvider$MidiInDeviceInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MidiInDeviceProvider$MidiInDeviceInfo);
	});
	return class$;
}

$Class* MidiInDeviceProvider$MidiInDeviceInfo::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com