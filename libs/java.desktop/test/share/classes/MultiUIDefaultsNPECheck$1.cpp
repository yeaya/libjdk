#include <MultiUIDefaultsNPECheck$1.h>
#include <MultiUIDefaultsNPECheck.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIDefaults.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIDefaults = ::javax::swing::UIDefaults;

void MultiUIDefaultsNPECheck$1::init$() {
	$LookAndFeel::init$();
}

$String* MultiUIDefaultsNPECheck$1::getName() {
	return nullptr;
}

$String* MultiUIDefaultsNPECheck$1::getID() {
	return nullptr;
}

$String* MultiUIDefaultsNPECheck$1::getDescription() {
	return nullptr;
}

bool MultiUIDefaultsNPECheck$1::isNativeLookAndFeel() {
	return false;
}

bool MultiUIDefaultsNPECheck$1::isSupportedLookAndFeel() {
	return true;
}

$UIDefaults* MultiUIDefaultsNPECheck$1::getDefaults() {
	return nullptr;
}

MultiUIDefaultsNPECheck$1::MultiUIDefaultsNPECheck$1() {
}

$Class* MultiUIDefaultsNPECheck$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MultiUIDefaultsNPECheck$1, init$, void)},
		{"getDefaults", "()Ljavax/swing/UIDefaults;", nullptr, $PUBLIC, $virtualMethod(MultiUIDefaultsNPECheck$1, getDefaults, $UIDefaults*)},
		{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MultiUIDefaultsNPECheck$1, getDescription, $String*)},
		{"getID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MultiUIDefaultsNPECheck$1, getID, $String*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MultiUIDefaultsNPECheck$1, getName, $String*)},
		{"isNativeLookAndFeel", "()Z", nullptr, $PUBLIC, $virtualMethod(MultiUIDefaultsNPECheck$1, isNativeLookAndFeel, bool)},
		{"isSupportedLookAndFeel", "()Z", nullptr, $PUBLIC, $virtualMethod(MultiUIDefaultsNPECheck$1, isSupportedLookAndFeel, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"MultiUIDefaultsNPECheck",
		"Test",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MultiUIDefaultsNPECheck$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"MultiUIDefaultsNPECheck$1",
		"javax.swing.LookAndFeel",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"MultiUIDefaultsNPECheck"
	};
	$loadClass(MultiUIDefaultsNPECheck$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MultiUIDefaultsNPECheck$1);
	});
	return class$;
}

$Class* MultiUIDefaultsNPECheck$1::class$ = nullptr;