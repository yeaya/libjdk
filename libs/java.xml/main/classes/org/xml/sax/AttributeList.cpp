#include <org/xml/sax/AttributeList.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace org {
	namespace xml {
		namespace sax {

$NamedAttribute AttributeList_Attribute_var$0[] = {
	{"since", 's', "1.5"},
	{}
};

$CompoundAttribute _AttributeList_Annotations_[] = {
	{"Ljava/lang/Deprecated;", AttributeList_Attribute_var$0},
	{}
};

$MethodInfo _AttributeList_MethodInfo_[] = {
	{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AttributeList, getLength, int32_t)},
	{"getName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AttributeList, getName, $String*, int32_t)},
	{"getType", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AttributeList, getType, $String*, int32_t)},
	{"getType", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AttributeList, getType, $String*, $String*)},
	{"getValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AttributeList, getValue, $String*, int32_t)},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AttributeList, getValue, $String*, $String*)},
	{}
};

$ClassInfo _AttributeList_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.xml.sax.AttributeList",
	nullptr,
	nullptr,
	nullptr,
	_AttributeList_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_AttributeList_Annotations_
};

$Object* allocate$AttributeList($Class* clazz) {
	return $of($alloc(AttributeList));
}

$Class* AttributeList::load$($String* name, bool initialize) {
	$loadClass(AttributeList, name, initialize, &_AttributeList_ClassInfo_, allocate$AttributeList);
	return class$;
}

$Class* AttributeList::class$ = nullptr;

		} // sax
	} // xml
} // org