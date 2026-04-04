#include <javax/swing/JEditorPane$PageLoader$1.h>
#include <java/net/URL.h>
#include <javax/swing/JEditorPane$PageLoader.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JEditorPane$PageLoader = ::javax::swing::JEditorPane$PageLoader;

namespace javax {
	namespace swing {

void JEditorPane$PageLoader$1::init$($JEditorPane$PageLoader* this$1) {
	$set(this, this$1, this$1);
}

void JEditorPane$PageLoader$1::run() {
	$set(this->this$1, doc, $nc(this->this$1->this$0)->initializeModel($nc(this->this$1->this$0)->kit, this->this$1->page));
	this->this$1->this$0->setDocument(this->this$1->doc);
}

JEditorPane$PageLoader$1::JEditorPane$PageLoader$1() {
}

$Class* JEditorPane$PageLoader$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljavax/swing/JEditorPane$PageLoader;", nullptr, $FINAL | $SYNTHETIC, $field(JEditorPane$PageLoader$1, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JEditorPane$PageLoader;)V", nullptr, 0, $method(JEditorPane$PageLoader$1, init$, void, $JEditorPane$PageLoader*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JEditorPane$PageLoader$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.JEditorPane$PageLoader",
		"doInBackground",
		"()Ljava/net/URL;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JEditorPane$PageLoader", "javax.swing.JEditorPane", "PageLoader", 0},
		{"javax.swing.JEditorPane$PageLoader$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JEditorPane$PageLoader$1",
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
	$loadClass(JEditorPane$PageLoader$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JEditorPane$PageLoader$1);
	});
	return class$;
}

$Class* JEditorPane$PageLoader$1::class$ = nullptr;

	} // swing
} // javax