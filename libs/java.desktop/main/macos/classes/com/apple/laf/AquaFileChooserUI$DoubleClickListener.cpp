#include <com/apple/laf/AquaFileChooserUI$DoubleClickListener.h>
#include <com/apple/laf/AquaFileChooserUI$JTableExtension.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <com/apple/laf/AquaFileSystemModel.h>
#include <java/awt/Point.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <java/io/File.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $AquaFileChooserUI$JTableExtension = ::com::apple::laf::AquaFileChooserUI$JTableExtension;
using $AquaFileSystemModel = ::com::apple::laf::AquaFileSystemModel;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaFileChooserUI$DoubleClickListener::init$($AquaFileChooserUI* this$0, $AquaFileChooserUI$JTableExtension* list) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
	$set(this, list, list);
}

void AquaFileChooserUI$DoubleClickListener::mouseClicked($MouseEvent* e) {
	$useLocalObjectStack();
	if ($nc(e)->getClickCount() != 2) {
		return;
	}
	int32_t index = $nc(this->list)->locationToIndex($(e->getPoint()));
	if (index < 0) {
		return;
	}
	$var($File, f, $cast($File, $$sure($AquaFileSystemModel, $nc(this->list)->getModel())->getElementAt(index)));
	if (this->this$0->openDirectory(f)) {
		return;
	}
	if (!this->this$0->isSelectableInList(f)) {
		return;
	}
	$$nc(this->this$0->getFileChooser())->approveSelection();
}

AquaFileChooserUI$DoubleClickListener::AquaFileChooserUI$DoubleClickListener() {
}

$Class* AquaFileChooserUI$DoubleClickListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$DoubleClickListener, this$0)},
		{"list", "Lcom/apple/laf/AquaFileChooserUI$JTableExtension;", nullptr, 0, $field(AquaFileChooserUI$DoubleClickListener, list)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;Lcom/apple/laf/AquaFileChooserUI$JTableExtension;)V", nullptr, $PUBLIC, $method(AquaFileChooserUI$DoubleClickListener, init$, void, $AquaFileChooserUI*, $AquaFileChooserUI$JTableExtension*)},
		{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaFileChooserUI$DoubleClickListener, mouseClicked, void, $MouseEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaFileChooserUI$DoubleClickListener", "com.apple.laf.AquaFileChooserUI", "DoubleClickListener", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaFileChooserUI$DoubleClickListener",
		"java.awt.event.MouseAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaFileChooserUI"
	};
	$loadClass(AquaFileChooserUI$DoubleClickListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaFileChooserUI$DoubleClickListener));
	});
	return class$;
}

$Class* AquaFileChooserUI$DoubleClickListener::class$ = nullptr;

		} // laf
	} // apple
} // com