#include <com/sun/media/sound/SoftChannel$3.h>
#include <com/sun/media/sound/SoftChannel.h>
#include <java/util/Map.h>
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

void SoftChannel$3::init$($SoftChannel* this$0) {
	$set(this, this$0, this$0);
	$set(this, nrpn, this->this$0->co_midi_nrpn_nrpn);
}

$doubles* SoftChannel$3::get(int32_t instance, $String* name) {
	$useLocalObjectStack();
	if (name == nullptr) {
		return nullptr;
	}
	int32_t iname = $Integer::parseInt(name);
	$var($doubles, v, $cast($doubles, $nc(this->nrpn)->get($($Integer::valueOf(iname)))));
	if (v == nullptr) {
		$assign(v, $new($doubles, 1));
		this->nrpn->put($($Integer::valueOf(iname)), v);
	}
	return v;
}

SoftChannel$3::SoftChannel$3() {
}

$Class* SoftChannel$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/media/sound/SoftChannel;", nullptr, $FINAL | $SYNTHETIC, $field(SoftChannel$3, this$0)},
		{"nrpn", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;[D>;", 0, $field(SoftChannel$3, nrpn)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/media/sound/SoftChannel;)V", nullptr, 0, $method(SoftChannel$3, init$, void, $SoftChannel*)},
		{"get", "(ILjava/lang/String;)[D", nullptr, $PUBLIC, $virtualMethod(SoftChannel$3, get, $doubles*, int32_t, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.media.sound.SoftChannel",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.SoftChannel$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.SoftChannel$3",
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
	$loadClass(SoftChannel$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftChannel$3);
	});
	return class$;
}

$Class* SoftChannel$3::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com