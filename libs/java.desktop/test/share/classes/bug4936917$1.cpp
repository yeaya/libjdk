#include <bug4936917$1.h>
#include <bug4936917.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Insets.h>
#include <java/awt/Window.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug4936917 = ::bug4936917;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;

void bug4936917$1::init$($bug4936917* this$0) {
	$set(this, this$0, this$0);
}

void bug4936917$1::run() {
	$useLocalObjectStack();
	$set(this->this$0, editorPane, $new($JEditorPane, "text/html"_s, ""_s));
	this->this$0->editorPane->setEditable(false);
	$nc(this->this$0->editorPane)->setMargin($$new($Insets, 0, 0, 0, 0));
	$nc(this->this$0->editorPane)->setText(this->this$0->text);
	$assignStatic($bug4936917::f, $new($JFrame));
	$$nc($bug4936917::f->getContentPane())->add(this->this$0->editorPane);
	$nc($bug4936917::f)->setSize(600, 400);
	$nc($bug4936917::f)->setVisible(true);
}

bug4936917$1::bug4936917$1() {
}

$Class* bug4936917$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug4936917;", nullptr, $FINAL | $SYNTHETIC, $field(bug4936917$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4936917;)V", nullptr, 0, $method(bug4936917$1, init$, void, $bug4936917*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4936917$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4936917",
		"init",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4936917$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4936917$1",
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
		"bug4936917"
	};
	$loadClass(bug4936917$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4936917$1);
	});
	return class$;
}

$Class* bug4936917$1::class$ = nullptr;