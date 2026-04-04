#include <bug4714674$1.h>
#include <bug4714674.h>
#include <java/io/IOException.h>
#include <java/lang/Error.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/Document.h>
#include <jcpp.h>

using $bug4714674 = ::bug4714674;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JEditorPane = ::javax::swing::JEditorPane;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;

void bug4714674$1::init$($bug4714674* this$0, $String* val$baseURL) {
	$set(this, this$0, this$0);
	$set(this, val$baseURL, val$baseURL);
}

void bug4714674$1::run() {
	$useLocalObjectStack();
	try {
		$var($JEditorPane, pane, $new($JEditorPane));
		$$sure($AbstractDocument, pane->getDocument())->setAsynchronousLoadPriority(1);
		pane->setPage(this->val$baseURL);
	} catch ($IOException& e) {
		$throwNew($Error, e);
	}
}

bug4714674$1::bug4714674$1() {
}

$Class* bug4714674$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug4714674;", nullptr, $FINAL | $SYNTHETIC, $field(bug4714674$1, this$0)},
		{"val$baseURL", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(bug4714674$1, val$baseURL)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4714674;Ljava/lang/String;)V", "()V", 0, $method(bug4714674$1, init$, void, $bug4714674*, $String*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4714674$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4714674",
		"test",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4714674$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4714674$1",
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
		"bug4714674"
	};
	$loadClass(bug4714674$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4714674$1);
	});
	return class$;
}

$Class* bug4714674$1::class$ = nullptr;