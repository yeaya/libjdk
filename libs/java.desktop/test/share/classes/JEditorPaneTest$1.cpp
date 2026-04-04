#include <JEditorPaneTest$1.h>
#include <JEditorPaneTest.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <javax/swing/JEditorPane.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JEditorPane = ::javax::swing::JEditorPane;

void JEditorPaneTest$1::init$($File* val$file) {
	$set(this, val$file, val$file);
}

void JEditorPaneTest$1::run() {
	$useLocalObjectStack();
	$var($JEditorPane, editorPane, $new($JEditorPane));
	try {
		editorPane->setPage($($$nc($nc(this->val$file)->toURI())->toURL()));
	} catch ($IOException& ex) {
		$nc(this->val$file)->delete$();
		$throwNew($RuntimeException, $$str({"Test Failed"_s, ex}));
	}
}

JEditorPaneTest$1::JEditorPaneTest$1() {
}

$Class* JEditorPaneTest$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$file", "Ljava/io/File;", nullptr, $FINAL | $SYNTHETIC, $field(JEditorPaneTest$1, val$file)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/File;)V", "()V", 0, $method(JEditorPaneTest$1, init$, void, $File*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JEditorPaneTest$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"JEditorPaneTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JEditorPaneTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"JEditorPaneTest$1",
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
		"JEditorPaneTest"
	};
	$loadClass(JEditorPaneTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JEditorPaneTest$1);
	});
	return class$;
}

$Class* JEditorPaneTest$1::class$ = nullptr;