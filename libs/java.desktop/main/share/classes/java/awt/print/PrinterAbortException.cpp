#include <java/awt/print/PrinterAbortException.h>
#include <java/awt/print/PrinterException.h>
#include <jcpp.h>

using $PrinterException = ::java::awt::print::PrinterException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace print {

void PrinterAbortException::init$() {
	$PrinterException::init$();
}

void PrinterAbortException::init$($String* msg) {
	$PrinterException::init$(msg);
}

PrinterAbortException::PrinterAbortException() {
}

PrinterAbortException::PrinterAbortException(const PrinterAbortException& e) : $PrinterException(e) {
}

void PrinterAbortException::throw$() {
	throw *this;
}

$Class* PrinterAbortException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrinterAbortException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrinterAbortException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(PrinterAbortException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.print.PrinterAbortException",
		"java.awt.print.PrinterException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PrinterAbortException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrinterAbortException);
	});
	return class$;
}

$Class* PrinterAbortException::class$ = nullptr;

		} // print
	} // awt
} // java