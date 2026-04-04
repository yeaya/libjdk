#include <TestCaretPosition$1.h>
#include <TestCaretPosition.h>
#include <java/awt/Point.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/lang/Math.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $TestCaretPosition = ::TestCaretPosition;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Caret = ::javax::swing::text::Caret;

void TestCaretPosition$1::init$() {
}

void TestCaretPosition$1::mouseClicked($MouseEvent* e) {
}

void TestCaretPosition$1::mousePressed($MouseEvent* e) {
	$useLocalObjectStack();
	try {
		$init($TestCaretPosition);
		$var($Caret, caret, $nc($TestCaretPosition::jTextArea1)->getCaret());
		$var($Rectangle2D, rect, $nc($TestCaretPosition::jTextArea1)->modelToView2D($nc(caret)->getDot()));
		int32_t var$0 = $nc($($nc(e)->getPoint()))->x;
		if ($Math::abs(var$0 - $nc(rect)->getX()) > 5) {
			$nc($System::out)->println($$str({"mouse point "_s, $(e->getPoint())}));
			$System::out->println($$str({"caret position "_s, rect}));
			$throwNew($RuntimeException, " Wrong caret position"_s);
		}
	} catch ($BadLocationException& ex) {
	}
}

void TestCaretPosition$1::mouseReleased($MouseEvent* e) {
}

void TestCaretPosition$1::mouseEntered($MouseEvent* e) {
}

void TestCaretPosition$1::mouseExited($MouseEvent* e) {
}

TestCaretPosition$1::TestCaretPosition$1() {
}

$Class* TestCaretPosition$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TestCaretPosition$1, init$, void)},
		{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(TestCaretPosition$1, mouseClicked, void, $MouseEvent*)},
		{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(TestCaretPosition$1, mouseEntered, void, $MouseEvent*)},
		{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(TestCaretPosition$1, mouseExited, void, $MouseEvent*)},
		{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(TestCaretPosition$1, mousePressed, void, $MouseEvent*)},
		{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(TestCaretPosition$1, mouseReleased, void, $MouseEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestCaretPosition",
		"createUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestCaretPosition$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestCaretPosition$1",
		"java.lang.Object",
		"java.awt.event.MouseListener",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestCaretPosition"
	};
	$loadClass(TestCaretPosition$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestCaretPosition$1);
	});
	return class$;
}

$Class* TestCaretPosition$1::class$ = nullptr;