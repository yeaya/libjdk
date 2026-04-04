#include <bug4235420$Table.h>
#include <bug4235420.h>
#include <java/lang/Error.h>
#include <java/lang/Number.h>
#include <java/util/Date.h>
#include <java/util/HashMap.h>
#include <java/util/Hashtable.h>
#include <java/util/Map.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JTable.h>
#include <javax/swing/table/TableCellEditor.h>
#include <javax/swing/table/TableCellRenderer.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $Date = ::java::util::Date;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JTable = ::javax::swing::JTable;
using $TableCellEditor = ::javax::swing::table::TableCellEditor;
using $TableCellRenderer = ::javax::swing::table::TableCellRenderer;

void bug4235420$Table::init$() {
	$JTable::init$();
}

void bug4235420$Table::test() {
	$useLocalObjectStack();
	$load($Date);
	$load($ImageIcon);
	$var($ClassArray, rendererClasses, $new($ClassArray, {
		$Object::class$,
		$Number::class$,
		$Date::class$,
		$ImageIcon::class$,
		$Boolean::class$
	}));
	$var($Map, copy, $new($HashMap, this->defaultRenderersByColumnClass));
	{
		$var($ClassArray, arr$, rendererClasses);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$Class* rendererClass = arr$->get(i$);
			{
				$var($Object, obj, copy->get(rendererClass));
				if ($instanceOf($TableCellRenderer, obj)) {
					$throwNew($Error, $$str({"Failed: TableCellRenderer created for "_s, $($nc($of(rendererClass))->getClass()->getName())}));
				}
			}
		}
	}
	$var($ClassArray, editorClasses, $new($ClassArray, {
		$Object::class$,
		$Number::class$,
		$Boolean::class$
	}));
	$assign(copy, $new($HashMap, this->defaultEditorsByColumnClass));
	{
		$var($ClassArray, arr$, editorClasses);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$Class* editorClass = arr$->get(i$);
			{
				$var($Object, obj, copy->get(editorClass));
				if ($instanceOf($TableCellEditor, obj)) {
					$throwNew($Error, $$str({"Failed: TableCellEditor created for "_s, $($nc($of(editorClass))->getClass()->getName())}));
				}
			}
		}
	}
}

bug4235420$Table::bug4235420$Table() {
}

$Class* bug4235420$Table::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(bug4235420$Table, init$, void)},
		{"test", "()V", nullptr, $PUBLIC, $virtualMethod(bug4235420$Table, test, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4235420$Table", "bug4235420", "Table", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4235420$Table",
		"javax.swing.JTable",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug4235420"
	};
	$loadClass(bug4235420$Table, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug4235420$Table));
	});
	return class$;
}

$Class* bug4235420$Table::class$ = nullptr;