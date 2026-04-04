#include <DevanagariEditor.h>
#include <javax/swing/JEditorPane.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JEditorPane = ::javax::swing::JEditorPane;

void DevanagariEditor::init$() {
}

void DevanagariEditor::main($StringArray* args) {
	$$new($JEditorPane)->setText(u"राक्षस"_s);
}

DevanagariEditor::DevanagariEditor() {
}

$Class* DevanagariEditor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DevanagariEditor, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DevanagariEditor, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"DevanagariEditor",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DevanagariEditor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DevanagariEditor);
	});
	return class$;
}

$Class* DevanagariEditor::class$ = nullptr;