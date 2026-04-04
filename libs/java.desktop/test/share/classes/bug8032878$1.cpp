#include <bug8032878$1.h>
#include <bug8032878.h>
#include <java/awt/Component.h>
#include <javax/swing/ComboBoxEditor.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $bug8032878 = ::bug8032878;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextComponent = ::javax::swing::text::JTextComponent;

void bug8032878$1::init$($bug8032878* this$0) {
	$set(this, this$0, this$0);
}

void bug8032878$1::run() {
	$useLocalObjectStack();
	$set(this->this$0, text, $$sure($JTextComponent, $$nc($nc(this->this$0->cb)->getEditor())->getEditorComponent())->getText());
}

bug8032878$1::bug8032878$1() {
}

$Class* bug8032878$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug8032878;", nullptr, $FINAL | $SYNTHETIC, $field(bug8032878$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug8032878;)V", nullptr, 0, $method(bug8032878$1, init$, void, $bug8032878*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8032878$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8032878",
		"checkResult",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8032878$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8032878$1",
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
		"bug8032878"
	};
	$loadClass(bug8032878$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8032878$1);
	});
	return class$;
}

$Class* bug8032878$1::class$ = nullptr;