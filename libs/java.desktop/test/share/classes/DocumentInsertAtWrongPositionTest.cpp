#include <DocumentInsertAtWrongPositionTest.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JTextArea = ::javax::swing::JTextArea;
using $JTextField = ::javax::swing::JTextField;
using $JTextPane = ::javax::swing::JTextPane;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;

void DocumentInsertAtWrongPositionTest::init$() {
}

void DocumentInsertAtWrongPositionTest::main($StringArray* args) {
	$useLocalObjectStack();
	$var($JTextField, te, $new($JTextField, "1234567890"_s));
	$var($JTextPane, tp, $new($JTextPane));
	tp->setText("1234567890"_s);
	$var($JTextArea, ta, $new($JTextArea, "1234567890"_s));
	try {
		ta->insert("abc"_s, 11);
		$throwNew($RuntimeException, "failed"_s);
	} catch ($IllegalArgumentException& e) {
	}
	try {
		$$nc(te->getDocument())->insertString(11, "abc"_s, $$new($SimpleAttributeSet));
		$throwNew($RuntimeException, "failed"_s);
	} catch ($BadLocationException& e) {
	}
	try {
		$$nc(tp->getDocument())->insertString(11, "abc"_s, $$new($SimpleAttributeSet));
		$throwNew($RuntimeException, "failed"_s);
	} catch ($BadLocationException& e) {
	}
}

DocumentInsertAtWrongPositionTest::DocumentInsertAtWrongPositionTest() {
}

$Class* DocumentInsertAtWrongPositionTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DocumentInsertAtWrongPositionTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DocumentInsertAtWrongPositionTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"DocumentInsertAtWrongPositionTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DocumentInsertAtWrongPositionTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DocumentInsertAtWrongPositionTest);
	});
	return class$;
}

$Class* DocumentInsertAtWrongPositionTest::class$ = nullptr;