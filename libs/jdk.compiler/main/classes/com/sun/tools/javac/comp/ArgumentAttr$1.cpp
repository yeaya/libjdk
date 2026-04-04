#include <com/sun/tools/javac/comp/ArgumentAttr$1.h>
#include <com/sun/tools/javac/comp/ArgumentAttr$UniquePos.h>
#include <com/sun/tools/javac/comp/ArgumentAttr.h>
#include <com/sun/tools/javac/comp/Attr$MethodAttrInfo.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

using $ArgumentAttr = ::com::sun::tools::javac::comp::ArgumentAttr;
using $ArgumentAttr$UniquePos = ::com::sun::tools::javac::comp::ArgumentAttr$UniquePos;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Attr$MethodAttrInfo = ::com::sun::tools::javac::comp::Attr$MethodAttrInfo;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
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

void ArgumentAttr$1::init$($ArgumentAttr* this$0, $Attr* x0, $ArgumentAttr$UniquePos* val$pos) {
	$set(this, this$0, this$0);
	$set(this, val$pos, val$pos);
	$Attr$MethodAttrInfo::init$($nc(x0));
}

bool ArgumentAttr$1::needsArgumentAttr($JCTree* tree) {
	return !$$new($ArgumentAttr$UniquePos, this->this$0, tree)->equals(this->val$pos);
}

ArgumentAttr$1::ArgumentAttr$1() {
}

$Class* ArgumentAttr$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/ArgumentAttr;", nullptr, $FINAL | $SYNTHETIC, $field(ArgumentAttr$1, this$0)},
		{"val$pos", "Lcom/sun/tools/javac/comp/ArgumentAttr$UniquePos;", nullptr, $FINAL | $SYNTHETIC, $field(ArgumentAttr$1, val$pos)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/ArgumentAttr;Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/comp/ArgumentAttr$UniquePos;)V", nullptr, 0, $method(ArgumentAttr$1, init$, void, $ArgumentAttr*, $Attr*, $ArgumentAttr$UniquePos*)},
		{"needsArgumentAttr", "(Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $PROTECTED, $virtualMethod(ArgumentAttr$1, needsArgumentAttr, bool, $JCTree*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.ArgumentAttr",
		"processArg",
		"(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Ljava/util/function/Function;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.ArgumentAttr$1", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Attr$MethodAttrInfo", "com.sun.tools.javac.comp.Attr", "MethodAttrInfo", 0},
		{"com.sun.tools.javac.tree.JCTree$JCExpression", "com.sun.tools.javac.tree.JCTree", "JCExpression", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.ArgumentAttr$1",
		"com.sun.tools.javac.comp.Attr$MethodAttrInfo",
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
	$loadClass(ArgumentAttr$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ArgumentAttr$1);
	});
	return class$;
}

$Class* ArgumentAttr$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com