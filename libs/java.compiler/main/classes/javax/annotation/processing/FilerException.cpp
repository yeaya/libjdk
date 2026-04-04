#include <javax/annotation/processing/FilerException.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace annotation {
		namespace processing {

void FilerException::init$($String* s) {
	$IOException::init$(s);
}

FilerException::FilerException() {
}

FilerException::FilerException(const FilerException& e) : $IOException(e) {
}

void FilerException::throw$() {
	throw *this;
}

$Class* FilerException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FilerException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(FilerException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.annotation.processing.FilerException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FilerException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FilerException);
	});
	return class$;
}

$Class* FilerException::class$ = nullptr;

		} // processing
	} // annotation
} // javax