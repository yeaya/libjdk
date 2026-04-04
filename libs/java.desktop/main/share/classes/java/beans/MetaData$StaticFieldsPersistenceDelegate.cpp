#include <java/beans/MetaData$StaticFieldsPersistenceDelegate.h>
#include <java/beans/Encoder.h>
#include <java/beans/Expression.h>
#include <java/beans/MetaData.h>
#include <java/beans/PersistenceDelegate.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Modifier.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

#undef TRUE

using $FieldArray = $Array<::java::lang::reflect::Field>;
using $Encoder = ::java::beans::Encoder;
using $Expression = ::java::beans::Expression;
using $PersistenceDelegate = ::java::beans::PersistenceDelegate;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Field = ::java::lang::reflect::Field;
using $Modifier = ::java::lang::reflect::Modifier;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace java {
	namespace beans {

void MetaData$StaticFieldsPersistenceDelegate::init$() {
	$PersistenceDelegate::init$();
}

void MetaData$StaticFieldsPersistenceDelegate::installFields($Encoder* out, $Class* cls) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	bool var$0 = $Modifier::isPublic($nc(cls)->getModifiers());
	if (var$0 && $ReflectUtil::isPackageAccessible(cls)) {
		$var($FieldArray, fields, cls->getFields());
		for (int32_t i = 0; i < $nc(fields)->length; ++i) {
			$var($Field, field, fields->get(i));
			if ($Object::class$->isAssignableFrom($nc(field)->getType())) {
				$nc(out)->writeExpression($$new($Expression, field, "get"_s, $$new($ObjectArray, {nullptr})));
			}
		}
	}
}

$Expression* MetaData$StaticFieldsPersistenceDelegate::instantiate(Object$* oldInstance, $Encoder* out) {
	$throwNew($RuntimeException, $$str({"Unrecognized instance: "_s, oldInstance}));
	$shouldNotReachHere();
}

void MetaData$StaticFieldsPersistenceDelegate::writeObject(Object$* oldInstance, $Encoder* out) {
	if ($nc(out)->getAttribute(this) == nullptr) {
		out->setAttribute(this, $Boolean::TRUE);
		installFields(out, $nc($of(oldInstance))->getClass());
	}
	$PersistenceDelegate::writeObject(oldInstance, out);
}

MetaData$StaticFieldsPersistenceDelegate::MetaData$StaticFieldsPersistenceDelegate() {
}

$Class* MetaData$StaticFieldsPersistenceDelegate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MetaData$StaticFieldsPersistenceDelegate, init$, void)},
		{"installFields", "(Ljava/beans/Encoder;Ljava/lang/Class;)V", "(Ljava/beans/Encoder;Ljava/lang/Class<*>;)V", $PROTECTED, $virtualMethod(MetaData$StaticFieldsPersistenceDelegate, installFields, void, $Encoder*, $Class*)},
		{"instantiate", "(Ljava/lang/Object;Ljava/beans/Encoder;)Ljava/beans/Expression;", nullptr, $PROTECTED, $virtualMethod(MetaData$StaticFieldsPersistenceDelegate, instantiate, $Expression*, Object$*, $Encoder*)},
		{"writeObject", "(Ljava/lang/Object;Ljava/beans/Encoder;)V", nullptr, $PUBLIC, $virtualMethod(MetaData$StaticFieldsPersistenceDelegate, writeObject, void, Object$*, $Encoder*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.MetaData$StaticFieldsPersistenceDelegate", "java.beans.MetaData", "StaticFieldsPersistenceDelegate", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.beans.MetaData$StaticFieldsPersistenceDelegate",
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
	$loadClass(MetaData$StaticFieldsPersistenceDelegate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetaData$StaticFieldsPersistenceDelegate);
	});
	return class$;
}

$Class* MetaData$StaticFieldsPersistenceDelegate::class$ = nullptr;

	} // beans
} // java