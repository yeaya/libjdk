#include <javax/swing/plaf/basic/BasicTreeUI$CellEditorHandler.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/plaf/basic/BasicTreeUI$Handler.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $BasicTreeUI = ::javax::swing::plaf::basic::BasicTreeUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicTreeUI$CellEditorHandler::init$($BasicTreeUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicTreeUI$CellEditorHandler::editingStopped($ChangeEvent* e) {
	$$nc(this->this$0->getHandler())->editingStopped(e);
}

void BasicTreeUI$CellEditorHandler::editingCanceled($ChangeEvent* e) {
	$$nc(this->this$0->getHandler())->editingCanceled(e);
}

BasicTreeUI$CellEditorHandler::BasicTreeUI$CellEditorHandler() {
}

$Class* BasicTreeUI$CellEditorHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTreeUI$CellEditorHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI;)V", nullptr, $PUBLIC, $method(BasicTreeUI$CellEditorHandler, init$, void, $BasicTreeUI*)},
		{"editingCanceled", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTreeUI$CellEditorHandler, editingCanceled, void, $ChangeEvent*)},
		{"editingStopped", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTreeUI$CellEditorHandler, editingStopped, void, $ChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicTreeUI$CellEditorHandler", "javax.swing.plaf.basic.BasicTreeUI", "CellEditorHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicTreeUI$CellEditorHandler",
		"java.lang.Object",
		"javax.swing.event.CellEditorListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicTreeUI"
	};
	$loadClass(BasicTreeUI$CellEditorHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicTreeUI$CellEditorHandler);
	});
	return class$;
}

$Class* BasicTreeUI$CellEditorHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax