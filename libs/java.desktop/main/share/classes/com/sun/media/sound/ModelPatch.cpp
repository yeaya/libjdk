#include <com/sun/media/sound/ModelPatch.h>
#include <javax/sound/midi/Patch.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Patch = ::javax::sound::midi::Patch;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void ModelPatch::init$(int32_t bank, int32_t program) {
	$Patch::init$(bank, program);
	this->percussion = false;
}

void ModelPatch::init$(int32_t bank, int32_t program, bool percussion) {
	$Patch::init$(bank, program);
	this->percussion = false;
	this->percussion = percussion;
}

bool ModelPatch::isPercussion() {
	return this->percussion;
}

ModelPatch::ModelPatch() {
}

$Class* ModelPatch::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"percussion", "Z", nullptr, $PRIVATE, $field(ModelPatch, percussion)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(II)V", nullptr, $PUBLIC, $method(ModelPatch, init$, void, int32_t, int32_t)},
		{"<init>", "(IIZ)V", nullptr, $PUBLIC, $method(ModelPatch, init$, void, int32_t, int32_t, bool)},
		{"isPercussion", "()Z", nullptr, $PUBLIC, $method(ModelPatch, isPercussion, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.media.sound.ModelPatch",
		"javax.sound.midi.Patch",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ModelPatch, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModelPatch);
	});
	return class$;
}

$Class* ModelPatch::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com