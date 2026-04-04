#include <TestCustomStyleFactory$1.h>
#include <TestCustomStyleFactory.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthStyleFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthStyleFactory = ::javax::swing::plaf::synth::SynthStyleFactory;

void TestCustomStyleFactory$1::init$($SynthStyleFactory* val$original) {
	$set(this, val$original, val$original);
	$SynthStyleFactory::init$();
}

$SynthStyle* TestCustomStyleFactory$1::getStyle($JComponent* c, $Region* id) {
	return $nc(this->val$original)->getStyle(c, id);
}

TestCustomStyleFactory$1::TestCustomStyleFactory$1() {
}

$Class* TestCustomStyleFactory$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$original", "Ljavax/swing/plaf/synth/SynthStyleFactory;", nullptr, $FINAL | $SYNTHETIC, $field(TestCustomStyleFactory$1, val$original)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/synth/SynthStyleFactory;)V", nullptr, 0, $method(TestCustomStyleFactory$1, init$, void, $SynthStyleFactory*)},
		{"getStyle", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;)Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PUBLIC, $virtualMethod(TestCustomStyleFactory$1, getStyle, $SynthStyle*, $JComponent*, $Region*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestCustomStyleFactory",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestCustomStyleFactory$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestCustomStyleFactory$1",
		"javax.swing.plaf.synth.SynthStyleFactory",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestCustomStyleFactory"
	};
	$loadClass(TestCustomStyleFactory$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestCustomStyleFactory$1);
	});
	return class$;
}

$Class* TestCustomStyleFactory$1::class$ = nullptr;