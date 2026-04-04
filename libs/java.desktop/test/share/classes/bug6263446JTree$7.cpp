#include <bug6263446JTree$7.h>
#include <bug6263446JTree.h>
#include <javax/swing/JTree.h>
#include <jcpp.h>

using $bug6263446JTree = ::bug6263446JTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void bug6263446JTree$7::init$(bool val$editing) {
	this->val$editing = val$editing;
}

void bug6263446JTree$7::run() {
	$init($bug6263446JTree);
	if (this->val$editing && !$nc($bug6263446JTree::tree)->isEditing()) {
		$throwNew($RuntimeException, "Tree should be editing"_s);
	}
	if (!this->val$editing && $nc($bug6263446JTree::tree)->isEditing()) {
		$throwNew($RuntimeException, "Tree should not be editing"_s);
	}
}

bug6263446JTree$7::bug6263446JTree$7() {
}

$Class* bug6263446JTree$7::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$editing", "Z", nullptr, $FINAL | $SYNTHETIC, $field(bug6263446JTree$7, val$editing)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Z)V", "()V", 0, $method(bug6263446JTree$7, init$, void, bool)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6263446JTree$7, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6263446JTree",
		"assertEditingNoTreeLock",
		"(Z)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6263446JTree$7", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6263446JTree$7",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6263446JTree"
	};
	$loadClass(bug6263446JTree$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6263446JTree$7);
	});
	return class$;
}

$Class* bug6263446JTree$7::class$ = nullptr;