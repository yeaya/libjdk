#include <javax/sound/midi/MidiDevice$Info.h>
#include <javax/sound/midi/MidiDevice.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace sound {
		namespace midi {

void MidiDevice$Info::init$($String* name, $String* vendor, $String* description, $String* version) {
	$set(this, name, name);
	$set(this, vendor, vendor);
	$set(this, description, description);
	$set(this, version, version);
}

bool MidiDevice$Info::equals(Object$* obj) {
	return $Object::equals(obj);
}

int32_t MidiDevice$Info::hashCode() {
	return $Object::hashCode();
}

$String* MidiDevice$Info::getName() {
	return this->name;
}

$String* MidiDevice$Info::getVendor() {
	return this->vendor;
}

$String* MidiDevice$Info::getDescription() {
	return this->description;
}

$String* MidiDevice$Info::getVersion() {
	return this->version;
}

$String* MidiDevice$Info::toString() {
	return this->name;
}

MidiDevice$Info::MidiDevice$Info() {
}

$Class* MidiDevice$Info::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MidiDevice$Info, name)},
		{"vendor", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MidiDevice$Info, vendor)},
		{"description", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MidiDevice$Info, description)},
		{"version", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MidiDevice$Info, version)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(MidiDevice$Info, init$, void, $String*, $String*, $String*, $String*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(MidiDevice$Info, equals, bool, Object$*)},
		{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(MidiDevice$Info, getDescription, $String*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(MidiDevice$Info, getName, $String*)},
		{"getVendor", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(MidiDevice$Info, getVendor, $String*)},
		{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(MidiDevice$Info, getVersion, $String*)},
		{"hashCode", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(MidiDevice$Info, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(MidiDevice$Info, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.sound.midi.MidiDevice$Info", "javax.sound.midi.MidiDevice", "Info", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.sound.midi.MidiDevice$Info",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.sound.midi.MidiDevice"
	};
	$loadClass(MidiDevice$Info, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MidiDevice$Info);
	});
	return class$;
}

$Class* MidiDevice$Info::class$ = nullptr;

		} // midi
	} // sound
} // javax