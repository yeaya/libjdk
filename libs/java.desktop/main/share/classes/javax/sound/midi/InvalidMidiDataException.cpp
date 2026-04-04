#include <javax/sound/midi/InvalidMidiDataException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace sound {
		namespace midi {

void InvalidMidiDataException::init$() {
	$Exception::init$();
}

void InvalidMidiDataException::init$($String* message) {
	$Exception::init$(message);
}

InvalidMidiDataException::InvalidMidiDataException() {
}

InvalidMidiDataException::InvalidMidiDataException(const InvalidMidiDataException& e) : $Exception(e) {
}

void InvalidMidiDataException::throw$() {
	throw *this;
}

$Class* InvalidMidiDataException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidMidiDataException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InvalidMidiDataException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidMidiDataException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.sound.midi.InvalidMidiDataException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InvalidMidiDataException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InvalidMidiDataException);
	});
	return class$;
}

$Class* InvalidMidiDataException::class$ = nullptr;

		} // midi
	} // sound
} // javax