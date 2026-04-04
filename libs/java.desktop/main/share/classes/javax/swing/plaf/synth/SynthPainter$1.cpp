#include <javax/swing/plaf/synth/SynthPainter$1.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

void SynthPainter$1::init$() {
	$SynthPainter::init$();
}

SynthPainter$1::SynthPainter$1() {
}

$Class* SynthPainter$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SynthPainter$1, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.plaf.synth.SynthPainter",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.synth.SynthPainter$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.synth.SynthPainter$1",
		"javax.swing.plaf.synth.SynthPainter",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.synth.SynthPainter"
	};
	$loadClass(SynthPainter$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SynthPainter$1);
	});
	return class$;
}

$Class* SynthPainter$1::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax