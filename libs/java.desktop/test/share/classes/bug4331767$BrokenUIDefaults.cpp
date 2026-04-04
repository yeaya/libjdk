#include <bug4331767$BrokenUIDefaults.h>
#include <bug4331767.h>
#include <java/util/Locale.h>
#include <javax/swing/UIDefaults.h>
#include <jcpp.h>

using $bug4331767 = ::bug4331767;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $UIDefaults = ::javax::swing::UIDefaults;

void bug4331767$BrokenUIDefaults::init$($UIDefaults* def) {
	$UIDefaults::init$();
	$set(this, defaults, def);
}

$Object* bug4331767$BrokenUIDefaults::get(Object$* key) {
	if ("ButtonUI"_s->equals(key)) {
		$nc($System::err)->println("[II]  Called BrokenUIDefaults.get(Object)"_s);
		return $of("a nonexistent class"_s);
	}
	return $nc(this->defaults)->get(key);
}

$Object* bug4331767$BrokenUIDefaults::get(Object$* key, $Locale* l) {
	if ("ButtonUI"_s->equals(key)) {
		$nc($System::err)->println("[II]  Called BrokenUIDefaults.get(Object, Locale)"_s);
		return $of("a nonexistent class"_s);
	}
	return $nc(this->defaults)->get(key, l);
}

void bug4331767$BrokenUIDefaults::getUIError($String* msg) {
	$nc($System::err)->println("[II]  BrokenUIDefaults.getUIError() called, test passes"_s);
	$init($bug4331767);
	$bug4331767::passed = true;
}

bug4331767$BrokenUIDefaults::bug4331767$BrokenUIDefaults() {
}

$Class* bug4331767$BrokenUIDefaults::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"defaults", "Ljavax/swing/UIDefaults;", nullptr, 0, $field(bug4331767$BrokenUIDefaults, defaults)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/UIDefaults;)V", nullptr, $PUBLIC, $method(bug4331767$BrokenUIDefaults, init$, void, $UIDefaults*)},
		{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(bug4331767$BrokenUIDefaults, get, $Object*, Object$*)},
		{"get", "(Ljava/lang/Object;Ljava/util/Locale;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(bug4331767$BrokenUIDefaults, get, $Object*, Object$*, $Locale*)},
		{"getUIError", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(bug4331767$BrokenUIDefaults, getUIError, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4331767$BrokenUIDefaults", "bug4331767", "BrokenUIDefaults", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4331767$BrokenUIDefaults",
		"javax.swing.UIDefaults",
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
	$loadClass(bug4331767$BrokenUIDefaults, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug4331767$BrokenUIDefaults));
	});
	return class$;
}

$Class* bug4331767$BrokenUIDefaults::class$ = nullptr;