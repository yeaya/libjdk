#include <javax/sound/midi/MidiUnavailableException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace sound {
		namespace midi {

void MidiUnavailableException::init$() {
	$Exception::init$();
}

void MidiUnavailableException::init$($String* message) {
	$Exception::init$(message);
}

MidiUnavailableException::MidiUnavailableException() {
}

MidiUnavailableException::MidiUnavailableException(const MidiUnavailableException& e) : $Exception(e) {
}

void MidiUnavailableException::throw$() {
	throw *this;
}

$Class* MidiUnavailableException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MidiUnavailableException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MidiUnavailableException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(MidiUnavailableException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.sound.midi.MidiUnavailableException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MidiUnavailableException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MidiUnavailableException);
	});
	return class$;
}

$Class* MidiUnavailableException::class$ = nullptr;

		} // midi
	} // sound
} // javax