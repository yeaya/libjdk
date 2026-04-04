#include <TableViewLayoutTest$4.h>
#include <TableViewLayoutTest.h>
#include <java/lang/Math.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $TableViewLayoutTest = ::TableViewLayoutTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

void TableViewLayoutTest$4::init$() {
}

void TableViewLayoutTest$4::run() {
	$init($TableViewLayoutTest);
	$nc($TableViewLayoutTest::edit)->setCaretPosition(6);
	$TableViewLayoutTest::dxCarBTab = $Math::abs($TableViewLayoutTest::xCarBTab - $TableViewLayoutTest::xCaret);
	$nc($TableViewLayoutTest::edit)->setCaretPosition(91);
	$TableViewLayoutTest::dxCarETab = $Math::abs($TableViewLayoutTest::xCarETab - $TableViewLayoutTest::xCaret);
	$nc($TableViewLayoutTest::edit)->setCaretPosition(74);
	$TableViewLayoutTest::dyCarLLTab = $Math::abs($TableViewLayoutTest::yCarLLTab - $TableViewLayoutTest::yCaret);
	$nc($TableViewLayoutTest::edit)->setCaretPosition(11);
	$TableViewLayoutTest::dyCarFLTab = $Math::abs($TableViewLayoutTest::yCarFLTab - $TableViewLayoutTest::yCaret);
	$nc($TableViewLayoutTest::edit)->setCaretPosition(74);
	$TableViewLayoutTest::yCarLLTab = $TableViewLayoutTest::yCaret;
	$nc($TableViewLayoutTest::edit)->setCaretPosition(11);
	$TableViewLayoutTest::yCarFLTab = $TableViewLayoutTest::yCaret;
}

TableViewLayoutTest$4::TableViewLayoutTest$4() {
}

$Class* TableViewLayoutTest$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TableViewLayoutTest$4, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TableViewLayoutTest$4, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TableViewLayoutTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TableViewLayoutTest$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TableViewLayoutTest$4",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TableViewLayoutTest"
	};
	$loadClass(TableViewLayoutTest$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TableViewLayoutTest$4);
	});
	return class$;
}

$Class* TableViewLayoutTest$4::class$ = nullptr;