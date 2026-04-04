#include <org/xml/sax/AttributeList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace org {
	namespace xml {
		namespace sax {

$Class* AttributeList::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AttributeList, getLength, int32_t)},
		{"getName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AttributeList, getName, $String*, int32_t)},
		{"getType", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AttributeList, getType, $String*, int32_t)},
		{"getType", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AttributeList, getType, $String*, $String*)},
		{"getValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AttributeList, getValue, $String*, int32_t)},
		{"getValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AttributeList, getValue, $String*, $String*)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"since", 's', "1.5"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.xml.sax.AttributeList",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(AttributeList, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AttributeList);
	});
	return class$;
}

$Class* AttributeList::class$ = nullptr;

		} // sax
	} // xml
} // org