#include <java/beans/XMLEncoder$ValueData.h>
#include <java/beans/Expression.h>
#include <java/beans/XMLEncoder.h>
#include <jcpp.h>

using $XMLEncoder = ::java::beans::XMLEncoder;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

void XMLEncoder$ValueData::init$($XMLEncoder* this$0) {
	$set(this, this$0, this$0);
	this->refs = 0;
	this->marked = false;
	$set(this, name, nullptr);
	$set(this, exp, nullptr);
}

XMLEncoder$ValueData::XMLEncoder$ValueData() {
}

$Class* XMLEncoder$ValueData::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/beans/XMLEncoder;", nullptr, $FINAL | $SYNTHETIC, $field(XMLEncoder$ValueData, this$0)},
		{"refs", "I", nullptr, $PUBLIC, $field(XMLEncoder$ValueData, refs)},
		{"marked", "Z", nullptr, $PUBLIC, $field(XMLEncoder$ValueData, marked)},
		{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XMLEncoder$ValueData, name)},
		{"exp", "Ljava/beans/Expression;", nullptr, $PUBLIC, $field(XMLEncoder$ValueData, exp)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/beans/XMLEncoder;)V", nullptr, $PRIVATE, $method(XMLEncoder$ValueData, init$, void, $XMLEncoder*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.XMLEncoder$ValueData", "java.beans.XMLEncoder", "ValueData", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.beans.XMLEncoder$ValueData",
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
		"java.beans.XMLEncoder"
	};
	$loadClass(XMLEncoder$ValueData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLEncoder$ValueData);
	});
	return class$;
}

$Class* XMLEncoder$ValueData::class$ = nullptr;

	} // beans
} // java