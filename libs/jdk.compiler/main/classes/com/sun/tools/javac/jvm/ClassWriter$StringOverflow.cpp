#include <com/sun/tools/javac/jvm/ClassWriter$StringOverflow.h>
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

void ClassWriter$StringOverflow::init$($String* s) {
	$RuntimeException::init$();
	$set(this, value, s);
}

ClassWriter$StringOverflow::ClassWriter$StringOverflow() {
}

ClassWriter$StringOverflow::ClassWriter$StringOverflow(const ClassWriter$StringOverflow& e) : $RuntimeException(e) {
}

void ClassWriter$StringOverflow::throw$() {
	throw *this;
}

$Class* ClassWriter$StringOverflow::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClassWriter$StringOverflow, serialVersionUID)},
		{"value", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(ClassWriter$StringOverflow, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ClassWriter$StringOverflow, init$, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.ClassWriter$StringOverflow", "com.sun.tools.javac.jvm.ClassWriter", "StringOverflow", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.jvm.ClassWriter$StringOverflow",
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
	$loadClass(ClassWriter$StringOverflow, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassWriter$StringOverflow);
	});
	return class$;
}

$Class* ClassWriter$StringOverflow::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com