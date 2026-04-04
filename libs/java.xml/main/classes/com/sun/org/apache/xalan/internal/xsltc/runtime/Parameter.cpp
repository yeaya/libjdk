#include <com/sun/org/apache/xalan/internal/xsltc/runtime/Parameter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace runtime {

void Parameter::init$($String* name, Object$* value) {
	$set(this, _name, name);
	$set(this, _value, value);
	this->_isDefault = true;
}

void Parameter::init$($String* name, Object$* value, bool isDefault) {
	$set(this, _name, name);
	$set(this, _value, value);
	this->_isDefault = isDefault;
}

Parameter::Parameter() {
}

$Class* Parameter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"_name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(Parameter, _name)},
		{"_value", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Parameter, _value)},
		{"_isDefault", "Z", nullptr, $PUBLIC, $field(Parameter, _isDefault)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(Parameter, init$, void, $String*, Object$*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Object;Z)V", nullptr, $PUBLIC, $method(Parameter, init$, void, $String*, Object$*, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.runtime.Parameter",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Parameter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Parameter);
	});
	return class$;
}

$Class* Parameter::class$ = nullptr;

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com