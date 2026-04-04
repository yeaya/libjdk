#include <sun/swing/plaf/synth/SynthFileChooserUIImpl$2.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JToggleButton.h>
#include <sun/swing/FilePane.h>
#include <sun/swing/plaf/synth/SynthFileChooserUIImpl.h>
#include <jcpp.h>

#undef VIEWTYPE_DETAILS
#undef VIEWTYPE_LIST

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FilePane = ::sun::swing::FilePane;
using $SynthFileChooserUIImpl = ::sun::swing::plaf::synth::SynthFileChooserUIImpl;

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

void SynthFileChooserUIImpl$2::init$($SynthFileChooserUIImpl* this$0) {
	$set(this, this$0, this$0);
}

void SynthFileChooserUIImpl$2::propertyChange($PropertyChangeEvent* e) {
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

SynthFileChooserUIImpl$2::SynthFileChooserUIImpl$2() {
}

$Class* SynthFileChooserUIImpl$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/swing/plaf/synth/SynthFileChooserUIImpl;", nullptr, $FINAL | $SYNTHETIC, $field(SynthFileChooserUIImpl$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/swing/plaf/synth/SynthFileChooserUIImpl;)V", nullptr, 0, $method(SynthFileChooserUIImpl$2, init$, void, $SynthFileChooserUIImpl*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(SynthFileChooserUIImpl$2, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.swing.plaf.synth.SynthFileChooserUIImpl",
		"installComponents",
		"(Ljavax/swing/JFileChooser;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.plaf.synth.SynthFileChooserUIImpl$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.plaf.synth.SynthFileChooserUIImpl$2",
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
		"sun.swing.plaf.synth.SynthFileChooserUIImpl"
	};
	$loadClass(SynthFileChooserUIImpl$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SynthFileChooserUIImpl$2);
	});
	return class$;
}

$Class* SynthFileChooserUIImpl$2::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // sun