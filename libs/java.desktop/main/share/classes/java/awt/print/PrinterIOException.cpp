#include <java/awt/print/PrinterIOException.h>
#include <java/awt/print/PrinterException.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $PrinterException = ::java::awt::print::PrinterException;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace print {

void PrinterIOException::init$($IOException* exception) {
	$PrinterException::init$();
	initCause(nullptr);
	$set(this, mException, exception);
}

$IOException* PrinterIOException::getIOException() {
	return this->mException;
}

$Throwable* PrinterIOException::getCause() {
	return this->mException;
}

PrinterIOException::PrinterIOException() {
}

PrinterIOException::PrinterIOException(const PrinterIOException& e) : $PrinterException(e) {
}

void PrinterIOException::throw$() {
	throw *this;
}

$Class* PrinterIOException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrinterIOException, serialVersionUID)},
		{"mException", "Ljava/io/IOException;", nullptr, $PRIVATE, $field(PrinterIOException, mException)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/IOException;)V", nullptr, $PUBLIC, $method(PrinterIOException, init$, void, $IOException*)},
		{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC, $virtualMethod(PrinterIOException, getCause, $Throwable*)},
		{"getIOException", "()Ljava/io/IOException;", nullptr, $PUBLIC, $virtualMethod(PrinterIOException, getIOException, $IOException*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.print.PrinterIOException",
		"java.awt.print.PrinterException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PrinterIOException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrinterIOException);
	});
	return class$;
}

$Class* PrinterIOException::class$ = nullptr;

		} // print
	} // awt
} // java