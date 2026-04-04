#include <javax/management/AttributeValueExp.h>
#include <java/lang/Number.h>
#include <javax/management/BadAttributeValueExpException.h>
#include <javax/management/BooleanValueExp.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/NumericValueExp.h>
#include <javax/management/ObjectName.h>
#include <javax/management/QueryEval.h>
#include <javax/management/StringValueExp.h>
#include <javax/management/ValueExp.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $BadAttributeValueExpException = ::javax::management::BadAttributeValueExpException;
using $BooleanValueExp = ::javax::management::BooleanValueExp;
using $MBeanServer = ::javax::management::MBeanServer;
using $NumericValueExp = ::javax::management::NumericValueExp;
using $ObjectName = ::javax::management::ObjectName;
using $QueryEval = ::javax::management::QueryEval;
using $StringValueExp = ::javax::management::StringValueExp;
using $ValueExp = ::javax::management::ValueExp;

namespace javax {
	namespace management {

void AttributeValueExp::init$() {
}

void AttributeValueExp::init$($String* attr) {
	$set(this, attr, attr);
}

$String* AttributeValueExp::getAttributeName() {
	return this->attr;
}

$ValueExp* AttributeValueExp::apply($ObjectName* name) {
	$var($Object, result, getAttribute(name));
	if ($instanceOf($Number, result)) {
		return $new($NumericValueExp, $cast($Number, result));
	} else if ($instanceOf($String, result)) {
		return $new($StringValueExp, $cast($String, result));
	} else if ($instanceOf($Boolean, result)) {
		return $new($BooleanValueExp, $cast($Boolean, result));
	} else {
		$throwNew($BadAttributeValueExpException, result);
	}
}

$String* AttributeValueExp::toString() {
	return this->attr;
}

void AttributeValueExp::setMBeanServer($MBeanServer* s) {
}

$Object* AttributeValueExp::getAttribute($ObjectName* name) {
	try {
		$var($MBeanServer, server, $QueryEval::getMBeanServer());
		return $nc(server)->getAttribute(name, this->attr);
	} catch ($Exception& re) {
		return nullptr;
	}
	$shouldNotReachHere();
}

AttributeValueExp::AttributeValueExp() {
}

$Class* AttributeValueExp::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AttributeValueExp, serialVersionUID)},
		{"attr", "Ljava/lang/String;", nullptr, $PRIVATE, $field(AttributeValueExp, attr)},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute setMBeanServermethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC | $DEPRECATED, $method(AttributeValueExp, init$, void), nullptr, nullptr, init$methodAnnotations$$},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AttributeValueExp, init$, void, $String*)},
		{"apply", "(Ljavax/management/ObjectName;)Ljavax/management/ValueExp;", nullptr, $PUBLIC, $virtualMethod(AttributeValueExp, apply, $ValueExp*, $ObjectName*), "javax.management.BadStringOperationException,javax.management.BadBinaryOpValueExpException,javax.management.BadAttributeValueExpException,javax.management.InvalidApplicationException"},
		{"getAttribute", "(Ljavax/management/ObjectName;)Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(AttributeValueExp, getAttribute, $Object*, $ObjectName*)},
		{"getAttributeName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttributeValueExp, getAttributeName, $String*)},
		{"setMBeanServer", "(Ljavax/management/MBeanServer;)V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(AttributeValueExp, setMBeanServer, void, $MBeanServer*), nullptr, nullptr, setMBeanServermethodAnnotations$$},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttributeValueExp, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.AttributeValueExp",
		"java.lang.Object",
		"javax.management.ValueExp",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AttributeValueExp, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AttributeValueExp);
	});
	return class$;
}

$Class* AttributeValueExp::class$ = nullptr;

	} // management
} // javax