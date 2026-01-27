#include <com/sun/beans/decoder/FieldElementHandler.h>

#include <com/sun/beans/decoder/AccessorElementHandler.h>
#include <com/sun/beans/decoder/DocumentHandler.h>
#include <com/sun/beans/decoder/ElementHandler.h>
#include <com/sun/beans/finder/FieldFinder.h>
#include <java/lang/reflect/Field.h>
#include <jcpp.h>

using $AccessorElementHandler = ::com::sun::beans::decoder::AccessorElementHandler;
using $DocumentHandler = ::com::sun::beans::decoder::DocumentHandler;
using $FieldFinder = ::com::sun::beans::finder::FieldFinder;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Field = ::java::lang::reflect::Field;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

$FieldInfo _FieldElementHandler_FieldInfo_[] = {
	{"type", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE, $field(FieldElementHandler, type)},
	{}
};

$MethodInfo _FieldElementHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(FieldElementHandler, init$, void)},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(FieldElementHandler, addAttribute, void, $String*, $String*)},
	{"findField", "(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/reflect/Field;", nullptr, $PRIVATE | $STATIC, $staticMethod(FieldElementHandler, findField, $Field*, Object$*, $String*), "java.lang.NoSuchFieldException"},
	{"getContextBean", "()Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(FieldElementHandler, getContextBean, $Object*)},
	{"getFieldValue", "(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(FieldElementHandler, getFieldValue, $Object*, Object$*, $String*), "java.lang.IllegalAccessException,java.lang.NoSuchFieldException"},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(FieldElementHandler, getValue, $Object*, $String*)},
	{"isArgument", "()Z", nullptr, $PROTECTED, $virtualMethod(FieldElementHandler, isArgument, bool)},
	{"setFieldValue", "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(FieldElementHandler, setFieldValue, void, Object$*, $String*, Object$*), "java.lang.IllegalAccessException,java.lang.NoSuchFieldException"},
	{"setValue", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PROTECTED, $virtualMethod(FieldElementHandler, setValue, void, $String*, Object$*)},
	{}
};

$ClassInfo _FieldElementHandler_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.beans.decoder.FieldElementHandler",
	"com.sun.beans.decoder.AccessorElementHandler",
	nullptr,
	_FieldElementHandler_FieldInfo_,
	_FieldElementHandler_MethodInfo_
};

$Object* allocate$FieldElementHandler($Class* clazz) {
	return $of($alloc(FieldElementHandler));
}

void FieldElementHandler::init$() {
	$AccessorElementHandler::init$();
}

void FieldElementHandler::addAttribute($String* name, $String* value) {
	if ($nc(name)->equals("class"_s)) {
		$set(this, type, $nc($(getOwner()))->findClass(value));
	} else {
		$AccessorElementHandler::addAttribute(name, value);
	}
}

bool FieldElementHandler::isArgument() {
	return $AccessorElementHandler::isArgument() && (this->type != nullptr);
}

$Object* FieldElementHandler::getContextBean() {
	return $of((this->type != nullptr) ? $of(this->type) : $AccessorElementHandler::getContextBean());
}

$Object* FieldElementHandler::getValue($String* name) {
	$useLocalCurrentObjectStackCache();
	try {
		return $of(getFieldValue($(getContextBean()), name));
	} catch ($Exception& exception) {
		$nc($(getOwner()))->handleException(exception);
	}
	return $of(nullptr);
}

void FieldElementHandler::setValue($String* name, Object$* value) {
	$useLocalCurrentObjectStackCache();
	try {
		setFieldValue($(getContextBean()), name, value);
	} catch ($Exception& exception) {
		$nc($(getOwner()))->handleException(exception);
	}
}

$Object* FieldElementHandler::getFieldValue(Object$* bean, $String* name) {
	$init(FieldElementHandler);
	$beforeCallerSensitive();
	return $of($nc($(findField(bean, name)))->get(bean));
}

void FieldElementHandler::setFieldValue(Object$* bean, $String* name, Object$* value) {
	$init(FieldElementHandler);
	$beforeCallerSensitive();
	$nc($(findField(bean, name)))->set(bean, value);
}

$Field* FieldElementHandler::findField(Object$* bean, $String* name) {
	$init(FieldElementHandler);
	return ($instanceOf($Class, bean)) ? $FieldFinder::findStaticField($cast($Class, bean), name) : $FieldFinder::findField($nc($of(bean))->getClass(), name);
}

FieldElementHandler::FieldElementHandler() {
}

$Class* FieldElementHandler::load$($String* name, bool initialize) {
	$loadClass(FieldElementHandler, name, initialize, &_FieldElementHandler_ClassInfo_, allocate$FieldElementHandler);
	return class$;
}

$Class* FieldElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com