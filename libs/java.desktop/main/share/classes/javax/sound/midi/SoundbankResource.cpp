#include <javax/sound/midi/SoundbankResource.h>
#include <javax/sound/midi/Soundbank.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Soundbank = ::javax::sound::midi::Soundbank;

namespace javax {
	namespace sound {
		namespace midi {

void SoundbankResource::init$($Soundbank* soundBank, $String* name, $Class* dataClass) {
	$set(this, soundBank, soundBank);
	$set(this, name, name);
	$set(this, dataClass, dataClass);
}

$Soundbank* SoundbankResource::getSoundbank() {
	return this->soundBank;
}

$String* SoundbankResource::getName() {
	return this->name;
}

$Class* SoundbankResource::getDataClass() {
	return this->dataClass;
}

SoundbankResource::SoundbankResource() {
}

$Class* SoundbankResource::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"soundBank", "Ljavax/sound/midi/Soundbank;", nullptr, $PRIVATE | $FINAL, $field(SoundbankResource, soundBank)},
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(SoundbankResource, name)},
		{"dataClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(SoundbankResource, dataClass)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/sound/midi/Soundbank;Ljava/lang/String;Ljava/lang/Class;)V", "(Ljavax/sound/midi/Soundbank;Ljava/lang/String;Ljava/lang/Class<*>;)V", $PROTECTED, $method(SoundbankResource, init$, void, $Soundbank*, $String*, $Class*)},
		{"getData", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SoundbankResource, getData, $Object*)},
		{"getDataClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(SoundbankResource, getDataClass, $Class*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SoundbankResource, getName, $String*)},
		{"getSoundbank", "()Ljavax/sound/midi/Soundbank;", nullptr, $PUBLIC, $virtualMethod(SoundbankResource, getSoundbank, $Soundbank*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.sound.midi.SoundbankResource",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SoundbankResource, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoundbankResource);
	});
	return class$;
}

$Class* SoundbankResource::class$ = nullptr;

		} // midi
	} // sound
} // javax