#include <sun/awt/XSettings.h>
#include <java/util/Map.h>
#include <sun/awt/XSettings$Update.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $XSettings$Update = ::sun::awt::XSettings$Update;

namespace sun {
	namespace awt {

void XSettings::init$() {
	this->serial = -1;
}

$Map* XSettings::update($bytes* data) {
	return ($$new($XSettings$Update, this, data))->update();
}

XSettings::XSettings() {
}

$Class* XSettings::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serial", "J", nullptr, $PRIVATE, $field(XSettings, serial)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XSettings, init$, void)},
		{"update", "([B)Ljava/util/Map;", "([B)Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PUBLIC, $virtualMethod(XSettings, update, $Map*, $bytes*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.XSettings$Update", "sun.awt.XSettings", "Update", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.XSettings",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.awt.XSettings$Update"
	};
	$loadClass(XSettings, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XSettings);
	});
	return class$;
}

$Class* XSettings::class$ = nullptr;

	} // awt
} // sun