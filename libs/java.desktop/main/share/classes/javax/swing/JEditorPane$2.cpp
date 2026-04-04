#include <javax/swing/JEditorPane$2.h>
#include <javax/swing/JEditorPane.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JEditorPane = ::javax::swing::JEditorPane;

namespace javax {
	namespace swing {

void JEditorPane$2::init$($JEditorPane* this$0, $String* val$reference) {
	$set(this, this$0, this$0);
	$set(this, val$reference, val$reference);
}

void JEditorPane$2::run() {
	this->this$0->scrollToReference(this->val$reference);
}

JEditorPane$2::JEditorPane$2() {
}

$Class* JEditorPane$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JEditorPane;", nullptr, $FINAL | $SYNTHETIC, $field(JEditorPane$2, this$0)},
		{"val$reference", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(JEditorPane$2, val$reference)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JEditorPane;Ljava/lang/String;)V", "()V", 0, $method(JEditorPane$2, init$, void, $JEditorPane*, $String*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JEditorPane$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.JEditorPane",
		"setPage",
		"(Ljava/net/URL;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JEditorPane$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JEditorPane$2",
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
		"javax.swing.JEditorPane"
	};
	$loadClass(JEditorPane$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JEditorPane$2);
	});
	return class$;
}

$Class* JEditorPane$2::class$ = nullptr;

	} // swing
} // javax