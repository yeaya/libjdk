#include <javax/swing/plaf/metal/MetalFileChooserUI$4.h>
#include <java/awt/event/FocusAdapter.h>
#include <java/awt/event/FocusEvent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

using $FocusAdapter = ::java::awt::event::FocusAdapter;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MetalFileChooserUI = ::javax::swing::plaf::metal::MetalFileChooserUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void MetalFileChooserUI$4::init$($MetalFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$FocusAdapter::init$();
}

void MetalFileChooserUI$4::focusGained($FocusEvent* e) {
	if (!$$nc(this->this$0->getFileChooser())->isMultiSelectionEnabled()) {
		$nc(this->this$0->filePane)->clearSelection();
	}
}

MetalFileChooserUI$4::MetalFileChooserUI$4() {
}

$Class* MetalFileChooserUI$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/metal/MetalFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalFileChooserUI$4, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/metal/MetalFileChooserUI;)V", nullptr, 0, $method(MetalFileChooserUI$4, init$, void, $MetalFileChooserUI*)},
		{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(MetalFileChooserUI$4, focusGained, void, $FocusEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.plaf.metal.MetalFileChooserUI",
		"installComponents",
		"(Ljavax/swing/JFileChooser;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalFileChooserUI$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.metal.MetalFileChooserUI$4",
		"java.awt.event.FocusAdapter",
		nullptr,
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
	$loadClass(MetalFileChooserUI$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalFileChooserUI$4);
	});
	return class$;
}

$Class* MetalFileChooserUI$4::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax