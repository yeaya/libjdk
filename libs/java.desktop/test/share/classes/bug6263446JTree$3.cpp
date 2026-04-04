#include <bug6263446JTree$3.h>
#include <bug6263446JTree.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/NoSuchFieldException.h>
#include <java/lang/reflect/Field.h>
#include <javax/swing/DefaultCellEditor.h>
#include <javax/swing/JTree.h>
#include <javax/swing/tree/DefaultTreeCellEditor.h>
#include <javax/swing/tree/TreeCellEditor.h>
#include <jcpp.h>

using $bug6263446JTree = ::bug6263446JTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchFieldException = ::java::lang::NoSuchFieldException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Field = ::java::lang::reflect::Field;
using $DefaultCellEditor = ::javax::swing::DefaultCellEditor;
using $DefaultTreeCellEditor = ::javax::swing::tree::DefaultTreeCellEditor;

void bug6263446JTree$3::init$(int32_t val$clicks) {
	this->val$clicks = val$clicks;
}

void bug6263446JTree$3::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		$init($bug6263446JTree);
		$var($DefaultTreeCellEditor, editor, $cast($DefaultTreeCellEditor, $nc($bug6263446JTree::tree)->getCellEditor()));
		$load($DefaultTreeCellEditor);
		$var($Field, field, $DefaultTreeCellEditor::class$->getDeclaredField("realEditor"_s));
		$nc(field)->setAccessible(true);
		$var($DefaultCellEditor, ce, $cast($DefaultCellEditor, field->get(editor)));
		$nc(ce)->setClickCountToStart(this->val$clicks);
	} catch ($IllegalAccessException& e) {
		$throwNew($RuntimeException, e);
	} catch ($NoSuchFieldException& e) {
		$throwNew($RuntimeException, e);
	}
}

bug6263446JTree$3::bug6263446JTree$3() {
}

$Class* bug6263446JTree$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$clicks", "I", nullptr, $FINAL | $SYNTHETIC, $field(bug6263446JTree$3, val$clicks)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", "()V", 0, $method(bug6263446JTree$3, init$, void, int32_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6263446JTree$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6263446JTree",
		"setClickCountToStart",
		"(I)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6263446JTree$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6263446JTree$3",
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
	$loadClass(bug6263446JTree$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6263446JTree$3);
	});
	return class$;
}

$Class* bug6263446JTree$3::class$ = nullptr;