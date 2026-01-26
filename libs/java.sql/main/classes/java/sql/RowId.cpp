#include <java/sql/RowId.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace sql {

$MethodInfo _RowId_MethodInfo_[] = {
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getBytes", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowId, getBytes, $bytes*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _RowId_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.sql.RowId",
	nullptr,
	nullptr,
	nullptr,
	_RowId_MethodInfo_
};

$Object* allocate$RowId($Class* clazz) {
	return $of($alloc(RowId));
}

bool RowId::equals(Object$* obj) {
	 return this->$Object::equals(obj);
}

$String* RowId::toString() {
	 return this->$Object::toString();
}

int32_t RowId::hashCode() {
	 return this->$Object::hashCode();
}

$Class* RowId::load$($String* name, bool initialize) {
	$loadClass(RowId, name, initialize, &_RowId_ClassInfo_, allocate$RowId);
	return class$;
}

$Class* RowId::class$ = nullptr;

	} // sql
} // java