#include <com/sun/media/sound/SoftMainMixer$1.h>
#include <com/sun/media/sound/SoftMainMixer.h>
#include <jcpp.h>

using $SoftMainMixer = ::com::sun::media::sound::SoftMainMixer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void SoftMainMixer$1::init$($SoftMainMixer* this$0) {
	$set(this, this$0, this$0);
	$set(this, balance, this->this$0->co_master_balance);
	$set(this, volume, this->this$0->co_master_volume);
	$set(this, coarse_tuning, this->this$0->co_master_coarse_tuning);
	$set(this, fine_tuning, this->this$0->co_master_fine_tuning);
}

$doubles* SoftMainMixer$1::get(int32_t instance, $String* name) {
	if (name == nullptr) {
		return nullptr;
	}
	if ($nc(name)->equals("balance"_s)) {
		return this->balance;
	}
	if (name->equals("volume"_s)) {
		return this->volume;
	}
	if (name->equals("coarse_tuning"_s)) {
		return this->coarse_tuning;
	}
	if (name->equals("fine_tuning"_s)) {
		return this->fine_tuning;
	}
	return nullptr;
}

SoftMainMixer$1::SoftMainMixer$1() {
}

$Class* SoftMainMixer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/media/sound/SoftMainMixer;", nullptr, $FINAL | $SYNTHETIC, $field(SoftMainMixer$1, this$0)},
		{"balance", "[D", nullptr, 0, $field(SoftMainMixer$1, balance)},
		{"volume", "[D", nullptr, 0, $field(SoftMainMixer$1, volume)},
		{"coarse_tuning", "[D", nullptr, 0, $field(SoftMainMixer$1, coarse_tuning)},
		{"fine_tuning", "[D", nullptr, 0, $field(SoftMainMixer$1, fine_tuning)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/media/sound/SoftMainMixer;)V", nullptr, 0, $method(SoftMainMixer$1, init$, void, $SoftMainMixer*)},
		{"get", "(ILjava/lang/String;)[D", nullptr, $PUBLIC, $virtualMethod(SoftMainMixer$1, get, $doubles*, int32_t, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.media.sound.SoftMainMixer",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.SoftMainMixer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.SoftMainMixer$1",
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
		"com.sun.media.sound.SoftMainMixer"
	};
	$loadClass(SoftMainMixer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftMainMixer$1);
	});
	return class$;
}

$Class* SoftMainMixer$1::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com