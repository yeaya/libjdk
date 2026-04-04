#include <com/sun/media/sound/RealTimeSequencerProvider.h>
#include <com/sun/media/sound/AbstractMidiDevice.h>
#include <com/sun/media/sound/MidiUtils.h>
#include <com/sun/media/sound/RealTimeSequencer.h>
#include <java/util/Objects.h>
#include <javax/sound/midi/MidiDevice$Info.h>
#include <javax/sound/midi/MidiDevice.h>
#include <javax/sound/midi/spi/MidiDeviceProvider.h>
#include <jcpp.h>

using $MidiDevice$InfoArray = $Array<::javax::sound::midi::MidiDevice$Info>;
using $AbstractMidiDevice = ::com::sun::media::sound::AbstractMidiDevice;
using $MidiUtils = ::com::sun::media::sound::MidiUtils;
using $RealTimeSequencer = ::com::sun::media::sound::RealTimeSequencer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $MidiDevice = ::javax::sound::midi::MidiDevice;
using $MidiDevice$Info = ::javax::sound::midi::MidiDevice$Info;
using $MidiDeviceProvider = ::javax::sound::midi::spi::MidiDeviceProvider;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void RealTimeSequencerProvider::init$() {
	$MidiDeviceProvider::init$();
}

$MidiDevice$InfoArray* RealTimeSequencerProvider::getDeviceInfo() {
	$init($RealTimeSequencer);
	return $new($MidiDevice$InfoArray, {$RealTimeSequencer::info});
}

$MidiDevice* RealTimeSequencerProvider::getDevice($MidiDevice$Info* info) {
	$Objects::requireNonNull(info);
	$init($RealTimeSequencer);
	if ($nc($RealTimeSequencer::info)->equals(info)) {
		return $cast($AbstractMidiDevice, $new($RealTimeSequencer));
	}
	$throw($($MidiUtils::unsupportedDevice(info)));
}

RealTimeSequencerProvider::RealTimeSequencerProvider() {
}

$Class* RealTimeSequencerProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RealTimeSequencerProvider, init$, void)},
		{"getDevice", "(Ljavax/sound/midi/MidiDevice$Info;)Ljavax/sound/midi/MidiDevice;", nullptr, $PUBLIC, $virtualMethod(RealTimeSequencerProvider, getDevice, $MidiDevice*, $MidiDevice$Info*)},
		{"getDeviceInfo", "()[Ljavax/sound/midi/MidiDevice$Info;", nullptr, $PUBLIC, $virtualMethod(RealTimeSequencerProvider, getDeviceInfo, $MidiDevice$InfoArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.media.sound.RealTimeSequencerProvider",
		"javax.sound.midi.spi.MidiDeviceProvider",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(RealTimeSequencerProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RealTimeSequencerProvider);
	});
	return class$;
}

$Class* RealTimeSequencerProvider::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com