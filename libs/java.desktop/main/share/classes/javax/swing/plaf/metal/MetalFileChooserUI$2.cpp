#include <javax/swing/plaf/metal/MetalFileChooserUI$2.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

#undef VIEWTYPE_DETAILS
#undef VIEWTYPE_LIST

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MetalFileChooserUI = ::javax::swing::plaf::metal::MetalFileChooserUI;
using $FilePane = ::sun::swing::FilePane;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void MetalFileChooserUI$2::init$($MetalFileChooserUI* this$0) {
	$set(this, this$0, this$0);
}

void MetalFileChooserUI$2::propertyChange($PropertyChangeEvent* e) {
	if ("viewType"_s->equals($($nc(e)->getPropertyName()))) {
		int32_t viewType = $nc(this->this$0->filePane)->getViewType();
		switch (viewType) {
		case $FilePane::VIEWTYPE_LIST:
			$nc(this->this$0->listViewButton)->setSelected(true);
			break;
		case $FilePane::VIEWTYPE_DETAILS:
			$nc(this->this$0->detailsViewButton)->setSelected(true);
			break;
		}
	}
}

MetalFileChooserUI$2::MetalFileChooserUI$2() {
}

$Class* MetalFileChooserUI$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/metal/MetalFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalFileChooserUI$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/metal/MetalFileChooserUI;)V", nullptr, 0, $method(MetalFileChooserUI$2, init$, void, $MetalFileChooserUI*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(MetalFileChooserUI$2, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.plaf.metal.MetalFileChooserUI",
		"installComponents",
		"(Ljavax/swing/JFileChooser;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalFileChooserUI$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.metal.MetalFileChooserUI$2",
		"java.lang.Object",
		"java.beans.PropertyChangeListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.metal.MetalFileChooserUI"
	};
	$loadClass(MetalFileChooserUI$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalFileChooserUI$2);
	});
	return class$;
}

$Class* MetalFileChooserUI$2::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax