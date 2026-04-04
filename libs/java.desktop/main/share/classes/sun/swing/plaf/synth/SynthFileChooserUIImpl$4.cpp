#include <sun/swing/plaf/synth/SynthFileChooserUIImpl$4.h>
#include <java/awt/event/FocusAdapter.h>
#include <java/awt/event/FocusEvent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <sun/swing/FilePane.h>
#include <sun/swing/plaf/synth/SynthFileChooserUIImpl.h>
#include <jcpp.h>

using $FocusAdapter = ::java::awt::event::FocusAdapter;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SynthFileChooserUIImpl = ::sun::swing::plaf::synth::SynthFileChooserUIImpl;

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

void SynthFileChooserUIImpl$4::init$($SynthFileChooserUIImpl* this$0) {
	$set(this, this$0, this$0);
	$FocusAdapter::init$();
}

void SynthFileChooserUIImpl$4::focusGained($FocusEvent* e) {
	if (!$$nc(this->this$0->getFileChooser())->isMultiSelectionEnabled()) {
		$nc(this->this$0->filePane)->clearSelection();
	}
}

SynthFileChooserUIImpl$4::SynthFileChooserUIImpl$4() {
}

$Class* SynthFileChooserUIImpl$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/swing/plaf/synth/SynthFileChooserUIImpl;", nullptr, $FINAL | $SYNTHETIC, $field(SynthFileChooserUIImpl$4, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/swing/plaf/synth/SynthFileChooserUIImpl;)V", nullptr, 0, $method(SynthFileChooserUIImpl$4, init$, void, $SynthFileChooserUIImpl*)},
		{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(SynthFileChooserUIImpl$4, focusGained, void, $FocusEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.swing.plaf.synth.SynthFileChooserUIImpl",
		"installComponents",
		"(Ljavax/swing/JFileChooser;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.plaf.synth.SynthFileChooserUIImpl$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.plaf.synth.SynthFileChooserUIImpl$4",
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
		"sun.swing.plaf.synth.SynthFileChooserUIImpl"
	};
	$loadClass(SynthFileChooserUIImpl$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SynthFileChooserUIImpl$4);
	});
	return class$;
}

$Class* SynthFileChooserUIImpl$4::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // sun