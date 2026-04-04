#include <bug4331767$BrokenLookAndFeel.h>
#include <bug4331767$BrokenUIDefaults.h>
#include <bug4331767.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

using $bug4331767$BrokenUIDefaults = ::bug4331767$BrokenUIDefaults;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

void bug4331767$BrokenLookAndFeel::init$() {
	$MetalLookAndFeel::init$();
	$set(this, defaults, $new($bug4331767$BrokenUIDefaults, $($MetalLookAndFeel::getDefaults())));
}

$UIDefaults* bug4331767$BrokenLookAndFeel::getDefaults() {
	return this->defaults;
}

bug4331767$BrokenLookAndFeel::bug4331767$BrokenLookAndFeel() {
}

$Class* bug4331767$BrokenLookAndFeel::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"defaults", "Ljavax/swing/UIDefaults;", nullptr, 0, $field(bug4331767$BrokenLookAndFeel, defaults)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4331767$BrokenLookAndFeel, init$, void)},
		{"getDefaults", "()Ljavax/swing/UIDefaults;", nullptr, $PUBLIC, $virtualMethod(bug4331767$BrokenLookAndFeel, getDefaults, $UIDefaults*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4331767$BrokenLookAndFeel", "bug4331767", "BrokenLookAndFeel", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4331767$BrokenLookAndFeel",
		"javax.swing.plaf.metal.MetalLookAndFeel",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug4331767"
	};
	$loadClass(bug4331767$BrokenLookAndFeel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug4331767$BrokenLookAndFeel));
	});
	return class$;
}

$Class* bug4331767$BrokenLookAndFeel::class$ = nullptr;