#include <javax/management/openmbean/TabularData.h>

#include <java/util/Collection.h>
#include <java/util/Set.h>
#include <javax/management/openmbean/CompositeData.h>
#include <javax/management/openmbean/TabularType.h>
#include <jcpp.h>

using $CompositeDataArray = $Array<::javax::management::openmbean::CompositeData>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $Set = ::java::util::Set;
using $CompositeData = ::javax::management::openmbean::CompositeData;
using $TabularType = ::javax::management::openmbean::TabularType;

namespace javax {
	namespace management {
		namespace openmbean {

$MethodInfo _TabularData_MethodInfo_[] = {
	{"calculateIndex", "(Ljavax/management/openmbean/CompositeData;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TabularData, calculateIndex, $ObjectArray*, $CompositeData*)},
	{"clear", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TabularData, clear, void)},
	{"containsKey", "([Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TabularData, containsKey, bool, $ObjectArray*)},
	{"containsValue", "(Ljavax/management/openmbean/CompositeData;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TabularData, containsValue, bool, $CompositeData*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"get", "([Ljava/lang/Object;)Ljavax/management/openmbean/CompositeData;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TabularData, get, $CompositeData*, $ObjectArray*)},
	{"getTabularType", "()Ljavax/management/openmbean/TabularType;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TabularData, getTabularType, $TabularType*)},
	{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"isEmpty", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TabularData, isEmpty, bool)},
	{"keySet", "()Ljava/util/Set;", "()Ljava/util/Set<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(TabularData, keySet, $Set*)},
	{"put", "(Ljavax/management/openmbean/CompositeData;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TabularData, put, void, $CompositeData*)},
	{"putAll", "([Ljavax/management/openmbean/CompositeData;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TabularData, putAll, void, $CompositeDataArray*)},
	{"remove", "([Ljava/lang/Object;)Ljavax/management/openmbean/CompositeData;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TabularData, remove, $CompositeData*, $ObjectArray*)},
	{"size", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TabularData, size, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"values", "()Ljava/util/Collection;", "()Ljava/util/Collection<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(TabularData, values, $Collection*)},
	{}
};

$ClassInfo _TabularData_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.openmbean.TabularData",
	nullptr,
	nullptr,
	nullptr,
	_TabularData_MethodInfo_
};

$Object* allocate$TabularData($Class* clazz) {
	return $of($alloc(TabularData));
}

bool TabularData::equals(Object$* obj) {
	 return this->$Object::equals(obj);
}

int32_t TabularData::hashCode() {
	 return this->$Object::hashCode();
}

$String* TabularData::toString() {
	 return this->$Object::toString();
}

$Class* TabularData::load$($String* name, bool initialize) {
	$loadClass(TabularData, name, initialize, &_TabularData_ClassInfo_, allocate$TabularData);
	return class$;
}

$Class* TabularData::class$ = nullptr;

		} // openmbean
	} // management
} // javax