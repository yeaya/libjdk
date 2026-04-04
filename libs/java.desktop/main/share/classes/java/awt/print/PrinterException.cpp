#include <java/awt/print/PrinterException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace print {

void PrinterException::init$() {
	$Exception::init$();
}

void PrinterException::init$($String* msg) {
	$Exception::init$(msg);
}

PrinterException::PrinterException() {
}

PrinterException::PrinterException(const PrinterException& e) : $Exception(e) {
}

void PrinterException::throw$() {
	throw *this;
}

$Class* PrinterException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrinterException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrinterException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(PrinterException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.print.PrinterException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PrinterException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrinterException);
	});
	return class$;
}

$Class* PrinterException::class$ = nullptr;

		} // print
	} // awt
} // java