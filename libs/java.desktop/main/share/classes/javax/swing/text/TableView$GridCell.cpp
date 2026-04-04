#include <javax/swing/text/TableView$GridCell.h>
#include <javax/swing/text/TableView.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace text {

$Class* TableView$GridCell::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getColumnCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableView$GridCell, getColumnCount, int32_t)},
		{"getGridColumn", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableView$GridCell, getGridColumn, int32_t)},
		{"getGridRow", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableView$GridCell, getGridRow, int32_t)},
		{"getRowCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableView$GridCell, getRowCount, int32_t)},
		{"setGridLocation", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableView$GridCell, setGridLocation, void, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.TableView$GridCell", "javax.swing.text.TableView", "GridCell", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"javax.swing.text.TableView$GridCell",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.TableView"
	};
	$loadClass(TableView$GridCell, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TableView$GridCell);
	});
	return class$;
}

$Class* TableView$GridCell::class$ = nullptr;

		} // text
	} // swing
} // javax