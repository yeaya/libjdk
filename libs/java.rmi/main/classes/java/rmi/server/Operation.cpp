#include <java/rmi/server/Operation.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace rmi {
		namespace server {

void Operation::init$($String* op) {
	$set(this, operation, op);
}

$String* Operation::getOperation() {
	return this->operation;
}

$String* Operation::toString() {
	return this->operation;
}

Operation::Operation() {
}

$Class* Operation::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"operation", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Operation, operation)},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute getOperationmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute toStringmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $DEPRECATED, $method(Operation, init$, void, $String*), nullptr, nullptr, init$methodAnnotations$$},
		{"getOperation", "()Ljava/lang/String;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(Operation, getOperation, $String*), nullptr, nullptr, getOperationmethodAnnotations$$},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(Operation, toString, $String*), nullptr, nullptr, toStringmethodAnnotations$$},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.rmi.server.Operation",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(Operation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Operation);
	});
	return class$;
}

$Class* Operation::class$ = nullptr;

		} // server
	} // rmi
} // java