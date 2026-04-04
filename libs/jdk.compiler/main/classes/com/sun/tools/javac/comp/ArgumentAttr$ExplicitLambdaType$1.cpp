#include <com/sun/tools/javac/comp/ArgumentAttr$ExplicitLambdaType$1.h>
#include <com/sun/tools/javac/comp/ArgumentAttr$ExplicitLambdaType.h>
#include <com/sun/tools/javac/comp/DeferredAttr$LambdaReturnScanner.h>
#include <com/sun/tools/javac/tree/JCTree$JCReturn.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <jcpp.h>

using $ArgumentAttr$ExplicitLambdaType = ::com::sun::tools::javac::comp::ArgumentAttr$ExplicitLambdaType;
using $DeferredAttr$LambdaReturnScanner = ::com::sun::tools::javac::comp::DeferredAttr$LambdaReturnScanner;
using $JCTree$JCReturn = ::com::sun::tools::javac::tree::JCTree$JCReturn;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void ArgumentAttr$ExplicitLambdaType$1::init$($ArgumentAttr$ExplicitLambdaType* this$1, $ListBuffer* val$buf) {
	$set(this, this$1, this$1);
	$set(this, val$buf, val$buf);
	$DeferredAttr$LambdaReturnScanner::init$();
}

void ArgumentAttr$ExplicitLambdaType$1::visitReturn($JCTree$JCReturn* tree) {
	$nc(this->val$buf)->add(tree);
}

ArgumentAttr$ExplicitLambdaType$1::ArgumentAttr$ExplicitLambdaType$1() {
}

$Class* ArgumentAttr$ExplicitLambdaType$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lcom/sun/tools/javac/comp/ArgumentAttr$ExplicitLambdaType;", nullptr, $FINAL | $SYNTHETIC, $field(ArgumentAttr$ExplicitLambdaType$1, this$1)},
		{"val$buf", "Lcom/sun/tools/javac/util/ListBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(ArgumentAttr$ExplicitLambdaType$1, val$buf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/ArgumentAttr$ExplicitLambdaType;Lcom/sun/tools/javac/util/ListBuffer;)V", nullptr, 0, $method(ArgumentAttr$ExplicitLambdaType$1, init$, void, $ArgumentAttr$ExplicitLambdaType*, $ListBuffer*)},
		{"visitReturn", "(Lcom/sun/tools/javac/tree/JCTree$JCReturn;)V", nullptr, $PUBLIC, $virtualMethod(ArgumentAttr$ExplicitLambdaType$1, visitReturn, void, $JCTree$JCReturn*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.ArgumentAttr$ExplicitLambdaType",
		"returnExpressions",
		"()Lcom/sun/tools/javac/util/List;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.ArgumentAttr$ExplicitLambdaType", "com.sun.tools.javac.comp.ArgumentAttr", "ExplicitLambdaType", 0},
		{"com.sun.tools.javac.comp.ArgumentAttr$ExplicitLambdaType$1", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.DeferredAttr$LambdaReturnScanner", "com.sun.tools.javac.comp.DeferredAttr", "LambdaReturnScanner", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.ArgumentAttr$ExplicitLambdaType$1",
		"com.sun.tools.javac.comp.DeferredAttr$LambdaReturnScanner",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.ArgumentAttr"
	};
	$loadClass(ArgumentAttr$ExplicitLambdaType$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ArgumentAttr$ExplicitLambdaType$1);
	});
	return class$;
}

$Class* ArgumentAttr$ExplicitLambdaType$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com