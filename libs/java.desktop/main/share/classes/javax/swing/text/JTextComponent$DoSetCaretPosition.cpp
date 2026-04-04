#include <javax/swing/text/JTextComponent$DoSetCaretPosition.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/Position.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $Position = ::javax::swing::text::Position;

namespace javax {
	namespace swing {
		namespace text {

void JTextComponent$DoSetCaretPosition::init$($JTextComponent* this$0, $JTextComponent* host, $Position* newPos) {
	$set(this, this$0, this$0);
	$set(this, host, host);
	$set(this, newPos, newPos);
}

void JTextComponent$DoSetCaretPosition::run() {
	$nc(this->host)->setCaretPosition($nc(this->newPos)->getOffset());
}

JTextComponent$DoSetCaretPosition::JTextComponent$DoSetCaretPosition() {
}

$Class* JTextComponent$DoSetCaretPosition::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/JTextComponent;", nullptr, $FINAL | $SYNTHETIC, $field(JTextComponent$DoSetCaretPosition, this$0)},
		{"host", "Ljavax/swing/text/JTextComponent;", nullptr, 0, $field(JTextComponent$DoSetCaretPosition, host)},
		{"newPos", "Ljavax/swing/text/Position;", nullptr, 0, $field(JTextComponent$DoSetCaretPosition, newPos)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/JTextComponent;Ljavax/swing/text/JTextComponent;Ljavax/swing/text/Position;)V", nullptr, 0, $method(JTextComponent$DoSetCaretPosition, init$, void, $JTextComponent*, $JTextComponent*, $Position*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JTextComponent$DoSetCaretPosition, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.JTextComponent$DoSetCaretPosition", "javax.swing.text.JTextComponent", "DoSetCaretPosition", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.JTextComponent$DoSetCaretPosition",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.JTextComponent"
	};
	$loadClass(JTextComponent$DoSetCaretPosition, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTextComponent$DoSetCaretPosition);
	});
	return class$;
}

$Class* JTextComponent$DoSetCaretPosition::class$ = nullptr;

		} // text
	} // swing
} // javax