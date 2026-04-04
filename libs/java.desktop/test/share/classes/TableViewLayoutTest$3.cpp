#include <TableViewLayoutTest$3.h>
#include <TableViewLayoutTest.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $TableViewLayoutTest = ::TableViewLayoutTest;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TableViewLayoutTest$3::init$() {
}

void TableViewLayoutTest$3::run() {
	$init($TableViewLayoutTest);
	$assignStatic($TableViewLayoutTest::isI18n, $Boolean::valueOf(!$nc($TableViewLayoutTest::isI18n)->booleanValue()));
	$$nc($nc($TableViewLayoutTest::edit)->getDocument())->putProperty("i18n"_s, $TableViewLayoutTest::isI18n);
	$nc($TableViewLayoutTest::edit)->select(11, 12);
	$nc($TableViewLayoutTest::edit)->replaceSelection("1"_s);
	$nc($TableViewLayoutTest::edit)->setCaretPosition(6);
	$TableViewLayoutTest::xCarBTab = $TableViewLayoutTest::xCaret;
	$nc($TableViewLayoutTest::edit)->setCaretPosition(91);
	$TableViewLayoutTest::xCarETab = $TableViewLayoutTest::xCaret;
	$nc($TableViewLayoutTest::edit)->setCaretPosition(74);
	$TableViewLayoutTest::yCarLLTab = $TableViewLayoutTest::yCaret;
	$nc($TableViewLayoutTest::edit)->setCaretPosition(11);
	$TableViewLayoutTest::yCarFLTab = $TableViewLayoutTest::yCaret;
}

TableViewLayoutTest$3::TableViewLayoutTest$3() {
}

$Class* TableViewLayoutTest$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TableViewLayoutTest$3, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TableViewLayoutTest$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TableViewLayoutTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TableViewLayoutTest$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TableViewLayoutTest$3",
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
	$loadClass(TableViewLayoutTest$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TableViewLayoutTest$3);
	});
	return class$;
}

$Class* TableViewLayoutTest$3::class$ = nullptr;