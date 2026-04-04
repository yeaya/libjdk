#include <sun/swing/FilePane$3.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/FocusEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/JList.h>
#include <javax/swing/JTable.h>
#include <javax/swing/ListSelectionModel.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JList = ::javax::swing::JList;
using $JTable = ::javax::swing::JTable;

namespace sun {
	namespace swing {

void FilePane$3::init$() {
}

void FilePane$3::focusGained($FocusEvent* fe) {
	repaintSelection($($nc(fe)->getSource()));
}

void FilePane$3::focusLost($FocusEvent* fe) {
	repaintSelection($($nc(fe)->getSource()));
}

void FilePane$3::repaintSelection(Object$* source) {
	if ($instanceOf($JList, source)) {
		repaintListSelection($cast($JList, source));
	} else if ($instanceOf($JTable, source)) {
		repaintTableSelection($cast($JTable, source));
	}
}

void FilePane$3::repaintListSelection($JList* list) {
	$useLocalObjectStack();
	$var($ints, indices, $nc(list)->getSelectedIndices());
	{
		$var($ints, arr$, indices);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			int32_t i = arr$->get(i$);
			{
				$var($Rectangle, bounds, list->getCellBounds(i, i));
				list->repaint(bounds);
			}
		}
	}
}

void FilePane$3::repaintTableSelection($JTable* table) {
	$useLocalObjectStack();
	int32_t minRow = $$nc($nc(table)->getSelectionModel())->getMinSelectionIndex();
	int32_t maxRow = $$nc(table->getSelectionModel())->getMaxSelectionIndex();
	if (minRow == -1 || maxRow == -1) {
		return;
	}
	int32_t col0 = table->convertColumnIndexToView(0);
	$var($Rectangle, first, table->getCellRect(minRow, col0, false));
	$var($Rectangle, last, table->getCellRect(maxRow, col0, false));
	$var($Rectangle, dirty, $nc(first)->union$(last));
	table->repaint(dirty);
}

FilePane$3::FilePane$3() {
}

$Class* FilePane$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FilePane$3, init$, void)},
		{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(FilePane$3, focusGained, void, $FocusEvent*)},
		{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(FilePane$3, focusLost, void, $FocusEvent*)},
		{"repaintListSelection", "(Ljavax/swing/JList;)V", "(Ljavax/swing/JList<*>;)V", $PRIVATE, $method(FilePane$3, repaintListSelection, void, $JList*)},
		{"repaintSelection", "(Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(FilePane$3, repaintSelection, void, Object$*)},
		{"repaintTableSelection", "(Ljavax/swing/JTable;)V", nullptr, $PRIVATE, $method(FilePane$3, repaintTableSelection, void, $JTable*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.swing.FilePane",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.FilePane$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.FilePane$3",
		"java.lang.Object",
		"java.awt.event.FocusListener",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.swing.FilePane"
	};
	$loadClass(FilePane$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FilePane$3);
	});
	return class$;
}

$Class* FilePane$3::class$ = nullptr;

	} // swing
} // sun