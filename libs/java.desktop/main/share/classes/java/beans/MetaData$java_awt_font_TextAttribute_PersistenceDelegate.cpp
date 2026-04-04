#include <java/beans/MetaData$java_awt_font_TextAttribute_PersistenceDelegate.h>
#include <java/beans/MetaData$StaticFieldsPersistenceDelegate.h>
#include <java/beans/MetaData.h>
#include <jcpp.h>

using $MetaData$StaticFieldsPersistenceDelegate = ::java::beans::MetaData$StaticFieldsPersistenceDelegate;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

void MetaData$java_awt_font_TextAttribute_PersistenceDelegate::init$() {
	$MetaData$StaticFieldsPersistenceDelegate::init$();
}

MetaData$java_awt_font_TextAttribute_PersistenceDelegate::MetaData$java_awt_font_TextAttribute_PersistenceDelegate() {
}

$Class* MetaData$java_awt_font_TextAttribute_PersistenceDelegate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MetaData$java_awt_font_TextAttribute_PersistenceDelegate, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.MetaData$java_awt_font_TextAttribute_PersistenceDelegate", "java.beans.MetaData", "java_awt_font_TextAttribute_PersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$StaticFieldsPersistenceDelegate", "java.beans.MetaData", "StaticFieldsPersistenceDelegate", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.beans.MetaData$java_awt_font_TextAttribute_PersistenceDelegate",
		"java.beans.MetaData$StaticFieldsPersistenceDelegate",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.beans.MetaData"
	};
	$loadClass(MetaData$java_awt_font_TextAttribute_PersistenceDelegate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetaData$java_awt_font_TextAttribute_PersistenceDelegate);
	});
	return class$;
}

$Class* MetaData$java_awt_font_TextAttribute_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java