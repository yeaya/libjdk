#include <javax/sound/midi/spi/MidiDeviceProvider.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Arrays.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <javax/sound/midi/MidiDevice$Info.h>
#include <javax/sound/midi/MidiDevice.h>
#include <jcpp.h>

using $MidiDevice$InfoArray = $Array<::javax::sound::midi::MidiDevice$Info>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Arrays = ::java::util::Arrays;
using $Predicate = ::java::util::function::Predicate;
using $MidiDevice = ::javax::sound::midi::MidiDevice;
using $MidiDevice$Info = ::javax::sound::midi::MidiDevice$Info;

namespace javax {
	namespace sound {
		namespace midi {
			namespace spi {

class MidiDeviceProvider$$Lambda$equals : public $Predicate {
	$class(MidiDeviceProvider$$Lambda$equals, $NO_CLASS_INIT, $Predicate)
public:
	void init$($MidiDevice$Info* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* obj) override {
		 return $nc(inst$)->equals(obj);
	}
	$MidiDevice$Info* inst$ = nullptr;
};
$Class* MidiDeviceProvider$$Lambda$equals::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(MidiDeviceProvider$$Lambda$equals, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/sound/midi/MidiDevice$Info;)V", nullptr, $PUBLIC, $method(MidiDeviceProvider$$Lambda$equals, init$, void, $MidiDevice$Info*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(MidiDeviceProvider$$Lambda$equals, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.sound.midi.spi.MidiDeviceProvider$$Lambda$equals",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MidiDeviceProvider$$Lambda$equals, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MidiDeviceProvider$$Lambda$equals);
	});
	return class$;
}
$Class* MidiDeviceProvider$$Lambda$equals::class$ = nullptr;

void MidiDeviceProvider::init$() {
}

bool MidiDeviceProvider::isDeviceSupported($MidiDevice$Info* info) {
	$useLocalObjectStack();
	return $$nc($Arrays::stream($(getDeviceInfo())))->anyMatch($$new(MidiDeviceProvider$$Lambda$equals, $nc(info)));
}

MidiDeviceProvider::MidiDeviceProvider() {
}

$Class* MidiDeviceProvider::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("javax.sound.midi.spi.MidiDeviceProvider$$Lambda$equals")) {
			return MidiDeviceProvider$$Lambda$equals::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(MidiDeviceProvider, init$, void)},
		{"getDevice", "(Ljavax/sound/midi/MidiDevice$Info;)Ljavax/sound/midi/MidiDevice;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiDeviceProvider, getDevice, $MidiDevice*, $MidiDevice$Info*)},
		{"getDeviceInfo", "()[Ljavax/sound/midi/MidiDevice$Info;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiDeviceProvider, getDeviceInfo, $MidiDevice$InfoArray*)},
		{"isDeviceSupported", "(Ljavax/sound/midi/MidiDevice$Info;)Z", nullptr, $PUBLIC, $virtualMethod(MidiDeviceProvider, isDeviceSupported, bool, $MidiDevice$Info*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.sound.midi.spi.MidiDeviceProvider",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MidiDeviceProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MidiDeviceProvider);
	});
	return class$;
}

$Class* MidiDeviceProvider::class$ = nullptr;

			} // spi
		} // midi
	} // sound
} // javax