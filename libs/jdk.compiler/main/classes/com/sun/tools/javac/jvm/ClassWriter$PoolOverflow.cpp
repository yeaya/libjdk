#include <com/sun/tools/javac/jvm/ClassWriter$PoolOverflow.h>
#include <com/sun/tools/javac/jvm/ClassWriter.h>
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

void ClassWriter$PoolOverflow::init$() {
	$RuntimeException::init$();
}

ClassWriter$PoolOverflow::ClassWriter$PoolOverflow() {
}

ClassWriter$PoolOverflow::ClassWriter$PoolOverflow(const ClassWriter$PoolOverflow& e) : $RuntimeException(e) {
}

void ClassWriter$PoolOverflow::throw$() {
	throw *this;
}

$Class* ClassWriter$PoolOverflow::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClassWriter$PoolOverflow, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ClassWriter$PoolOverflow, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.ClassWriter$PoolOverflow", "com.sun.tools.javac.jvm.ClassWriter", "PoolOverflow", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.jvm.ClassWriter$PoolOverflow",
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
		"com.sun.tools.javac.jvm.ClassWriter"
	};
	$loadClass(ClassWriter$PoolOverflow, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassWriter$PoolOverflow);
	});
	return class$;
}

$Class* ClassWriter$PoolOverflow::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com