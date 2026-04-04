#include <javax/swing/plaf/synth/SynthLookAndFeel$AATextListener$1.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel$AATextListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SynthLookAndFeel$AATextListener = ::javax::swing::plaf::synth::SynthLookAndFeel$AATextListener;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

void SynthLookAndFeel$AATextListener$1::init$($SynthLookAndFeel$AATextListener* this$0) {
	$set(this, this$0, this$0);
}

void SynthLookAndFeel$AATextListener$1::run() {
	$SynthLookAndFeel$AATextListener::updateAllUIs();
	$SynthLookAndFeel$AATextListener::setUpdatePending(false);
}

SynthLookAndFeel$AATextListener$1::SynthLookAndFeel$AATextListener$1() {
}

$Class* SynthLookAndFeel$AATextListener$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/synth/SynthLookAndFeel$AATextListener;", nullptr, $FINAL | $SYNTHETIC, $field(SynthLookAndFeel$AATextListener$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/synth/SynthLookAndFeel$AATextListener;)V", nullptr, 0, $method(SynthLookAndFeel$AATextListener$1, init$, void, $SynthLookAndFeel$AATextListener*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SynthLookAndFeel$AATextListener$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.plaf.synth.SynthLookAndFeel$AATextListener",
		"updateUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.synth.SynthLookAndFeel$AATextListener", "javax.swing.plaf.synth.SynthLookAndFeel", "AATextListener", $PRIVATE | $STATIC},
		{"javax.swing.plaf.synth.SynthLookAndFeel$AATextListener$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.synth.SynthLookAndFeel$AATextListener$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.synth.SynthLookAndFeel"
	};
	$loadClass(SynthLookAndFeel$AATextListener$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SynthLookAndFeel$AATextListener$1);
	});
	return class$;
}

$Class* SynthLookAndFeel$AATextListener$1::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax