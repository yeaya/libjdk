#include <javax/sound/sampled/UnsupportedAudioFileException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace sound {
		namespace sampled {

void UnsupportedAudioFileException::init$() {
	$Exception::init$();
}

void UnsupportedAudioFileException::init$($String* message) {
	$Exception::init$(message);
}

UnsupportedAudioFileException::UnsupportedAudioFileException() {
}

UnsupportedAudioFileException::UnsupportedAudioFileException(const UnsupportedAudioFileException& e) : $Exception(e) {
}

void UnsupportedAudioFileException::throw$() {
	throw *this;
}

$Class* UnsupportedAudioFileException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnsupportedAudioFileException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UnsupportedAudioFileException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(UnsupportedAudioFileException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.sound.sampled.UnsupportedAudioFileException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnsupportedAudioFileException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnsupportedAudioFileException);
	});
	return class$;
}

$Class* UnsupportedAudioFileException::class$ = nullptr;

		} // sampled
	} // sound
} // javax