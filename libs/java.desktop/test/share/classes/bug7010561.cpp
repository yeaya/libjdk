#include <bug7010561.h>
#include <bug7010561$1.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <jcpp.h>

#undef BOTTOM
#undef IS_SELECTED
#undef RETURN_VALUE
#undef TAB_PLACEMENT
#undef TOP

using $bug7010561$1 = ::bug7010561$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingConstants = ::javax::swing::SwingConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;

$ints* bug7010561::TAB_PLACEMENT = nullptr;
$booleans* bug7010561::IS_SELECTED = nullptr;
$ints* bug7010561::RETURN_VALUE = nullptr;

void bug7010561::init$() {
}

void bug7010561::main($StringArray* args) {
	$init(bug7010561);
	$useLocalObjectStack();
	$UIManager::setLookAndFeel($$new($SynthLookAndFeel));
	$SwingUtilities::invokeAndWait($$new($bug7010561$1));
}

void bug7010561::clinit$($Class* clazz) {
	$assignStatic(bug7010561::TAB_PLACEMENT, $new($ints, {
		$SwingConstants::BOTTOM,
		$SwingConstants::BOTTOM,
		$SwingConstants::TOP,
		$SwingConstants::TOP
	}));
	$assignStatic(bug7010561::IS_SELECTED, $new($booleans, {
		false,
		true,
		false,
		true
	}));
	$assignStatic(bug7010561::RETURN_VALUE, $new($ints, {
		-1,
		1,
		1,
		-1
	}));
}

bug7010561::bug7010561() {
}

$Class* bug7010561::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"TAB_PLACEMENT", "[I", nullptr, $PRIVATE | $STATIC, $staticField(bug7010561, TAB_PLACEMENT)},
		{"IS_SELECTED", "[Z", nullptr, $PRIVATE | $STATIC, $staticField(bug7010561, IS_SELECTED)},
		{"RETURN_VALUE", "[I", nullptr, $PRIVATE | $STATIC, $staticField(bug7010561, RETURN_VALUE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug7010561, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug7010561, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7010561$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug7010561",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug7010561$1"
	};
	$loadClass(bug7010561, name, initialize, &classInfo$$, bug7010561::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug7010561);
	});
	return class$;
}

$Class* bug7010561::class$ = nullptr;