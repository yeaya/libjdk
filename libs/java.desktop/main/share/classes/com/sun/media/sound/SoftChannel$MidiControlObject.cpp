#include <com/sun/media/sound/SoftChannel$MidiControlObject.h>
#include <com/sun/media/sound/SoftChannel.h>
#include <jcpp.h>

using $SoftChannel = ::com::sun::media::sound::SoftChannel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void SoftChannel$MidiControlObject::init$($SoftChannel* this$0) {
	$set(this, this$0, this$0);
	$set(this, pitch, this->this$0->co_midi_pitch);
	$set(this, channel_pressure, this->this$0->co_midi_channel_pressure);
	$set(this, poly_pressure, $new($doubles, 1));
}

$doubles* SoftChannel$MidiControlObject::get(int32_t instance, $String* name) {
	if (name == nullptr) {
		return nullptr;
	}
	if ($nc(name)->equals("pitch"_s)) {
		return this->pitch;
	}
	if (name->equals("channel_pressure"_s)) {
		return this->channel_pressure;
	}
	if (name->equals("poly_pressure"_s)) {
		return this->poly_pressure;
	}
	return nullptr;
}

SoftChannel$MidiControlObject::SoftChannel$MidiControlObject() {
}

$Class* SoftChannel$MidiControlObject::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/media/sound/SoftChannel;", nullptr, $FINAL | $SYNTHETIC, $field(SoftChannel$MidiControlObject, this$0)},
		{"pitch", "[D", nullptr, 0, $field(SoftChannel$MidiControlObject, pitch)},
		{"channel_pressure", "[D", nullptr, 0, $field(SoftChannel$MidiControlObject, channel_pressure)},
		{"poly_pressure", "[D", nullptr, 0, $field(SoftChannel$MidiControlObject, poly_pressure)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/media/sound/SoftChannel;)V", nullptr, $PRIVATE, $method(SoftChannel$MidiControlObject, init$, void, $SoftChannel*)},
		{"get", "(ILjava/lang/String;)[D", nullptr, $PUBLIC, $virtualMethod(SoftChannel$MidiControlObject, get, $doubles*, int32_t, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.SoftChannel$MidiControlObject", "com.sun.media.sound.SoftChannel", "MidiControlObject", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.SoftChannel$MidiControlObject",
		"java.lang.Object",
		"com.sun.media.sound.SoftControl",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.media.sound.SoftChannel"
	};
	$loadClass(SoftChannel$MidiControlObject, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftChannel$MidiControlObject);
	});
	return class$;
}

$Class* SoftChannel$MidiControlObject::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com