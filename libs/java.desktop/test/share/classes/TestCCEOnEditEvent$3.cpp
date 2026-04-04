#include <TestCCEOnEditEvent$3.h>
#include <TestCCEOnEditEvent$3$1.h>
#include <TestCCEOnEditEvent.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/text/Document.h>
#include <jcpp.h>

using $TestCCEOnEditEvent = ::TestCCEOnEditEvent;
using $TestCCEOnEditEvent$3$1 = ::TestCCEOnEditEvent$3$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextArea = ::javax::swing::JTextArea;
using $Document = ::javax::swing::text::Document;

void TestCCEOnEditEvent$3::init$($TestCCEOnEditEvent* this$0, $String* arg0) {
	$set(this, this$0, this$0);
	$JTextArea::init$(arg0);
}

$Document* TestCCEOnEditEvent$3::createDefaultModel() {
	return $new($TestCCEOnEditEvent$3$1, this);
}

TestCCEOnEditEvent$3::TestCCEOnEditEvent$3() {
}

$Class* TestCCEOnEditEvent$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTestCCEOnEditEvent;", nullptr, $FINAL | $SYNTHETIC, $field(TestCCEOnEditEvent$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestCCEOnEditEvent;Ljava/lang/String;)V", nullptr, 0, $method(TestCCEOnEditEvent$3, init$, void, $TestCCEOnEditEvent*, $String*)},
		{"createDefaultModel", "()Ljavax/swing/text/Document;", nullptr, $PROTECTED, $virtualMethod(TestCCEOnEditEvent$3, createDefaultModel, $Document*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestCCEOnEditEvent",
		"createTextArea",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestCCEOnEditEvent$3", nullptr, nullptr, 0},
		{"TestCCEOnEditEvent$3$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestCCEOnEditEvent$3",
		"javax.swing.JTextArea",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestCCEOnEditEvent"
	};
	$loadClass(TestCCEOnEditEvent$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TestCCEOnEditEvent$3));
	});
	return class$;
}

$Class* TestCCEOnEditEvent$3::class$ = nullptr;