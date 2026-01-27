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

$MethodInfo _CellEditor_MethodInfo_[] = {
	{"addCellEditorListener", "(Ljavax/swing/event/CellEditorListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CellEditor, addCellEditorListener, void, $CellEditorListener*)},
	{"cancelCellEditing", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CellEditor, cancelCellEditing, void)},
	{"getCellEditorValue", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CellEditor, getCellEditorValue, $Object*)},
	{"isCellEditable", "(Ljava/util/EventObject;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CellEditor, isCellEditable, bool, $EventObject*)},
	{"removeCellEditorListener", "(Ljavax/swing/event/CellEditorListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CellEditor, removeCellEditorListener, void, $CellEditorListener*)},
	{"shouldSelectCell", "(Ljava/util/EventObject;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CellEditor, shouldSelectCell, bool, $EventObject*)},
	{"stopCellEditing", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CellEditor, stopCellEditing, bool)},
	{}
};

$ClassInfo _CellEditor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.CellEditor",
	nullptr,
	nullptr,
	nullptr,
	_CellEditor_MethodInfo_
};

$Object* allocate$CellEditor($Class* clazz) {
	return $of($alloc(CellEditor));
}

$Class* CellEditor::load$($String* name, bool initialize) {
	$loadClass(CellEditor, name, initialize, &_CellEditor_ClassInfo_, allocate$CellEditor);
	return class$;
}

$Class* CellEditor::class$ = nullptr;

	} // swing
} // javax