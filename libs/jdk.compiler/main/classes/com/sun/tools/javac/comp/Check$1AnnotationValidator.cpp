#include <com/sun/tools/javac/comp/Check$1AnnotationValidator.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/tree/JCTree$JCAnnotation.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <jcpp.h>

using $Check = ::com::sun::tools::javac::comp::Check;
using $JCTree$JCAnnotation = ::com::sun::tools::javac::tree::JCTree$JCAnnotation;
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
				namespace comp {

void Check$1AnnotationValidator::init$($Check* this$0) {
	$set(this, this$0, this$0);
	$TreeScanner::init$();
}

void Check$1AnnotationValidator::visitAnnotation($JCTree$JCAnnotation* tree) {
	bool var$0 = !$nc($nc(tree)->type)->isErroneous();
	if (var$0 && $nc(tree->type->tsym)->isAnnotationType()) {
		$TreeScanner::visitAnnotation(tree);
		this->this$0->validateAnnotation(tree);
	}
}

Check$1AnnotationValidator::Check$1AnnotationValidator() {
}

$Class* Check$1AnnotationValidator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Check;", nullptr, $FINAL | $SYNTHETIC, $field(Check$1AnnotationValidator, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Check;)V", nullptr, 0, $method(Check$1AnnotationValidator, init$, void, $Check*)},
		{"visitAnnotation", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;)V", nullptr, $PUBLIC, $virtualMethod(Check$1AnnotationValidator, visitAnnotation, void, $JCTree$JCAnnotation*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Check",
		"validateAnnotationTree",
		"(Lcom/sun/tools/javac/tree/JCTree;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Check$1AnnotationValidator", nullptr, "AnnotationValidator", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Check$1AnnotationValidator",
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
		"com.sun.tools.javac.comp.Check"
	};
	$loadClass(Check$1AnnotationValidator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Check$1AnnotationValidator);
	});
	return class$;
}

$Class* Check$1AnnotationValidator::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com