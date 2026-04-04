#include <com/sun/tools/javac/jvm/Code$StackMapFrame.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/jvm/Code.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

void Code$StackMapFrame::init$() {
}

Code$StackMapFrame::Code$StackMapFrame() {
}

$Class* Code$StackMapFrame::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pc", "I", nullptr, 0, $field(Code$StackMapFrame, pc)},
		{"locals", "[Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(Code$StackMapFrame, locals)},
		{"stack", "[Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(Code$StackMapFrame, stack)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Code$StackMapFrame, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.Code$StackMapFrame", "com.sun.tools.javac.jvm.Code", "StackMapFrame", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.jvm.Code$StackMapFrame",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.jvm.Code"
	};
	$loadClass(Code$StackMapFrame, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Code$StackMapFrame);
	});
	return class$;
}

$Class* Code$StackMapFrame::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com