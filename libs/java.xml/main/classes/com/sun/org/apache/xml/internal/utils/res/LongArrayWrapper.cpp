#include <com/sun/org/apache/xml/internal/utils/res/LongArrayWrapper.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {
							namespace res {

$FieldInfo _LongArrayWrapper_FieldInfo_[] = {
	{"m_long", "[J", nullptr, $PRIVATE, $field(LongArrayWrapper, m_long)},
	{}
};

$MethodInfo _LongArrayWrapper_MethodInfo_[] = {
	{"<init>", "([J)V", nullptr, $PUBLIC, $method(LongArrayWrapper, init$, void, $longs*)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(LongArrayWrapper, getLength, int32_t)},
	{"getLong", "(I)J", nullptr, $PUBLIC, $virtualMethod(LongArrayWrapper, getLong, int64_t, int32_t)},
	{}
};

$ClassInfo _LongArrayWrapper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.res.LongArrayWrapper",
	"java.lang.Object",
	nullptr,
	_LongArrayWrapper_FieldInfo_,
	_LongArrayWrapper_MethodInfo_
};

$Object* allocate$LongArrayWrapper($Class* clazz) {
	return $of($alloc(LongArrayWrapper));
}

void LongArrayWrapper::init$($longs* arg) {
	$set(this, m_long, arg);
}

int64_t LongArrayWrapper::getLong(int32_t index) {
	return $nc(this->m_long)->get(index);
}

int32_t LongArrayWrapper::getLength() {
	return $nc(this->m_long)->length;
}

LongArrayWrapper::LongArrayWrapper() {
}

$Class* LongArrayWrapper::load$($String* name, bool initialize) {
	$loadClass(LongArrayWrapper, name, initialize, &_LongArrayWrapper_ClassInfo_, allocate$LongArrayWrapper);
	return class$;
}

$Class* LongArrayWrapper::class$ = nullptr;

							} // res
						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com