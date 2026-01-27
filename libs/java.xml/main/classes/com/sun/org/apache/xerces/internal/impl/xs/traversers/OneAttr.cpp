#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/OneAttr.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace traversers {

$FieldInfo _OneAttr_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(OneAttr, name)},
	{"dvIndex", "I", nullptr, $PUBLIC, $field(OneAttr, dvIndex)},
	{"valueIndex", "I", nullptr, $PUBLIC, $field(OneAttr, valueIndex)},
	{"dfltValue", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(OneAttr, dfltValue)},
	{}
};

$MethodInfo _OneAttr_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;IILjava/lang/Object;)V", nullptr, $PUBLIC, $method(OneAttr, init$, void, $String*, int32_t, int32_t, Object$*)},
	{}
};

$ClassInfo _OneAttr_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.OneAttr",
	"java.lang.Object",
	nullptr,
	_OneAttr_FieldInfo_,
	_OneAttr_MethodInfo_
};

$Object* allocate$OneAttr($Class* clazz) {
	return $of($alloc(OneAttr));
}

void OneAttr::init$($String* name, int32_t dvIndex, int32_t valueIndex, Object$* dfltValue) {
	$set(this, name, name);
	this->dvIndex = dvIndex;
	this->valueIndex = valueIndex;
	$set(this, dfltValue, dfltValue);
}

OneAttr::OneAttr() {
}

$Class* OneAttr::load$($String* name, bool initialize) {
	$loadClass(OneAttr, name, initialize, &_OneAttr_ClassInfo_, allocate$OneAttr);
	return class$;
}

$Class* OneAttr::class$ = nullptr;

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com