#include <com/sun/tools/javac/processing/AnnotationProcessingError.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

void AnnotationProcessingError::init$($Throwable* cause) {
	$Error::init$(cause);
}

AnnotationProcessingError::AnnotationProcessingError() {
}

AnnotationProcessingError::AnnotationProcessingError(const AnnotationProcessingError& e) : $Error(e) {
}

void AnnotationProcessingError::throw$() {
	throw *this;
}

$Class* AnnotationProcessingError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(AnnotationProcessingError, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, 0, $method(AnnotationProcessingError, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.processing.AnnotationProcessingError",
		"java.lang.Error",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AnnotationProcessingError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AnnotationProcessingError);
	});
	return class$;
}

$Class* AnnotationProcessingError::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com