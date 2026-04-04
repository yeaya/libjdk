#include <javax/sound/midi/Patch.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace sound {
		namespace midi {

void Patch::init$(int32_t bank, int32_t program) {
	this->bank = bank;
	this->program = program;
}

int32_t Patch::getBank() {
	return this->bank;
}

int32_t Patch::getProgram() {
	return this->program;
}

Patch::Patch() {
}

$Class* Patch::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"bank", "I", nullptr, $PRIVATE | $FINAL, $field(Patch, bank)},
		{"program", "I", nullptr, $PRIVATE | $FINAL, $field(Patch, program)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(II)V", nullptr, $PUBLIC, $method(Patch, init$, void, int32_t, int32_t)},
		{"getBank", "()I", nullptr, $PUBLIC, $virtualMethod(Patch, getBank, int32_t)},
		{"getProgram", "()I", nullptr, $PUBLIC, $virtualMethod(Patch, getProgram, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.sound.midi.Patch",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Patch, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Patch);
	});
	return class$;
}

$Class* Patch::class$ = nullptr;

		} // midi
	} // sound
} // javax