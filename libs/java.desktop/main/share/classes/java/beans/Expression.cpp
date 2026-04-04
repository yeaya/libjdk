#include <java/beans/Expression.h>
#include <java/beans/Statement.h>
#include <jcpp.h>

using $Statement = ::java::beans::Statement;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace java {
	namespace beans {

$Object* Expression::unbound = nullptr;

void Expression::init$(Object$* target, $String* methodName, $ObjectArray* arguments) {
	$Statement::init$(target, methodName, arguments);
	$set(this, value, Expression::unbound);
}

void Expression::init$(Object$* value, Object$* target, $String* methodName, $ObjectArray* arguments) {
	Expression::init$(target, methodName, arguments);
	setValue(value);
}

void Expression::execute() {
	setValue($(invoke()));
}

$Object* Expression::getValue() {
	if ($equals(this->value, Expression::unbound)) {
		setValue($(invoke()));
	}
	return this->value;
}

void Expression::setValue(Object$* value) {
	$set(this, value, value);
}

$String* Expression::instanceName(Object$* instance) {
	return $equals(instance, Expression::unbound) ? "<unbound>"_s : $Statement::instanceName(instance);
}

$String* Expression::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($(instanceName(this->value)));
	var$0->append("="_s);
	var$0->append($($Statement::toString()));
	return $str(var$0);
}

void Expression::clinit$($Class* clazz) {
	$assignStatic(Expression::unbound, $new($Object));
}

Expression::Expression() {
}

$Class* Expression::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"unbound", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticField(Expression, unbound)},
		{"value", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(Expression, value)},
		{}
	};
	$Attribute $attribute[] = {
		{'s', "target"},
		{'s', "methodName"},
		{'s', "arguments"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$[] = {
		{"Ljava/beans/ConstructorProperties;", init$methodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(Expression, init$, void, Object$*, $String*, $ObjectArray*), nullptr, nullptr, init$methodAnnotations$$},
		{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(Expression, init$, void, Object$*, Object$*, $String*, $ObjectArray*)},
		{"execute", "()V", nullptr, $PUBLIC, $virtualMethod(Expression, execute, void), "java.lang.Exception"},
		{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Expression, getValue, $Object*), "java.lang.Exception"},
		{"instanceName", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, 0, $virtualMethod(Expression, instanceName, $String*, Object$*)},
		{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Expression, setValue, void, Object$*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Expression, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.beans.Expression",
		"java.beans.Statement",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Expression, name, initialize, &classInfo$$, Expression::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Expression);
	});
	return class$;
}

$Class* Expression::class$ = nullptr;

	} // beans
} // java