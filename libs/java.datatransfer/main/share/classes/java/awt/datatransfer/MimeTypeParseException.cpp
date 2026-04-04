#include <java/awt/datatransfer/MimeTypeParseException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace datatransfer {

void MimeTypeParseException::init$() {
	$Exception::init$();
}

void MimeTypeParseException::init$($String* s) {
	$Exception::init$(s);
}

MimeTypeParseException::MimeTypeParseException() {
}

MimeTypeParseException::MimeTypeParseException(const MimeTypeParseException& e) : $Exception(e) {
}

void MimeTypeParseException::throw$() {
	throw *this;
}

$Class* MimeTypeParseException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MimeTypeParseException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MimeTypeParseException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(MimeTypeParseException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.datatransfer.MimeTypeParseException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MimeTypeParseException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MimeTypeParseException);
	});
	return class$;
}

$Class* MimeTypeParseException::class$ = nullptr;

		} // datatransfer
	} // awt
} // java