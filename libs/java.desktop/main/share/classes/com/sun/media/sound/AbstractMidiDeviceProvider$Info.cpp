#include <com/sun/media/sound/AbstractMidiDeviceProvider$Info.h>

#include <com/sun/media/sound/AbstractMidiDeviceProvider.h>
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

$FieldInfo _AbstractMidiDeviceProvider$Info_FieldInfo_[] = {
	{"index", "I", nullptr, $PRIVATE, $field(AbstractMidiDeviceProvider$Info, index)},
	{}
};

$MethodInfo _AbstractMidiDeviceProvider$Info_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V", nullptr, 0, $method(AbstractMidiDeviceProvider$Info, init$, void, $String*, $String*, $String*, $String*, int32_t)},
	{"equalStrings", "(Lcom/sun/media/sound/AbstractMidiDeviceProvider$Info;)Z", nullptr, $FINAL, $method(AbstractMidiDeviceProvider$Info, equalStrings, bool, AbstractMidiDeviceProvider$Info*)},
	{"getIndex", "()I", nullptr, $FINAL, $method(AbstractMidiDeviceProvider$Info, getIndex, int32_t)},
	{"setIndex", "(I)V", nullptr, $FINAL, $method(AbstractMidiDeviceProvider$Info, setIndex, void, int32_t)},
	{}
};

$InnerClassInfo _AbstractMidiDeviceProvider$Info_InnerClassesInfo_[] = {
	{"com.sun.media.sound.AbstractMidiDeviceProvider$Info", "com.sun.media.sound.AbstractMidiDeviceProvider", "Info", $STATIC},
	{"javax.sound.midi.MidiDevice$Info", "javax.sound.midi.MidiDevice", "Info", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _AbstractMidiDeviceProvider$Info_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.AbstractMidiDeviceProvider$Info",
	"javax.sound.midi.MidiDevice$Info",
	nullptr,
	_AbstractMidiDeviceProvider$Info_FieldInfo_,
	_AbstractMidiDeviceProvider$Info_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractMidiDeviceProvider$Info_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.AbstractMidiDeviceProvider"
};

$Object* allocate$AbstractMidiDeviceProvider$Info($Class* clazz) {
	return $of($alloc(AbstractMidiDeviceProvider$Info));
}

void AbstractMidiDeviceProvider$Info::init$($String* name, $String* vendor, $String* description, $String* version, int32_t index) {
	$MidiDevice$Info::init$(name, vendor, description, version);
	this->index = index;
}

bool AbstractMidiDeviceProvider$Info::equalStrings(AbstractMidiDeviceProvider$Info* info) {
	$useLocalCurrentObjectStackCache();
	bool var$2 = info != nullptr && $nc($(getName()))->equals($(info->getName()));
	bool var$1 = var$2 && $nc($(getVendor()))->equals($(info->getVendor()));
	bool var$0 = var$1 && $nc($(getDescription()))->equals($(info->getDescription()));
	return (var$0 && $nc($(getVersion()))->equals($(info->getVersion())));
}

int32_t AbstractMidiDeviceProvider$Info::getIndex() {
	return this->index;
}

void AbstractMidiDeviceProvider$Info::setIndex(int32_t index) {
	this->index = index;
}

AbstractMidiDeviceProvider$Info::AbstractMidiDeviceProvider$Info() {
}

$Class* AbstractMidiDeviceProvider$Info::load$($String* name, bool initialize) {
	$loadClass(AbstractMidiDeviceProvider$Info, name, initialize, &_AbstractMidiDeviceProvider$Info_ClassInfo_, allocate$AbstractMidiDeviceProvider$Info);
	return class$;
}

$Class* AbstractMidiDeviceProvider$Info::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com