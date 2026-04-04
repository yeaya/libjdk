#include <java/beans/MetaData$java_lang_reflect_Field_PersistenceDelegate.h>
#include <java/beans/Encoder.h>
#include <java/beans/Expression.h>
#include <java/beans/MetaData.h>
#include <java/beans/PersistenceDelegate.h>
#include <java/lang/reflect/Field.h>
#include <jcpp.h>

using $Encoder = ::java::beans::Encoder;
using $Expression = ::java::beans::Expression;
using $PersistenceDelegate = ::java::beans::PersistenceDelegate;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Field = ::java::lang::reflect::Field;

namespace java {
	namespace beans {

void MetaData$java_lang_reflect_Field_PersistenceDelegate::init$() {
	$PersistenceDelegate::init$();
}

bool MetaData$java_lang_reflect_Field_PersistenceDelegate::mutatesTo(Object$* oldInstance, Object$* newInstance) {
	return $nc($of(oldInstance))->equals(newInstance);
}

$Expression* MetaData$java_lang_reflect_Field_PersistenceDelegate::instantiate(Object$* oldInstance, $Encoder* out) {
	$useLocalObjectStack();
	$var($Field, f, $cast($Field, oldInstance));
	$var($Object, var$0, $nc(f)->getDeclaringClass());
	$var($String, var$1, "getField"_s);
	return $new($Expression, oldInstance, var$0, var$1, $$new($ObjectArray, {$(f->getName())}));
}

MetaData$java_lang_reflect_Field_PersistenceDelegate::MetaData$java_lang_reflect_Field_PersistenceDelegate() {
}

$Class* MetaData$java_lang_reflect_Field_PersistenceDelegate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MetaData$java_lang_reflect_Field_PersistenceDelegate, init$, void)},
		{"instantiate", "(Ljava/lang/Object;Ljava/beans/Encoder;)Ljava/beans/Expression;", nullptr, $PROTECTED, $virtualMethod(MetaData$java_lang_reflect_Field_PersistenceDelegate, instantiate, $Expression*, Object$*, $Encoder*)},
		{"mutatesTo", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PROTECTED, $virtualMethod(MetaData$java_lang_reflect_Field_PersistenceDelegate, mutatesTo, bool, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.MetaData$java_lang_reflect_Field_PersistenceDelegate", "java.beans.MetaData", "java_lang_reflect_Field_PersistenceDelegate", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.beans.MetaData$java_lang_reflect_Field_PersistenceDelegate",
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
	$loadClass(MetaData$java_lang_reflect_Field_PersistenceDelegate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetaData$java_lang_reflect_Field_PersistenceDelegate);
	});
	return class$;
}

$Class* MetaData$java_lang_reflect_Field_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java