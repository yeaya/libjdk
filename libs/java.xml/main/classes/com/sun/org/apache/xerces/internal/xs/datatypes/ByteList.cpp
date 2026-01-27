#include <com/sun/org/apache/xerces/internal/xs/datatypes/ByteList.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							namespace datatypes {

$MethodInfo _ByteList_MethodInfo_[] = {
	{"contains", "(B)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ByteList, contains, bool, int8_t)},
	{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ByteList, getLength, int32_t)},
	{"item", "(I)B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ByteList, item, int8_t, int32_t), "com.sun.org.apache.xerces.internal.xs.XSException"},
	{"toByteArray", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ByteList, toByteArray, $bytes*)},
	{}
};

$ClassInfo _ByteList_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.datatypes.ByteList",
	nullptr,
	"java.util.List",
	nullptr,
	_ByteList_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/List<Ljava/lang/Byte;>;"
};

$Object* allocate$ByteList($Class* clazz) {
	return $of($alloc(ByteList));
}

$Class* ByteList::load$($String* name, bool initialize) {
	$loadClass(ByteList, name, initialize, &_ByteList_ClassInfo_, allocate$ByteList);
	return class$;
}

$Class* ByteList::class$ = nullptr;

							} // datatypes
						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com