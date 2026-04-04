#include <com/sun/tools/javac/jvm/Gen$3.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/jvm/Code.h>
#include <com/sun/tools/javac/jvm/Gen$GenContext.h>
#include <com/sun/tools/javac/jvm/Gen$GenFinalizer.h>
#include <com/sun/tools/javac/jvm/Gen.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCTry.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <jcpp.h>

using $Env = ::com::sun::tools::javac::comp::Env;
using $Gen = ::com::sun::tools::javac::jvm::Gen;
using $Gen$GenContext = ::com::sun::tools::javac::jvm::Gen$GenContext;
using $Gen$GenFinalizer = ::com::sun::tools::javac::jvm::Gen$GenFinalizer;
using $JCTree$JCTry = ::com::sun::tools::javac::tree::JCTree$JCTry;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

void Gen$3::init$($Gen* this$0, $Env* val$tryEnv, $JCTree$JCTry* val$tree, $Env* val$oldEnv) {
	$set(this, this$0, this$0);
	$set(this, val$tryEnv, val$tryEnv);
	$set(this, val$tree, val$tree);
	$set(this, val$oldEnv, val$oldEnv);
	$Gen$GenFinalizer::init$(this$0);
}

void Gen$3::gen() {
	$Assert::check($nc($nc(($cast($Gen$GenContext, $nc(this->val$tryEnv)->info)))->gaps)->length() % 2 == 0);
	$nc($nc(($cast($Gen$GenContext, this->val$tryEnv->info)))->gaps)->append($($Integer::valueOf($nc(this->this$0->code)->curCP())));
	genLast();
}

void Gen$3::genLast() {
	if ($nc(this->val$tree)->finalizer != nullptr) {
		this->this$0->genStat(this->val$tree->finalizer, this->val$oldEnv, 2);
	}
}

bool Gen$3::hasFinalizer() {
	return $nc(this->val$tree)->finalizer != nullptr;
}

void Gen$3::afterBody() {
	if ($nc(this->val$tree)->finalizer != nullptr && (this->val$tree->finalizer->flags & (int64_t)0x00020000) != 0) {
		$set($nc($cast($Gen$GenContext, $nc(this->val$tryEnv)->info)), finalize$, nullptr);
	}
}

Gen$3::Gen$3() {
}

$Class* Gen$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/jvm/Gen;", nullptr, $FINAL | $SYNTHETIC, $field(Gen$3, this$0)},
		{"val$oldEnv", "Lcom/sun/tools/javac/comp/Env;", nullptr, $FINAL | $SYNTHETIC, $field(Gen$3, val$oldEnv)},
		{"val$tree", "Lcom/sun/tools/javac/tree/JCTree$JCTry;", nullptr, $FINAL | $SYNTHETIC, $field(Gen$3, val$tree)},
		{"val$tryEnv", "Lcom/sun/tools/javac/comp/Env;", nullptr, $FINAL | $SYNTHETIC, $field(Gen$3, val$tryEnv)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/jvm/Gen;Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/tree/JCTree$JCTry;Lcom/sun/tools/javac/comp/Env;)V", nullptr, 0, $method(Gen$3, init$, void, $Gen*, $Env*, $JCTree$JCTry*, $Env*)},
		{"afterBody", "()V", nullptr, 0, $virtualMethod(Gen$3, afterBody, void)},
		{"gen", "()V", nullptr, 0, $virtualMethod(Gen$3, gen, void)},
		{"genLast", "()V", nullptr, 0, $virtualMethod(Gen$3, genLast, void)},
		{"hasFinalizer", "()Z", nullptr, 0, $virtualMethod(Gen$3, hasFinalizer, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.jvm.Gen",
		"visitTry",
		"(Lcom/sun/tools/javac/tree/JCTree$JCTry;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.Gen$3", nullptr, nullptr, 0},
		{"com.sun.tools.javac.jvm.Gen$GenFinalizer", "com.sun.tools.javac.jvm.Gen", "GenFinalizer", $ABSTRACT},
		{"com.sun.tools.javac.tree.JCTree$JCTry", "com.sun.tools.javac.tree.JCTree", "JCTry", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.jvm.Gen$3",
		"com.sun.tools.javac.jvm.Gen$GenFinalizer",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.jvm.Gen"
	};
	$loadClass(Gen$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Gen$3);
	});
	return class$;
}

$Class* Gen$3::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com