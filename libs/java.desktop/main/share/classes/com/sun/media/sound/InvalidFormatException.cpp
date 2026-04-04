#include <com/sun/media/sound/InvalidFormatException.h>
#include <com/sun/media/sound/InvalidDataException.h>
#include <jcpp.h>

using $InvalidDataException = ::com::sun::media::sound::InvalidDataException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void InvalidFormatException::init$() {
	$InvalidDataException::init$("Invalid format!"_s);
}

void InvalidFormatException::init$($String* s) {
	$InvalidDataException::init$(s);
}

InvalidFormatException::InvalidFormatException() {
}

InvalidFormatException::InvalidFormatException(const InvalidFormatException& e) : $InvalidDataException(e) {
}

void InvalidFormatException::throw$() {
	throw *this;
}

$Class* InvalidFormatException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidFormatException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InvalidFormatException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidFormatException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.media.sound.InvalidFormatException",
		"com.sun.media.sound.InvalidDataException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InvalidFormatException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InvalidFormatException);
	});
	return class$;
}

$Class* InvalidFormatException::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com