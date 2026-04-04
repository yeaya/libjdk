#include <sun/awt/FontConfiguration$PropertiesHandler$FontProperties.h>
#include <java/util/Properties.h>
#include <sun/awt/FontConfiguration$PropertiesHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Properties = ::java::util::Properties;
using $FontConfiguration$PropertiesHandler = ::sun::awt::FontConfiguration$PropertiesHandler;

namespace sun {
	namespace awt {

void FontConfiguration$PropertiesHandler$FontProperties::init$($FontConfiguration$PropertiesHandler* this$0) {
	$set(this, this$0, this$0);
	$Properties::init$();
}

$Object* FontConfiguration$PropertiesHandler$FontProperties::put(Object$* k, Object$* v) {
	$synchronized(this) {
		this->this$0->parseProperty($cast($String, k), $cast($String, v));
		return nullptr;
	}
}

FontConfiguration$PropertiesHandler$FontProperties::FontConfiguration$PropertiesHandler$FontProperties() {
}

$Class* FontConfiguration$PropertiesHandler$FontProperties::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/FontConfiguration$PropertiesHandler;", nullptr, $FINAL | $SYNTHETIC, $field(FontConfiguration$PropertiesHandler$FontProperties, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/FontConfiguration$PropertiesHandler;)V", nullptr, 0, $method(FontConfiguration$PropertiesHandler$FontProperties, init$, void, $FontConfiguration$PropertiesHandler*)},
		{"put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(FontConfiguration$PropertiesHandler$FontProperties, put, $Object*, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.FontConfiguration$PropertiesHandler", "sun.awt.FontConfiguration", "PropertiesHandler", $STATIC},
		{"sun.awt.FontConfiguration$PropertiesHandler$FontProperties", "sun.awt.FontConfiguration$PropertiesHandler", "FontProperties", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.FontConfiguration$PropertiesHandler$FontProperties",
		"java.util.Properties",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.FontConfiguration"
	};
	$loadClass(FontConfiguration$PropertiesHandler$FontProperties, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FontConfiguration$PropertiesHandler$FontProperties));
	});
	return class$;
}

$Class* FontConfiguration$PropertiesHandler$FontProperties::class$ = nullptr;

	} // awt
} // sun