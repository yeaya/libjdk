#include <javax/swing/CellEditor.h>
#include <java/util/EventObject.h>
#include <javax/swing/event/CellEditorListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $CellEditorListener = ::javax::swing::event::CellEditorListener;

namespace javax {
	namespace swing {

$Class* CellEditor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"addCellEditorListener", "(Ljavax/swing/event/CellEditorListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CellEditor, addCellEditorListener, void, $CellEditorListener*)},
		{"cancelCellEditing", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CellEditor, cancelCellEditing, void)},
		{"getCellEditorValue", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CellEditor, getCellEditorValue, $Object*)},
		{"isCellEditable", "(Ljava/util/EventObject;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CellEditor, isCellEditable, bool, $EventObject*)},
		{"removeCellEditorListener", "(Ljavax/swing/event/CellEditorListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CellEditor, removeCellEditorListener, void, $CellEditorListener*)},
		{"shouldSelectCell", "(Ljava/util/EventObject;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CellEditor, shouldSelectCell, bool, $EventObject*)},
		{"stopCellEditing", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CellEditor, stopCellEditing, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.CellEditor",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CellEditor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CellEditor);
	});
	return class$;
}

$Class* CellEditor::class$ = nullptr;

	} // swing
} // javax