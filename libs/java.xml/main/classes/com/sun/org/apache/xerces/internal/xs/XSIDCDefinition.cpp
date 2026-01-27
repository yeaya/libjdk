#include <com/sun/org/apache/xerces/internal/xs/XSIDCDefinition.h>

#include <com/sun/org/apache/xerces/internal/xs/StringList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <jcpp.h>

#undef IC_KEY
#undef IC_KEYREF
#undef IC_UNIQUE

using $StringList = ::com::sun::org::apache::xerces::internal::xs::StringList;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

$FieldInfo _XSIDCDefinition_FieldInfo_[] = {
	{"IC_KEY", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSIDCDefinition, IC_KEY)},
	{"IC_KEYREF", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSIDCDefinition, IC_KEYREF)},
	{"IC_UNIQUE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSIDCDefinition, IC_UNIQUE)},
	{}
};

$MethodInfo _XSIDCDefinition_MethodInfo_[] = {
	{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSIDCDefinition, getAnnotations, $XSObjectList*)},
	{"getCategory", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSIDCDefinition, getCategory, int16_t)},
	{"getFieldStrs", "()Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSIDCDefinition, getFieldStrs, $StringList*)},
	{"getRefKey", "()Lcom/sun/org/apache/xerces/internal/xs/XSIDCDefinition;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSIDCDefinition, getRefKey, XSIDCDefinition*)},
	{"getSelectorStr", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSIDCDefinition, getSelectorStr, $String*)},
	{}
};

$ClassInfo _XSIDCDefinition_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.XSIDCDefinition",
	nullptr,
	"com.sun.org.apache.xerces.internal.xs.XSObject",
	_XSIDCDefinition_FieldInfo_,
	_XSIDCDefinition_MethodInfo_
};

$Object* allocate$XSIDCDefinition($Class* clazz) {
	return $of($alloc(XSIDCDefinition));
}

$Class* XSIDCDefinition::load$($String* name, bool initialize) {
	$loadClass(XSIDCDefinition, name, initialize, &_XSIDCDefinition_ClassInfo_, allocate$XSIDCDefinition);
	return class$;
}

$Class* XSIDCDefinition::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com