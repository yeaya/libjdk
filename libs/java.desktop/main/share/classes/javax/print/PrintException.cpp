#include <javax/print/PrintException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace print {

void PrintException::init$() {
	$Exception::init$();
}

void PrintException::init$($String* s) {
	$Exception::init$(s);
}

void PrintException::init$($Exception* e) {
	$Exception::init$(e);
}

void PrintException::init$($String* s, $Exception* e) {
	$Exception::init$(s, e);
}

PrintException::PrintException() {
}

PrintException::PrintException(const PrintException& e) : $Exception(e) {
}

void PrintException::throw$() {
	throw *this;
}

$Class* PrintException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrintException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrintException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(PrintException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(PrintException, init$, void, $Exception*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(PrintException, init$, void, $String*, $Exception*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.print.PrintException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PrintException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrintException);
	});
	return class$;
}

$Class* PrintException::class$ = nullptr;

	} // print
} // javax