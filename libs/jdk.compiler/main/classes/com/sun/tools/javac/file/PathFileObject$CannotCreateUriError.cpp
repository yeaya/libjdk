#include <com/sun/tools/javac/file/PathFileObject$CannotCreateUriError.h>
#include <com/sun/tools/javac/file/PathFileObject.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

void PathFileObject$CannotCreateUriError::init$($String* value, $Throwable* cause) {
	$Error::init$(value, cause);
}

PathFileObject$CannotCreateUriError::PathFileObject$CannotCreateUriError() {
}

PathFileObject$CannotCreateUriError::PathFileObject$CannotCreateUriError(const PathFileObject$CannotCreateUriError& e) : $Error(e) {
}

void PathFileObject$CannotCreateUriError::throw$() {
	throw *this;
}

$Class* PathFileObject$CannotCreateUriError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PathFileObject$CannotCreateUriError, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(PathFileObject$CannotCreateUriError, init$, void, $String*, $Throwable*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.file.PathFileObject$CannotCreateUriError", "com.sun.tools.javac.file.PathFileObject", "CannotCreateUriError", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.file.PathFileObject$CannotCreateUriError",
		"java.lang.Error",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.file.PathFileObject"
	};
	$loadClass(PathFileObject$CannotCreateUriError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PathFileObject$CannotCreateUriError);
	});
	return class$;
}

$Class* PathFileObject$CannotCreateUriError::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com