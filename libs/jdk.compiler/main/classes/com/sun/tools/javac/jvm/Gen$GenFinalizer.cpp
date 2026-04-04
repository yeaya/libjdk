#include <com/sun/tools/javac/jvm/Gen$GenFinalizer.h>
#include <com/sun/tools/javac/jvm/Gen.h>
#include <jcpp.h>

using $Gen = ::com::sun::tools::javac::jvm::Gen;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

void Gen$GenFinalizer::init$($Gen* this$0) {
	$set(this, this$0, this$0);
}

bool Gen$GenFinalizer::hasFinalizer() {
	return true;
}

void Gen$GenFinalizer::afterBody() {
}

Gen$GenFinalizer::Gen$GenFinalizer() {
}

$Class* Gen$GenFinalizer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/jvm/Gen;", nullptr, $FINAL | $SYNTHETIC, $field(Gen$GenFinalizer, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/jvm/Gen;)V", nullptr, 0, $method(Gen$GenFinalizer, init$, void, $Gen*)},
		{"afterBody", "()V", nullptr, 0, $virtualMethod(Gen$GenFinalizer, afterBody, void)},
		{"gen", "()V", nullptr, $ABSTRACT, $virtualMethod(Gen$GenFinalizer, gen, void)},
		{"genLast", "()V", nullptr, $ABSTRACT, $virtualMethod(Gen$GenFinalizer, genLast, void)},
		{"hasFinalizer", "()Z", nullptr, 0, $virtualMethod(Gen$GenFinalizer, hasFinalizer, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.Gen$GenFinalizer", "com.sun.tools.javac.jvm.Gen", "GenFinalizer", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"com.sun.tools.javac.jvm.Gen$GenFinalizer",
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
		"com.sun.tools.javac.jvm.Gen"
	};
	$loadClass(Gen$GenFinalizer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Gen$GenFinalizer);
	});
	return class$;
}

$Class* Gen$GenFinalizer::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com