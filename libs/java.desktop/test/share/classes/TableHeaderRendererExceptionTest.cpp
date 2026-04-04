#include <TableHeaderRendererExceptionTest.h>
#include <java/awt/Component.h>
#include <javax/swing/JTable.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableCellRenderer.h>
#include <jcpp.h>

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTable = ::javax::swing::JTable;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $JTableHeader = ::javax::swing::table::JTableHeader;

void TableHeaderRendererExceptionTest::init$() {
}

void TableHeaderRendererExceptionTest::main($StringArray* args) {
	$useLocalObjectStack();
	$var($UIManager$LookAndFeelInfoArray, lookAndFeelArray, $UIManager::getInstalledLookAndFeels());
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, lookAndFeelArray);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeelItem, arr$->get(i$));
			{
				$var($String, lookAndFeelString, $nc(lookAndFeelItem)->getClassName());
				try {
					$UIManager::setLookAndFeel(lookAndFeelString);
				} catch ($UnsupportedLookAndFeelException& ignored) {
					continue;
				}
				$var($JTableHeader, header, $new($JTableHeader));
				$$nc(header->getDefaultRenderer())->getTableCellRendererComponent(nullptr, " test "_s, true, true, -1, 0);
			}
		}
	}
}

TableHeaderRendererExceptionTest::TableHeaderRendererExceptionTest() {
}

$Class* TableHeaderRendererExceptionTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TableHeaderRendererExceptionTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TableHeaderRendererExceptionTest, main, void, $StringArray*), "java.lang.Throwable"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TableHeaderRendererExceptionTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TableHeaderRendererExceptionTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TableHeaderRendererExceptionTest);
	});
	return class$;
}

$Class* TableHeaderRendererExceptionTest::class$ = nullptr;