#include <com/sun/media/sound/RIFFInvalidFormatException.h>
#include <com/sun/media/sound/InvalidFormatException.h>
#include <jcpp.h>

using $InvalidFormatException = ::com::sun::media::sound::InvalidFormatException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void RIFFInvalidFormatException::init$() {
	$InvalidFormatException::init$("Invalid format!"_s);
}

void RIFFInvalidFormatException::init$($String* s) {
	$InvalidFormatException::init$(s);
}

RIFFInvalidFormatException::RIFFInvalidFormatException() {
}

RIFFInvalidFormatException::RIFFInvalidFormatException(const RIFFInvalidFormatException& e) : $InvalidFormatException(e) {
}

void RIFFInvalidFormatException::throw$() {
	throw *this;
}

$Class* RIFFInvalidFormatException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RIFFInvalidFormatException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RIFFInvalidFormatException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(RIFFInvalidFormatException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.media.sound.RIFFInvalidFormatException",
		"com.sun.media.sound.InvalidFormatException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RIFFInvalidFormatException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RIFFInvalidFormatException);
	});
	return class$;
}

$Class* RIFFInvalidFormatException::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com