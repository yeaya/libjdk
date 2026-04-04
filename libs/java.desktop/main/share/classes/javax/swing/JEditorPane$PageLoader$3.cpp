#include <javax/swing/JEditorPane$PageLoader$3.h>
#include <java/net/URL.h>
#include <javax/swing/JEditorPane$PageLoader.h>
#include <javax/swing/JEditorPane.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JEditorPane$PageLoader = ::javax::swing::JEditorPane$PageLoader;

namespace javax {
	namespace swing {

void JEditorPane$PageLoader$3::init$($JEditorPane$PageLoader* this$1) {
	$set(this, this$1, this$1);
}

void JEditorPane$PageLoader$3::run() {
	$JEditorPane::access$000(this->this$1->this$0, "page"_s, this->this$1->old, this->this$1->page);
}

JEditorPane$PageLoader$3::JEditorPane$PageLoader$3() {
}

$Class* JEditorPane$PageLoader$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljavax/swing/JEditorPane$PageLoader;", nullptr, $FINAL | $SYNTHETIC, $field(JEditorPane$PageLoader$3, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JEditorPane$PageLoader;)V", nullptr, 0, $method(JEditorPane$PageLoader$3, init$, void, $JEditorPane$PageLoader*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JEditorPane$PageLoader$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.JEditorPane$PageLoader",
		"doInBackground",
		"()Ljava/net/URL;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JEditorPane$PageLoader", "javax.swing.JEditorPane", "PageLoader", 0},
		{"javax.swing.JEditorPane$PageLoader$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JEditorPane$PageLoader$3",
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
	$loadClass(JEditorPane$PageLoader$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JEditorPane$PageLoader$3);
	});
	return class$;
}

$Class* JEditorPane$PageLoader$3::class$ = nullptr;

	} // swing
} // javax