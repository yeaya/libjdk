#include <com/sun/media/sound/SoftVoice$1.h>
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

void SoftVoice$1::init$($SoftVoice* this$0) {
	$set(this, this$0, this$0);
	$set(this, keynumber, this->this$0->co_noteon_keynumber);
	$set(this, velocity, this->this$0->co_noteon_velocity);
	$set(this, on, this->this$0->co_noteon_on);
}

$doubles* SoftVoice$1::get(int32_t instance, $String* name) {
	if (name == nullptr) {
		return nullptr;
	}
	if ($nc(name)->equals("keynumber"_s)) {
		return this->keynumber;
	}
	if (name->equals("velocity"_s)) {
		return this->velocity;
	}
	if (name->equals("on"_s)) {
		return this->on;
	}
	return nullptr;
}

SoftVoice$1::SoftVoice$1() {
}

$Class* SoftVoice$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/media/sound/SoftVoice;", nullptr, $FINAL | $SYNTHETIC, $field(SoftVoice$1, this$0)},
		{"keynumber", "[D", nullptr, 0, $field(SoftVoice$1, keynumber)},
		{"velocity", "[D", nullptr, 0, $field(SoftVoice$1, velocity)},
		{"on", "[D", nullptr, 0, $field(SoftVoice$1, on)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/media/sound/SoftVoice;)V", nullptr, 0, $method(SoftVoice$1, init$, void, $SoftVoice*)},
		{"get", "(ILjava/lang/String;)[D", nullptr, $PUBLIC, $virtualMethod(SoftVoice$1, get, $doubles*, int32_t, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.media.sound.SoftVoice",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.SoftVoice$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.SoftVoice$1",
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
	$loadClass(SoftVoice$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftVoice$1);
	});
	return class$;
}

$Class* SoftVoice$1::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com