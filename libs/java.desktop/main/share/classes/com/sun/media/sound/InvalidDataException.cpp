#include <com/sun/media/sound/InvalidDataException.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void InvalidDataException::init$() {
	$IOException::init$("Invalid Data!"_s);
}

void InvalidDataException::init$($String* s) {
	$IOException::init$(s);
}

InvalidDataException::InvalidDataException() {
}

InvalidDataException::InvalidDataException(const InvalidDataException& e) : $IOException(e) {
}

void InvalidDataException::throw$() {
	throw *this;
}

$Class* InvalidDataException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidDataException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InvalidDataException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidDataException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.media.sound.InvalidDataException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InvalidDataException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InvalidDataException);
	});
	return class$;
}

$Class* InvalidDataException::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com