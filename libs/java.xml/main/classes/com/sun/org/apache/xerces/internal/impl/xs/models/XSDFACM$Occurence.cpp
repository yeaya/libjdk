#include <com/sun/org/apache/xerces/internal/impl/xs/models/XSDFACM$Occurence.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaSymbols.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/models/XSCMRepeatingLeaf.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/models/XSDFACM.h>
#include <jcpp.h>

#undef OCCURRENCE_UNBOUNDED

using $SchemaSymbols = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaSymbols;
using $XSCMRepeatingLeaf = ::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMRepeatingLeaf;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace models {

$FieldInfo _XSDFACM$Occurence_FieldInfo_[] = {
	{"minOccurs", "I", nullptr, $FINAL, $field(XSDFACM$Occurence, minOccurs)},
	{"maxOccurs", "I", nullptr, $FINAL, $field(XSDFACM$Occurence, maxOccurs)},
	{"elemIndex", "I", nullptr, $FINAL, $field(XSDFACM$Occurence, elemIndex)},
	{}
};

$MethodInfo _XSDFACM$Occurence_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xs/models/XSCMRepeatingLeaf;I)V", nullptr, $PUBLIC, $method(XSDFACM$Occurence, init$, void, $XSCMRepeatingLeaf*, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSDFACM$Occurence, toString, $String*)},
	{}
};

$InnerClassInfo _XSDFACM$Occurence_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.models.XSDFACM$Occurence", "com.sun.org.apache.xerces.internal.impl.xs.models.XSDFACM", "Occurence", $STATIC | $FINAL},
	{}
};

$ClassInfo _XSDFACM$Occurence_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.models.XSDFACM$Occurence",
	"java.lang.Object",
	nullptr,
	_XSDFACM$Occurence_FieldInfo_,
	_XSDFACM$Occurence_MethodInfo_,
	nullptr,
	nullptr,
	_XSDFACM$Occurence_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.models.XSDFACM"
};

$Object* allocate$XSDFACM$Occurence($Class* clazz) {
	return $of($alloc(XSDFACM$Occurence));
}

void XSDFACM$Occurence::init$($XSCMRepeatingLeaf* leaf, int32_t elemIndex) {
	this->minOccurs = $nc(leaf)->getMinOccurs();
	this->maxOccurs = leaf->getMaxOccurs();
	this->elemIndex = elemIndex;
}

$String* XSDFACM$Occurence::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({"minOccurs="_s, $$str(this->minOccurs), ";maxOccurs="_s, ((this->maxOccurs != $SchemaSymbols::OCCURRENCE_UNBOUNDED) ? $($Integer::toString(this->maxOccurs)) : "unbounded"_s)});
}

XSDFACM$Occurence::XSDFACM$Occurence() {
}

$Class* XSDFACM$Occurence::load$($String* name, bool initialize) {
	$loadClass(XSDFACM$Occurence, name, initialize, &_XSDFACM$Occurence_ClassInfo_, allocate$XSDFACM$Occurence);
	return class$;
}

$Class* XSDFACM$Occurence::class$ = nullptr;

								} // models
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com