#include <javax/swing/JEditorPane$PageLoader$2.h>
#include <java/net/URL.h>
#include <javax/swing/JEditorPane$PageLoader.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $JEditorPane$PageLoader = ::javax::swing::JEditorPane$PageLoader;
using $Document = ::javax::swing::text::Document;

namespace javax {
	namespace swing {

void JEditorPane$PageLoader$2::init$($JEditorPane$PageLoader* this$1) {
	$set(this, this$1, this$1);
}

void JEditorPane$PageLoader$2::run() {
	$useLocalObjectStack();
	$init($Document);
	$var($URL, u, $cast($URL, $$nc($nc(this->this$1->this$0)->getDocument())->getProperty($Document::StreamDescriptionProperty)));
	$var($String, ref, $nc(u)->getRef());
	this->this$1->this$0->scrollToReference(ref);
}

JEditorPane$PageLoader$2::JEditorPane$PageLoader$2() {
}

$Class* JEditorPane$PageLoader$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljavax/swing/JEditorPane$PageLoader;", nullptr, $FINAL | $SYNTHETIC, $field(JEditorPane$PageLoader$2, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JEditorPane$PageLoader;)V", nullptr, 0, $method(JEditorPane$PageLoader$2, init$, void, $JEditorPane$PageLoader*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JEditorPane$PageLoader$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.JEditorPane$PageLoader",
		"doInBackground",
		"()Ljava/net/URL;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JEditorPane$PageLoader", "javax.swing.JEditorPane", "PageLoader", 0},
		{"javax.swing.JEditorPane$PageLoader$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JEditorPane$PageLoader$2",
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
	$loadClass(JEditorPane$PageLoader$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JEditorPane$PageLoader$2);
	});
	return class$;
}

$Class* JEditorPane$PageLoader$2::class$ = nullptr;

	} // swing
} // javax