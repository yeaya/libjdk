#include <javax/management/openmbean/CompositeData.h>

#include <java/util/Collection.h>
#include <javax/management/openmbean/CompositeType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $CompositeType = ::javax::management::openmbean::CompositeType;

namespace javax {
	namespace management {
		namespace openmbean {

$MethodInfo _CompositeData_MethodInfo_[] = {
	{"containsKey", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CompositeData, containsKey, bool, $String*)},
	{"containsValue", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CompositeData, containsValue, bool, Object$*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"get", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CompositeData, get, $Object*, $String*)},
	{"getAll", "([Ljava/lang/String;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CompositeData, getAll, $ObjectArray*, $StringArray*)},
	{"getCompositeType", "()Ljavax/management/openmbean/CompositeType;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CompositeData, getCompositeType, $CompositeType*)},
	{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"values", "()Ljava/util/Collection;", "()Ljava/util/Collection<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompositeData, values, $Collection*)},
	{}
};

$ClassInfo _CompositeData_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.openmbean.CompositeData",
	nullptr,
	nullptr,
	nullptr,
	_CompositeData_MethodInfo_
};

$Object* allocate$CompositeData($Class* clazz) {
	return $of($alloc(CompositeData));
}

bool CompositeData::equals(Object$* obj) {
	 return this->$Object::equals(obj);
}

int32_t CompositeData::hashCode() {
	 return this->$Object::hashCode();
}

$String* CompositeData::toString() {
	 return this->$Object::toString();
}

$Class* CompositeData::load$($String* name, bool initialize) {
	$loadClass(CompositeData, name, initialize, &_CompositeData_ClassInfo_, allocate$CompositeData);
	return class$;
}

$Class* CompositeData::class$ = nullptr;

		} // openmbean
	} // management
} // javax