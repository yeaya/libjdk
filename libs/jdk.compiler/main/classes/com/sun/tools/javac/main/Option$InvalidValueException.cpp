#include <com/sun/tools/javac/main/Option$InvalidValueException.h>
#include <com/sun/tools/javac/main/Option.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

void Option$InvalidValueException::init$($String* msg) {
	$Exception::init$(msg);
}

void Option$InvalidValueException::init$($String* msg, $Throwable* cause) {
	$Exception::init$(msg, cause);
}

Option$InvalidValueException::Option$InvalidValueException() {
}

Option$InvalidValueException::Option$InvalidValueException(const Option$InvalidValueException& e) : $Exception(e) {
}

void Option$InvalidValueException::throw$() {
	throw *this;
}

$Class* Option$InvalidValueException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Option$InvalidValueException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(Option$InvalidValueException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(Option$InvalidValueException, init$, void, $String*, $Throwable*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.main.Option$InvalidValueException", "com.sun.tools.javac.main.Option", "InvalidValueException", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.main.Option$InvalidValueException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.main.Option"
	};
	$loadClass(Option$InvalidValueException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Option$InvalidValueException);
	});
	return class$;
}

$Class* Option$InvalidValueException::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com