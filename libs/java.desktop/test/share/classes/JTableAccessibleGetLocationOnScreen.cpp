#include <JTableAccessibleGetLocationOnScreen.h>
#include <JTableAccessibleGetLocationOnScreen$1.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/Window.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleComponent.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleTable.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTable.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $JTableAccessibleGetLocationOnScreen$1 = ::JTableAccessibleGetLocationOnScreen$1;
using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AccessibleComponent = ::javax::accessibility::AccessibleComponent;
using $AccessibleTable = ::javax::accessibility::AccessibleTable;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JFrame = ::javax::swing::JFrame;
using $JTable = ::javax::swing::JTable;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$JFrame* JTableAccessibleGetLocationOnScreen::frame = nullptr;
$JTable* JTableAccessibleGetLocationOnScreen::table = nullptr;

void JTableAccessibleGetLocationOnScreen::init$() {
}

void JTableAccessibleGetLocationOnScreen::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($JTableAccessibleGetLocationOnScreen$1));
}

void JTableAccessibleGetLocationOnScreen::constructInEDT() {
	$useLocalObjectStack();
	$var($StringArray, columnNames, $new($StringArray, {
		"col1"_s,
		"col2"_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"row1, col1"_s,
			"row1, col2"_s
		}),
		$$new($ObjectArray, {
			"row2, col1"_s,
			"row2, col2"_s
		})
	}));
	$init(JTableAccessibleGetLocationOnScreen);
	$assignStatic(JTableAccessibleGetLocationOnScreen::frame, $new($JFrame, "JTable AccessibleTableHeader and AccessibleJTableCell test"_s));
	JTableAccessibleGetLocationOnScreen::frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$assignStatic(JTableAccessibleGetLocationOnScreen::table, $new($JTable, data, columnNames));
	$nc(JTableAccessibleGetLocationOnScreen::frame)->add(JTableAccessibleGetLocationOnScreen::table);
	$nc(JTableAccessibleGetLocationOnScreen::frame)->pack();
}

void JTableAccessibleGetLocationOnScreen::assertGetLocation() {
	$useLocalObjectStack();
	$init(JTableAccessibleGetLocationOnScreen);
	$var($AccessibleTable, accessibleTable, $cast($AccessibleTable, $nc(JTableAccessibleGetLocationOnScreen::table)->getAccessibleContext()));
	$var($AccessibleTable, header, $nc(accessibleTable)->getAccessibleColumnHeader());
	$var($AccessibleComponent, accessibleComp1, $cast($AccessibleComponent, $nc(header)->getAccessibleAt(0, 0)));
	if (nullptr != $nc(accessibleComp1)->getLocationOnScreen()) {
		$throwNew($RuntimeException, "JTable$AccessibleJTable$AccessibleJTableHeaderCell.getLocation() must be null"_s);
	}
	$var($JComponent$AccessibleJComponent, accessibleJComponent, $cast($JComponent$AccessibleJComponent, $nc(JTableAccessibleGetLocationOnScreen::table)->getAccessibleContext()));
	$var($AccessibleComponent, accessibleComp2, $cast($AccessibleComponent, $nc(accessibleJComponent)->getAccessibleChild(3)));
	if (nullptr != $nc(accessibleComp2)->getLocationOnScreen()) {
		$throwNew($RuntimeException, "JTable$AccessibleJTable$AccessibleJTableCell.getLocation() must be null"_s);
	}
}

JTableAccessibleGetLocationOnScreen::JTableAccessibleGetLocationOnScreen() {
}

$Class* JTableAccessibleGetLocationOnScreen::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(JTableAccessibleGetLocationOnScreen, frame)},
		{"table", "Ljavax/swing/JTable;", nullptr, $PRIVATE | $STATIC, $staticField(JTableAccessibleGetLocationOnScreen, table)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JTableAccessibleGetLocationOnScreen, init$, void)},
		{"assertGetLocation", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(JTableAccessibleGetLocationOnScreen, assertGetLocation, void)},
		{"constructInEDT", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(JTableAccessibleGetLocationOnScreen, constructInEDT, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(JTableAccessibleGetLocationOnScreen, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JTableAccessibleGetLocationOnScreen$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"JTableAccessibleGetLocationOnScreen",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"JTableAccessibleGetLocationOnScreen$1"
	};
	$loadClass(JTableAccessibleGetLocationOnScreen, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTableAccessibleGetLocationOnScreen);
	});
	return class$;
}

$Class* JTableAccessibleGetLocationOnScreen::class$ = nullptr;