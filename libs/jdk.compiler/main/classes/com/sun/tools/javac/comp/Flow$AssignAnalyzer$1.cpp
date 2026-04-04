#include <com/sun/tools/javac/comp/Flow$AssignAnalyzer$1.h>
#include <com/sun/tools/javac/comp/Flow$AssignAnalyzer.h>
#include <com/sun/tools/javac/comp/Flow$BaseAnalyzer$PendingExit.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Bits.h>
#include <jcpp.h>

using $Flow$AssignAnalyzer = ::com::sun::tools::javac::comp::Flow$AssignAnalyzer;
using $Flow$BaseAnalyzer$PendingExit = ::com::sun::tools::javac::comp::Flow$BaseAnalyzer$PendingExit;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $Bits = ::com::sun::tools::javac::util::Bits;
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

void Flow$AssignAnalyzer$1::init$($Flow$AssignAnalyzer* this$1, $JCTree* tree, $Bits* val$initsAfterBreakWhenTrue, $Bits* val$initsAfterBreakWhenFalse, $Bits* val$uninitsAfterBreakWhenTrue, $Bits* val$uninitsAfterBreakWhenFalse) {
	$set(this, this$1, this$1);
	$set(this, val$initsAfterBreakWhenTrue, val$initsAfterBreakWhenTrue);
	$set(this, val$initsAfterBreakWhenFalse, val$initsAfterBreakWhenFalse);
	$set(this, val$uninitsAfterBreakWhenTrue, val$uninitsAfterBreakWhenTrue);
	$set(this, val$uninitsAfterBreakWhenFalse, val$uninitsAfterBreakWhenFalse);
	$Flow$BaseAnalyzer$PendingExit::init$(tree);
}

void Flow$AssignAnalyzer$1::resolveJump() {
	if (!$nc(this->this$1->inits)->isReset()) {
		this->this$1->split(true);
	}
	$nc(this->this$1->initsWhenTrue)->andSet(this->val$initsAfterBreakWhenTrue);
	$nc(this->this$1->initsWhenFalse)->andSet(this->val$initsAfterBreakWhenFalse);
	$nc(this->this$1->uninitsWhenTrue)->andSet(this->val$uninitsAfterBreakWhenTrue);
	$nc(this->this$1->uninitsWhenFalse)->andSet(this->val$uninitsAfterBreakWhenFalse);
}

Flow$AssignAnalyzer$1::Flow$AssignAnalyzer$1() {
}

$Class* Flow$AssignAnalyzer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lcom/sun/tools/javac/comp/Flow$AssignAnalyzer;", nullptr, $FINAL | $SYNTHETIC, $field(Flow$AssignAnalyzer$1, this$1)},
		{"val$uninitsAfterBreakWhenFalse", "Lcom/sun/tools/javac/util/Bits;", nullptr, $FINAL | $SYNTHETIC, $field(Flow$AssignAnalyzer$1, val$uninitsAfterBreakWhenFalse)},
		{"val$uninitsAfterBreakWhenTrue", "Lcom/sun/tools/javac/util/Bits;", nullptr, $FINAL | $SYNTHETIC, $field(Flow$AssignAnalyzer$1, val$uninitsAfterBreakWhenTrue)},
		{"val$initsAfterBreakWhenFalse", "Lcom/sun/tools/javac/util/Bits;", nullptr, $FINAL | $SYNTHETIC, $field(Flow$AssignAnalyzer$1, val$initsAfterBreakWhenFalse)},
		{"val$initsAfterBreakWhenTrue", "Lcom/sun/tools/javac/util/Bits;", nullptr, $FINAL | $SYNTHETIC, $field(Flow$AssignAnalyzer$1, val$initsAfterBreakWhenTrue)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Flow$AssignAnalyzer;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/util/Bits;Lcom/sun/tools/javac/util/Bits;Lcom/sun/tools/javac/util/Bits;Lcom/sun/tools/javac/util/Bits;)V", nullptr, 0, $method(Flow$AssignAnalyzer$1, init$, void, $Flow$AssignAnalyzer*, $JCTree*, $Bits*, $Bits*, $Bits*, $Bits*)},
		{"resolveJump", "()V", nullptr, 0, $virtualMethod(Flow$AssignAnalyzer$1, resolveJump, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Flow$AssignAnalyzer",
		"visitYield",
		"(Lcom/sun/tools/javac/tree/JCTree$JCYield;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Flow$AssignAnalyzer", "com.sun.tools.javac.comp.Flow", "AssignAnalyzer", $PUBLIC},
		{"com.sun.tools.javac.comp.Flow$AssignAnalyzer$1", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Flow$BaseAnalyzer", "com.sun.tools.javac.comp.Flow", "BaseAnalyzer", $STATIC | $ABSTRACT},
		{"com.sun.tools.javac.comp.Flow$BaseAnalyzer$PendingExit", "com.sun.tools.javac.comp.Flow$BaseAnalyzer", "PendingExit", $STATIC},
		{"com.sun.tools.javac.tree.JCTree$JCYield", "com.sun.tools.javac.tree.JCTree", "JCYield", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Flow$AssignAnalyzer$1",
		"com.sun.tools.javac.comp.Flow$BaseAnalyzer$PendingExit",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Flow"
	};
	$loadClass(Flow$AssignAnalyzer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Flow$AssignAnalyzer$1);
	});
	return class$;
}

$Class* Flow$AssignAnalyzer$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com