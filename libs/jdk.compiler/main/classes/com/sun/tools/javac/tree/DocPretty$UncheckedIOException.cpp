#include <com/sun/tools/javac/tree/DocPretty$UncheckedIOException.h>
#include <com/sun/tools/javac/tree/DocPretty.h>
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

void DocPretty$UncheckedIOException::init$($IOException* e) {
	$Error::init$($($nc(e)->getMessage()), e);
}

DocPretty$UncheckedIOException::DocPretty$UncheckedIOException() {
}

DocPretty$UncheckedIOException::DocPretty$UncheckedIOException(const DocPretty$UncheckedIOException& e) : $Error(e) {
}

void DocPretty$UncheckedIOException::throw$() {
	throw *this;
}

$Class* DocPretty$UncheckedIOException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(DocPretty$UncheckedIOException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/IOException;)V", nullptr, 0, $method(DocPretty$UncheckedIOException, init$, void, $IOException*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.tree.DocPretty$UncheckedIOException", "com.sun.tools.javac.tree.DocPretty", "UncheckedIOException", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.tree.DocPretty$UncheckedIOException",
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
		"com.sun.tools.javac.tree.DocPretty"
	};
	$loadClass(DocPretty$UncheckedIOException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DocPretty$UncheckedIOException);
	});
	return class$;
}

$Class* DocPretty$UncheckedIOException::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com