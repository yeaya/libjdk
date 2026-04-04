#include <bug4242228$1$1.h>
#include <bug4242228$1.h>
#include <bug4242228.h>
#include <java/awt/Component.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/event/ChangeEvent.h>
#include <jcpp.h>

using $bug4242228 = ::bug4242228;
using $bug4242228$1 = ::bug4242228$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTextPane = ::javax::swing::JTextPane;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;

void bug4242228$1$1::init$($bug4242228$1* this$0, $JScrollPane* val$editorPane, $JTextPane* val$htmlEditor, $JTextPane* val$sourceEditor) {
	$set(this, this$0, this$0);
	$set(this, val$editorPane, val$editorPane);
	$set(this, val$htmlEditor, val$htmlEditor);
	$set(this, val$sourceEditor, val$sourceEditor);
}

void bug4242228$1$1::stateChanged($ChangeEvent* e) {
	$useLocalObjectStack();
	$init($bug4242228);
	if ($equals($nc($bug4242228::tabPane)->getSelectedComponent(), this->val$editorPane)) {
		$nc(this->val$htmlEditor)->setText($($nc(this->val$sourceEditor)->getText()));
	} else {
		$nc(this->val$sourceEditor)->setText($($nc(this->val$htmlEditor)->getText()));
	}
}

bug4242228$1$1::bug4242228$1$1() {
}

$Class* bug4242228$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug4242228$1;", nullptr, $FINAL | $SYNTHETIC, $field(bug4242228$1$1, this$0)},
		{"val$sourceEditor", "Ljavax/swing/JTextPane;", nullptr, $FINAL | $SYNTHETIC, $field(bug4242228$1$1, val$sourceEditor)},
		{"val$htmlEditor", "Ljavax/swing/JTextPane;", nullptr, $FINAL | $SYNTHETIC, $field(bug4242228$1$1, val$htmlEditor)},
		{"val$editorPane", "Ljavax/swing/JScrollPane;", nullptr, $FINAL | $SYNTHETIC, $field(bug4242228$1$1, val$editorPane)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4242228$1;Ljavax/swing/JScrollPane;Ljavax/swing/JTextPane;Ljavax/swing/JTextPane;)V", "()V", 0, $method(bug4242228$1$1, init$, void, $bug4242228$1*, $JScrollPane*, $JTextPane*, $JTextPane*)},
		{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug4242228$1$1, stateChanged, void, $ChangeEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4242228$1",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4242228$1", nullptr, nullptr, 0},
		{"bug4242228$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4242228$1$1",
		"java.lang.Object",
		"javax.swing.event.ChangeListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug4242228"
	};
	$loadClass(bug4242228$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4242228$1$1);
	});
	return class$;
}

$Class* bug4242228$1$1::class$ = nullptr;