#include <com/sun/tools/javac/jvm/Gen$CodeSizeOverflow.h>
#include <com/sun/tools/javac/jvm/Gen.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

void Gen$CodeSizeOverflow::init$() {
	$RuntimeException::init$();
}

Gen$CodeSizeOverflow::Gen$CodeSizeOverflow() {
}

Gen$CodeSizeOverflow::Gen$CodeSizeOverflow(const Gen$CodeSizeOverflow& e) : $RuntimeException(e) {
}

void Gen$CodeSizeOverflow::throw$() {
	throw *this;
}

$Class* Gen$CodeSizeOverflow::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Gen$CodeSizeOverflow, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Gen$CodeSizeOverflow, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.Gen$CodeSizeOverflow", "com.sun.tools.javac.jvm.Gen", "CodeSizeOverflow", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.jvm.Gen$CodeSizeOverflow",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.jvm.Gen"
	};
	$loadClass(Gen$CodeSizeOverflow, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Gen$CodeSizeOverflow);
	});
	return class$;
}

$Class* Gen$CodeSizeOverflow::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com