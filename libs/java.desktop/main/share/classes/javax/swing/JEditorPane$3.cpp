#include <javax/swing/JEditorPane$3.h>
#include <java/net/URLConnection.h>
#include <javax/swing/JEditorPane.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URLConnection = ::java::net::URLConnection;
using $JEditorPane = ::javax::swing::JEditorPane;

namespace javax {
	namespace swing {

void JEditorPane$3::init$($JEditorPane* this$0, $URLConnection* val$conn) {
	$set(this, this$0, this$0);
	$set(this, val$conn, val$conn);
}

void JEditorPane$3::run() {
	this->this$0->handleConnectionProperties(this->val$conn);
}

JEditorPane$3::JEditorPane$3() {
}

$Class* JEditorPane$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JEditorPane;", nullptr, $FINAL | $SYNTHETIC, $field(JEditorPane$3, this$0)},
		{"val$conn", "Ljava/net/URLConnection;", nullptr, $FINAL | $SYNTHETIC, $field(JEditorPane$3, val$conn)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JEditorPane;Ljava/net/URLConnection;)V", "()V", 0, $method(JEditorPane$3, init$, void, $JEditorPane*, $URLConnection*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JEditorPane$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.JEditorPane",
		"getStream",
		"(Ljava/net/URL;)Ljava/io/InputStream;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JEditorPane$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JEditorPane$3",
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
	$loadClass(JEditorPane$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JEditorPane$3);
	});
	return class$;
}

$Class* JEditorPane$3::class$ = nullptr;

	} // swing
} // javax