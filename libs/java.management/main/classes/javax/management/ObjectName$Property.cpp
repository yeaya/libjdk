#include <javax/management/ObjectName$Property.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace management {

void ObjectName$Property::init$(int32_t key_index, int32_t key_length, int32_t value_length) {
	this->_key_index = key_index;
	this->_key_length = key_length;
	this->_value_length = value_length;
}

void ObjectName$Property::setKeyIndex(int32_t key_index) {
	this->_key_index = key_index;
}

$String* ObjectName$Property::getKeyString($String* name) {
	return $nc(name)->substring(this->_key_index, this->_key_index + this->_key_length);
}

$String* ObjectName$Property::getValueString($String* name) {
	int32_t in_begin = this->_key_index + this->_key_length + 1;
	int32_t out_end = in_begin + this->_value_length;
	return $nc(name)->substring(in_begin, out_end);
}

ObjectName$Property::ObjectName$Property() {
}

$Class* ObjectName$Property::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"_key_index", "I", nullptr, 0, $field(ObjectName$Property, _key_index)},
		{"_key_length", "I", nullptr, 0, $field(ObjectName$Property, _key_length)},
		{"_value_length", "I", nullptr, 0, $field(ObjectName$Property, _value_length)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(III)V", nullptr, 0, $method(ObjectName$Property, init$, void, int32_t, int32_t, int32_t)},
		{"getKeyString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, 0, $virtualMethod(ObjectName$Property, getKeyString, $String*, $String*)},
		{"getValueString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, 0, $virtualMethod(ObjectName$Property, getValueString, $String*, $String*)},
		{"setKeyIndex", "(I)V", nullptr, 0, $virtualMethod(ObjectName$Property, setKeyIndex, void, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.ObjectName$Property", "javax.management.ObjectName", "Property", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.management.ObjectName$Property",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.management.ObjectName"
	};
	$loadClass(ObjectName$Property, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectName$Property);
	});
	return class$;
}

$Class* ObjectName$Property::class$ = nullptr;

	} // management
} // javax