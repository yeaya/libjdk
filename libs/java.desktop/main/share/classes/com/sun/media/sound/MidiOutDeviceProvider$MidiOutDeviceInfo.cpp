#include <com/sun/media/sound/MidiOutDeviceProvider$MidiOutDeviceInfo.h>
#include <com/sun/media/sound/AbstractMidiDeviceProvider$Info.h>
#include <com/sun/media/sound/MidiOutDeviceProvider.h>
#include <jcpp.h>

using $AbstractMidiDeviceProvider$Info = ::com::sun::media::sound::AbstractMidiDeviceProvider$Info;
using $MidiOutDeviceProvider = ::com::sun::media::sound::MidiOutDeviceProvider;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void MidiOutDeviceProvider$MidiOutDeviceInfo::init$(int32_t index, $Class* providerClass) {
	$useLocalObjectStack();
	$var($String, var$0, $MidiOutDeviceProvider::nGetName(index));
	$var($String, var$1, $MidiOutDeviceProvider::nGetVendor(index));
	$var($String, var$2, $MidiOutDeviceProvider::nGetDescription(index));
	$AbstractMidiDeviceProvider$Info::init$(var$0, var$1, var$2, $($MidiOutDeviceProvider::nGetVersion(index)), index);
	$set(this, providerClass, providerClass);
}

MidiOutDeviceProvider$MidiOutDeviceInfo::MidiOutDeviceProvider$MidiOutDeviceInfo() {
}

$Class* MidiOutDeviceProvider$MidiOutDeviceInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"providerClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(MidiOutDeviceProvider$MidiOutDeviceInfo, providerClass)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjava/lang/Class;)V", "(ILjava/lang/Class<*>;)V", $PRIVATE, $method(MidiOutDeviceProvider$MidiOutDeviceInfo, init$, void, int32_t, $Class*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.MidiOutDeviceProvider$MidiOutDeviceInfo", "com.sun.media.sound.MidiOutDeviceProvider", "MidiOutDeviceInfo", $STATIC | $FINAL},
		{"com.sun.media.sound.AbstractMidiDeviceProvider$Info", "com.sun.media.sound.AbstractMidiDeviceProvider", "Info", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.media.sound.MidiOutDeviceProvider$MidiOutDeviceInfo",
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
		"com.sun.media.sound.MidiOutDeviceProvider"
	};
	$loadClass(MidiOutDeviceProvider$MidiOutDeviceInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MidiOutDeviceProvider$MidiOutDeviceInfo);
	});
	return class$;
}

$Class* MidiOutDeviceProvider$MidiOutDeviceInfo::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com