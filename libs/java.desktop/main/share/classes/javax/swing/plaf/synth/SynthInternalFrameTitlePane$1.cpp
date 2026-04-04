#include <javax/swing/plaf/synth/SynthInternalFrameTitlePane$1.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <java/beans/PropertyVetoException.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/plaf/synth/SynthInternalFrameTitlePane.h>
#include <jcpp.h>

using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SynthInternalFrameTitlePane = ::javax::swing::plaf::synth::SynthInternalFrameTitlePane;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

void SynthInternalFrameTitlePane$1::init$($SynthInternalFrameTitlePane* this$0) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
}

void SynthInternalFrameTitlePane$1::mousePressed($MouseEvent* e) {
	try {
		$$nc($SynthInternalFrameTitlePane::access$000(this->this$0))->setSelected(true);
	} catch ($PropertyVetoException& pve) {
	}
	this->this$0->showSystemMenu();
}

SynthInternalFrameTitlePane$1::SynthInternalFrameTitlePane$1() {
}

$Class* SynthInternalFrameTitlePane$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/synth/SynthInternalFrameTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(SynthInternalFrameTitlePane$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/synth/SynthInternalFrameTitlePane;)V", nullptr, 0, $method(SynthInternalFrameTitlePane$1, init$, void, $SynthInternalFrameTitlePane*)},
		{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(SynthInternalFrameTitlePane$1, mousePressed, void, $MouseEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.plaf.synth.SynthInternalFrameTitlePane",
		"assembleSystemMenu",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.synth.SynthInternalFrameTitlePane$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.synth.SynthInternalFrameTitlePane$1",
		"java.awt.event.MouseAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.synth.SynthInternalFrameTitlePane"
	};
	$loadClass(SynthInternalFrameTitlePane$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SynthInternalFrameTitlePane$1));
	});
	return class$;
}

$Class* SynthInternalFrameTitlePane$1::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax