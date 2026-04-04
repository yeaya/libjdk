#include <TableViewLayoutTest$1.h>
#include <TableViewLayoutTest.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/event/CaretEvent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $TableViewLayoutTest = ::TableViewLayoutTest;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $CaretEvent = ::javax::swing::event::CaretEvent;
using $TextUI = ::javax::swing::plaf::TextUI;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $JTextComponent = ::javax::swing::text::JTextComponent;

void TableViewLayoutTest$1::init$($TableViewLayoutTest* this$0) {
	$set(this, this$0, this$0);
}

void TableViewLayoutTest$1::caretUpdate($CaretEvent* e) {
	$useLocalObjectStack();
	$var($JTextComponent, textComp, $cast($JTextComponent, $nc(e)->getSource()));
	try {
		$var($Rectangle, rect, $$sure($TextUI, $nc(textComp)->getUI())->modelToView(textComp, e->getDot()));
		$init($TableViewLayoutTest);
		$TableViewLayoutTest::yCaret = $nc(rect)->getY();
		$TableViewLayoutTest::xCaret = rect->getX();
	} catch ($BadLocationException& ex) {
		$throwNew($RuntimeException, "Failed to get pixel position of caret"_s, ex);
	}
}

TableViewLayoutTest$1::TableViewLayoutTest$1() {
}

$Class* TableViewLayoutTest$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTableViewLayoutTest;", nullptr, $FINAL | $SYNTHETIC, $field(TableViewLayoutTest$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTableViewLayoutTest;)V", nullptr, 0, $method(TableViewLayoutTest$1, init$, void, $TableViewLayoutTest*)},
		{"caretUpdate", "(Ljavax/swing/event/CaretEvent;)V", nullptr, $PUBLIC, $virtualMethod(TableViewLayoutTest$1, caretUpdate, void, $CaretEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TableViewLayoutTest",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TableViewLayoutTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TableViewLayoutTest$1",
		"java.lang.Object",
		"javax.swing.event.CaretListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TableViewLayoutTest"
	};
	$loadClass(TableViewLayoutTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TableViewLayoutTest$1);
	});
	return class$;
}

$Class* TableViewLayoutTest$1::class$ = nullptr;