#include <HeadlessJTextPane.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextPane = ::javax::swing::JTextPane;

void HeadlessJTextPane::init$() {
}

void HeadlessJTextPane::main($StringArray* args) {
	$var($JTextPane, tp, nullptr);
	$assign(tp, $new($JTextPane));
	tp->getEditorKit();
	tp->setContentType("text/html"_s);
	tp->getContentType();
	tp->setText("Merry Parrot"_s);
	tp->getText();
	tp->getDocument();
}

HeadlessJTextPane::HeadlessJTextPane() {
}

$Class* HeadlessJTextPane::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HeadlessJTextPane, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(HeadlessJTextPane, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"HeadlessJTextPane",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(HeadlessJTextPane, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HeadlessJTextPane);
	});
	return class$;
}

$Class* HeadlessJTextPane::class$ = nullptr;