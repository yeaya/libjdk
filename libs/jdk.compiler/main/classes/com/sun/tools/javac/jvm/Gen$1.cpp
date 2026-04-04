#include <com/sun/tools/javac/jvm/Gen$1.h>
#include <com/sun/tools/javac/jvm/Gen.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCTry.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <jcpp.h>

using $Gen = ::com::sun::tools::javac::jvm::Gen;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCTry = ::com::sun::tools::javac::tree::JCTree$JCTry;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

void Gen$1::init$($Gen* this$0, $booleans* val$hasTry) {
	$set(this, this$0, this$0);
	$set(this, val$hasTry, val$hasTry);
	$TreeScanner::init$();
}

void Gen$1::visitTry($JCTree$JCTry* tree) {
	$nc(this->val$hasTry)->set(0, true);
}

void Gen$1::visitClassDef($JCTree$JCClassDecl* tree) {
}

void Gen$1::visitLambda($JCTree$JCLambda* tree) {
}

Gen$1::Gen$1() {
}

$Class* Gen$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/jvm/Gen;", nullptr, $FINAL | $SYNTHETIC, $field(Gen$1, this$0)},
		{"val$hasTry", "[Z", nullptr, $FINAL | $SYNTHETIC, $field(Gen$1, val$hasTry)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/jvm/Gen;[Z)V", nullptr, 0, $method(Gen$1, init$, void, $Gen*, $booleans*)},
		{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC, $virtualMethod(Gen$1, visitClassDef, void, $JCTree$JCClassDecl*)},
		{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC, $virtualMethod(Gen$1, visitLambda, void, $JCTree$JCLambda*)},
		{"visitTry", "(Lcom/sun/tools/javac/tree/JCTree$JCTry;)V", nullptr, $PUBLIC, $virtualMethod(Gen$1, visitTry, void, $JCTree$JCTry*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.jvm.Gen",
		"hasTry",
		"(Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;)Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.Gen$1", nullptr, nullptr, 0},
		{"com.sun.tools.javac.tree.JCTree$JCSwitchExpression", "com.sun.tools.javac.tree.JCTree", "JCSwitchExpression", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.jvm.Gen$1",
		"com.sun.tools.javac.tree.TreeScanner",
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
	$loadClass(Gen$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Gen$1);
	});
	return class$;
}

$Class* Gen$1::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com