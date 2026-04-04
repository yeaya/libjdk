#include <com/sun/tools/javac/tree/Pretty$UncheckedIOException.h>
#include <com/sun/tools/javac/tree/Pretty.h>
#include <java/io/IOException.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

void Pretty$UncheckedIOException::init$($IOException* e) {
	$Error::init$($($nc(e)->getMessage()), e);
}

Pretty$UncheckedIOException::Pretty$UncheckedIOException() {
}

Pretty$UncheckedIOException::Pretty$UncheckedIOException(const Pretty$UncheckedIOException& e) : $Error(e) {
}

void Pretty$UncheckedIOException::throw$() {
	throw *this;
}

$Class* Pretty$UncheckedIOException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(Pretty$UncheckedIOException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/IOException;)V", nullptr, 0, $method(Pretty$UncheckedIOException, init$, void, $IOException*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.tree.Pretty$UncheckedIOException", "com.sun.tools.javac.tree.Pretty", "UncheckedIOException", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.tree.Pretty$UncheckedIOException",
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
		"com.sun.tools.javac.tree.Pretty"
	};
	$loadClass(Pretty$UncheckedIOException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Pretty$UncheckedIOException);
	});
	return class$;
}

$Class* Pretty$UncheckedIOException::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com