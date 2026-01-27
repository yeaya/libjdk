#include <com/sun/org/apache/bcel/internal/generic/LoadClass.h>

#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ObjectType.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <jcpp.h>

using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $ObjectType = ::com::sun::org::apache::bcel::internal::generic::ObjectType;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$MethodInfo _LoadClass_MethodInfo_[] = {
	{"getLoadClassType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/ObjectType;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LoadClass, getLoadClassType, $ObjectType*, $ConstantPoolGen*)},
	{"getType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LoadClass, getType, $Type*, $ConstantPoolGen*)},
	{}
};

$ClassInfo _LoadClass_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.LoadClass",
	nullptr,
	nullptr,
	nullptr,
	_LoadClass_MethodInfo_
};

$Object* allocate$LoadClass($Class* clazz) {
	return $of($alloc(LoadClass));
}

$Class* LoadClass::load$($String* name, bool initialize) {
	$loadClass(LoadClass, name, initialize, &_LoadClass_ClassInfo_, allocate$LoadClass);
	return class$;
}

$Class* LoadClass::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com