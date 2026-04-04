#include <com/sun/media/sound/RIFFInvalidDataException.h>
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

void RIFFInvalidDataException::init$() {
	$InvalidDataException::init$("Invalid Data!"_s);
}

void RIFFInvalidDataException::init$($String* s) {
	$InvalidDataException::init$(s);
}

RIFFInvalidDataException::RIFFInvalidDataException() {
}

RIFFInvalidDataException::RIFFInvalidDataException(const RIFFInvalidDataException& e) : $InvalidDataException(e) {
}

void RIFFInvalidDataException::throw$() {
	throw *this;
}

$Class* RIFFInvalidDataException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RIFFInvalidDataException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RIFFInvalidDataException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(RIFFInvalidDataException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.media.sound.RIFFInvalidDataException",
		"com.sun.media.sound.InvalidDataException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RIFFInvalidDataException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RIFFInvalidDataException);
	});
	return class$;
}

$Class* RIFFInvalidDataException::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com