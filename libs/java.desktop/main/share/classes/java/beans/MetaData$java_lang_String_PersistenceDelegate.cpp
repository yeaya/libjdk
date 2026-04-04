#include <java/beans/MetaData$java_lang_String_PersistenceDelegate.h>
#include <java/beans/Encoder.h>
#include <java/beans/Expression.h>
#include <java/beans/MetaData.h>
#include <java/beans/PersistenceDelegate.h>
#include <jcpp.h>

using $Encoder = ::java::beans::Encoder;
using $Expression = ::java::beans::Expression;
using $PersistenceDelegate = ::java::beans::PersistenceDelegate;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

void MetaData$java_lang_String_PersistenceDelegate::init$() {
	$PersistenceDelegate::init$();
}

$Expression* MetaData$java_lang_String_PersistenceDelegate::instantiate(Object$* oldInstance, $Encoder* out) {
	return nullptr;
}

void MetaData$java_lang_String_PersistenceDelegate::writeObject(Object$* oldInstance, $Encoder* out) {
}

MetaData$java_lang_String_PersistenceDelegate::MetaData$java_lang_String_PersistenceDelegate() {
}

$Class* MetaData$java_lang_String_PersistenceDelegate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MetaData$java_lang_String_PersistenceDelegate, init$, void)},
		{"instantiate", "(Ljava/lang/Object;Ljava/beans/Encoder;)Ljava/beans/Expression;", nullptr, $PROTECTED, $virtualMethod(MetaData$java_lang_String_PersistenceDelegate, instantiate, $Expression*, Object$*, $Encoder*)},
		{"writeObject", "(Ljava/lang/Object;Ljava/beans/Encoder;)V", nullptr, $PUBLIC, $virtualMethod(MetaData$java_lang_String_PersistenceDelegate, writeObject, void, Object$*, $Encoder*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.MetaData$java_lang_String_PersistenceDelegate", "java.beans.MetaData", "java_lang_String_PersistenceDelegate", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.beans.MetaData$java_lang_String_PersistenceDelegate",
		"java.beans.PersistenceDelegate",
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
	$loadClass(MetaData$java_lang_String_PersistenceDelegate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetaData$java_lang_String_PersistenceDelegate);
	});
	return class$;
}

$Class* MetaData$java_lang_String_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java