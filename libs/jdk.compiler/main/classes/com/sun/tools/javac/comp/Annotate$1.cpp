#include <com/sun/tools/javac/comp/Annotate$1.h>
#include <com/sun/tools/javac/comp/Annotate.h>
#include <com/sun/tools/javac/comp/MemberEnter$InitTreeVisitor.h>
#include <com/sun/tools/javac/tree/JCTree$JCArrayTypeTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCPrimitiveTypeTree.h>
#include <jcpp.h>

using $Annotate = ::com::sun::tools::javac::comp::Annotate;
using $MemberEnter$InitTreeVisitor = ::com::sun::tools::javac::comp::MemberEnter$InitTreeVisitor;
using $JCTree$JCArrayTypeTree = ::com::sun::tools::javac::tree::JCTree$JCArrayTypeTree;
using $JCTree$JCPrimitiveTypeTree = ::com::sun::tools::javac::tree::JCTree$JCPrimitiveTypeTree;
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

void Annotate$1::init$($Annotate* this$0) {
	$set(this, this$0, this$0);
	$MemberEnter$InitTreeVisitor::init$();
}

void Annotate$1::visitTypeIdent($JCTree$JCPrimitiveTypeTree* that) {
}

void Annotate$1::visitTypeArray($JCTree$JCArrayTypeTree* that) {
}

Annotate$1::Annotate$1() {
}

$Class* Annotate$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Annotate;", nullptr, $FINAL | $SYNTHETIC, $field(Annotate$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Annotate;)V", nullptr, 0, $method(Annotate$1, init$, void, $Annotate*)},
		{"visitTypeArray", "(Lcom/sun/tools/javac/tree/JCTree$JCArrayTypeTree;)V", nullptr, $PUBLIC, $virtualMethod(Annotate$1, visitTypeArray, void, $JCTree$JCArrayTypeTree*)},
		{"visitTypeIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCPrimitiveTypeTree;)V", nullptr, $PUBLIC, $virtualMethod(Annotate$1, visitTypeIdent, void, $JCTree$JCPrimitiveTypeTree*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Annotate",
		"attributeAnnotationValue",
		"(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/code/Attribute;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Annotate$1", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.MemberEnter$InitTreeVisitor", "com.sun.tools.javac.comp.MemberEnter", "InitTreeVisitor", $STATIC},
		{"com.sun.tools.javac.tree.JCTree$JCExpression", "com.sun.tools.javac.tree.JCTree", "JCExpression", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Annotate$1",
		"com.sun.tools.javac.comp.MemberEnter$InitTreeVisitor",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Annotate"
	};
	$loadClass(Annotate$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Annotate$1);
	});
	return class$;
}

$Class* Annotate$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com