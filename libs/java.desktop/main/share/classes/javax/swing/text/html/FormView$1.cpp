#include <javax/swing/text/html/FormView$1.h>
#include <java/awt/Component.h>
#include <java/io/IOException.h>
#include <java/net/URL.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/HyperlinkEvent.h>
#include <javax/swing/text/html/FormSubmitEvent.h>
#include <javax/swing/text/html/FormView.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $JEditorPane = ::javax::swing::JEditorPane;
using $UIManager = ::javax::swing::UIManager;
using $FormSubmitEvent = ::javax::swing::text::html::FormSubmitEvent;
using $FormView = ::javax::swing::text::html::FormView;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void FormView$1::init$($FormView* this$0, $FormSubmitEvent* val$fse, $JEditorPane* val$c, $URL* val$url) {
	$set(this, this$0, this$0);
	$set(this, val$fse, val$fse);
	$set(this, val$c, val$c);
	$set(this, val$url, val$url);
}

void FormView$1::run() {
	if (this->val$fse != nullptr) {
		$nc(this->val$c)->fireHyperlinkUpdate(this->val$fse);
	} else {
		try {
			$nc(this->val$c)->setPage(this->val$url);
		} catch ($IOException& e) {
			$$nc($UIManager::getLookAndFeel())->provideErrorFeedback(this->val$c);
		}
	}
}

FormView$1::FormView$1() {
}

$Class* FormView$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/html/FormView;", nullptr, $FINAL | $SYNTHETIC, $field(FormView$1, this$0)},
		{"val$url", "Ljava/net/URL;", nullptr, $FINAL | $SYNTHETIC, $field(FormView$1, val$url)},
		{"val$c", "Ljavax/swing/JEditorPane;", nullptr, $FINAL | $SYNTHETIC, $field(FormView$1, val$c)},
		{"val$fse", "Ljavax/swing/text/html/FormSubmitEvent;", nullptr, $FINAL | $SYNTHETIC, $field(FormView$1, val$fse)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/html/FormView;Ljavax/swing/text/html/FormSubmitEvent;Ljavax/swing/JEditorPane;Ljava/net/URL;)V", "()V", 0, $method(FormView$1, init$, void, $FormView*, $FormSubmitEvent*, $JEditorPane*, $URL*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(FormView$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.text.html.FormView",
		"submitData",
		"(Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.FormView$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.FormView$1",
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
		"javax.swing.text.html.FormView"
	};
	$loadClass(FormView$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormView$1);
	});
	return class$;
}

$Class* FormView$1::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax