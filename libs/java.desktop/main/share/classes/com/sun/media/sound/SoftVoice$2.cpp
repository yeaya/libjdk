#include <com/sun/media/sound/SoftVoice$2.h>
#include <com/sun/media/sound/SoftVoice.h>
#include <jcpp.h>

using $SoftVoice = ::com::sun::media::sound::SoftVoice;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void SoftVoice$2::init$($SoftVoice* this$0) {
	$set(this, this$0, this$0);
	$set(this, active, this->this$0->co_mixer_active);
	$set(this, gain, this->this$0->co_mixer_gain);
	$set(this, pan, this->this$0->co_mixer_pan);
	$set(this, balance, this->this$0->co_mixer_balance);
	$set(this, reverb, this->this$0->co_mixer_reverb);
	$set(this, chorus, this->this$0->co_mixer_chorus);
}

$doubles* SoftVoice$2::get(int32_t instance, $String* name) {
	if (name == nullptr) {
		return nullptr;
	}
	if ($nc(name)->equals("active"_s)) {
		return this->active;
	}
	if (name->equals("gain"_s)) {
		return this->gain;
	}
	if (name->equals("pan"_s)) {
		return this->pan;
	}
	if (name->equals("balance"_s)) {
		return this->balance;
	}
	if (name->equals("reverb"_s)) {
		return this->reverb;
	}
	if (name->equals("chorus"_s)) {
		return this->chorus;
	}
	return nullptr;
}

SoftVoice$2::SoftVoice$2() {
}

$Class* SoftVoice$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/media/sound/SoftVoice;", nullptr, $FINAL | $SYNTHETIC, $field(SoftVoice$2, this$0)},
		{"active", "[D", nullptr, $FINAL, $field(SoftVoice$2, active)},
		{"gain", "[D", nullptr, $FINAL, $field(SoftVoice$2, gain)},
		{"pan", "[D", nullptr, $FINAL, $field(SoftVoice$2, pan)},
		{"balance", "[D", nullptr, $FINAL, $field(SoftVoice$2, balance)},
		{"reverb", "[D", nullptr, $FINAL, $field(SoftVoice$2, reverb)},
		{"chorus", "[D", nullptr, $FINAL, $field(SoftVoice$2, chorus)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/media/sound/SoftVoice;)V", nullptr, 0, $method(SoftVoice$2, init$, void, $SoftVoice*)},
		{"get", "(ILjava/lang/String;)[D", nullptr, $PUBLIC, $virtualMethod(SoftVoice$2, get, $doubles*, int32_t, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.media.sound.SoftVoice",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.SoftVoice$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.SoftVoice$2",
		"java.lang.Object",
		"com.sun.media.sound.SoftControl",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.media.sound.SoftVoice"
	};
	$loadClass(SoftVoice$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftVoice$2);
	});
	return class$;
}

$Class* SoftVoice$2::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com