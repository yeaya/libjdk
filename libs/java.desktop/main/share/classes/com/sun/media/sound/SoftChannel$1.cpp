#include <com/sun/media/sound/SoftChannel$1.h>
#include <com/sun/media/sound/SoftChannel.h>
#include <jcpp.h>

using $SoftChannel = ::com::sun::media::sound::SoftChannel;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void SoftChannel$1::init$($SoftChannel* this$0) {
	$set(this, this$0, this$0);
	$set(this, cc, this->this$0->co_midi_cc_cc);
}

$doubles* SoftChannel$1::get(int32_t instance, $String* name) {
	if (name == nullptr) {
		return nullptr;
	}
	return $nc(this->cc)->get($Integer::parseInt(name));
}

SoftChannel$1::SoftChannel$1() {
}

$Class* SoftChannel$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/media/sound/SoftChannel;", nullptr, $FINAL | $SYNTHETIC, $field(SoftChannel$1, this$0)},
		{"cc", "[[D", nullptr, 0, $field(SoftChannel$1, cc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/media/sound/SoftChannel;)V", nullptr, 0, $method(SoftChannel$1, init$, void, $SoftChannel*)},
		{"get", "(ILjava/lang/String;)[D", nullptr, $PUBLIC, $virtualMethod(SoftChannel$1, get, $doubles*, int32_t, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.media.sound.SoftChannel",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.SoftChannel$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.SoftChannel$1",
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
		"com.sun.media.sound.SoftChannel"
	};
	$loadClass(SoftChannel$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftChannel$1);
	});
	return class$;
}

$Class* SoftChannel$1::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com