#include <javax/swing/text/html/HTMLEditorKit$1.h>
#include <java/io/InputStream.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void HTMLEditorKit$1::init$($String* val$name) {
	$set(this, val$name, val$name);
}

$Object* HTMLEditorKit$1::run() {
	$beforeCallerSensitive();
	$load($HTMLEditorKit);
	return $HTMLEditorKit::class$->getResourceAsStream(this->val$name);
}

HTMLEditorKit$1::HTMLEditorKit$1() {
}

$Class* HTMLEditorKit$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(HTMLEditorKit$1, val$name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(HTMLEditorKit$1, init$, void, $String*)},
		{"run", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(HTMLEditorKit$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.text.html.HTMLEditorKit",
		"getResourceAsStream",
		"(Ljava/lang/String;)Ljava/io/InputStream;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.HTMLEditorKit$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.HTMLEditorKit$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/io/InputStream;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.html.HTMLEditorKit"
	};
	$loadClass(HTMLEditorKit$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HTMLEditorKit$1);
	});
	return class$;
}

$Class* HTMLEditorKit$1::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax